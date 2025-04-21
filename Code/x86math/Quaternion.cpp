/* ---------- headers */

#include "Quaternion.h"
#include "3dMath.h"

/* ---------- constants */

// some math functions broke with the compiler
#define MATH_BROKEN NOT_IMPLEMENTED

namespace QuaternionNS
{
	constexpr SINGLE epsilon = SINGLE(1e-03f);
}

/* ---------- definitions */

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

Quaternion::Quaternion(void) :
	d()
{
}

Quaternion::Quaternion(const Matrix& m)
{
	MATH_ENGINE.matrix_to_quaternion(*this, m);
}

Quaternion::Quaternion(const Vector& axis, const SINGLE angle)
{
	const SINGLE half_angle = angle / 2.0f;

#if !defined(ANONYMOUS_ILLEGAL)
	s = (SINGLE)cos(half_angle);
	v = axis;
	v.normalize();
	v *= (SINGLE)sin(half_angle);
#else
	w = (SINGLE)cos(half_angle);
	Vector V = axis;
	V.normalize();
	V *= (SINGLE)sin(half_angle);
	x = V.x;
	y = V.y;
	z = V.z;
#endif
}

// Creates a quaternion with scalar part ZERO, vector part v. NOTE that this
// is NOT in general equivalent to creating a quaternion with axis == v and
// angle == 0.
Quaternion::Quaternion(const Vector& vec)
{
#if !defined(ANONYMOUS_ILLEGAL)
	s = 0.0f;
	v = vec;
#else
	w = 0.0f;
	x = vec.x;
	y = vec.y;
	z = vec.z;
#endif
}

Quaternion::Quaternion(const SINGLE _w, const SINGLE _x, const SINGLE _y, const SINGLE _z)
{
	w = _w;
	x = _x;
	y = _y;
	z = _z;
}

Quaternion::Quaternion(const PersistQuaternion& src)
{
	w = src.w;
	x = src.x;
	y = src.y;
	z = src.z;
}

Quaternion Quaternion::set(const SINGLE _w, const SINGLE _x, const SINGLE _y, const SINGLE _z)
{
	w = _w;
	x = _x;
	y = _y;
	z = _z;
	return *this;
}

Quaternion Quaternion::set(const Matrix& m)
{
	MATH_ENGINE.matrix_to_quaternion(*this, m);
	return *this;
}

void Quaternion::set_identity(void)
{
#if !defined(ANONYMOUS_ILLEGAL)
	s = 1.0f;
	v.zero();
#else
	w = 1.0f;
	x = y = z = 0.0f;
#endif
}

Quaternion Quaternion::get_conjugate(void) const
{
	Quaternion result;
#if !defined(ANONYMOUS_ILLEGAL)
	result.s = s;
	result.v = -v;
#else
	result.w = w;
	result.x = -x;
	result.y = -y;
	result.z = -z;
#endif
	return result;
}

Quaternion Quaternion::get_inverse(void) const
{
	return get_conjugate() * (1.0f / norm());
}

// For debugging purposes only. Quaternions representing rotations should
// always have magnitude 1.
SINGLE Quaternion::get_magnitude(void) const
{
#if !defined(ANONYMOUS_ILLEGAL)
	return (SINGLE)sqrt(s * s + v.magnitude_squared());
#else
	return (SINGLE)sqrt(w * w + Vector(x, y, z).magnitude_squared());
#endif
}

SINGLE Quaternion::norm(void) const
{
#if !defined(ANONYMOUS_ILLEGAL)
	return s * s + v.magnitude_squared();
#else
	return w * w + Vector(x, y, z).magnitude_squared();
#endif
}

Quaternion Quaternion::get_log(void) const
{
#if !defined(ANONYMOUS_ILLEGAL)
	if (fabs(s) < 1.0f)
	{
		const SINGLE	angle = SINGLE(acos(s));
		const SINGLE	sine = SINGLE(sin(angle));

		if (sine >= QuaternionNS::epsilon)
		{
			return Quaternion(v * (angle / sine));
		}
	}

	return Quaternion(v);
#else
	if (fabs(w) < 1.0f)
	{
		const SINGLE	angle = acos(w);
		const SINGLE	sine = sin(angle);

		if (sine >= QuaternionNS::epsilon)
		{
			return Quaternion(Vector(x, y, z) * (angle / sine));
		}
	}

	return Quaternion(Vector(x, y, z));
#endif
}

// Use on pure quaternions (s == 0)
Quaternion Quaternion::get_exp(void) const
{
#if !defined(ANONYMOUS_ILLEGAL)
	const SINGLE	angle = v.magnitude();
	const SINGLE	sine = SINGLE(sin(angle));

	if (sine >= QuaternionNS::epsilon)
	{
		const Vector	exp_v = v * (sine / angle);

		return Quaternion(SINGLE(cos(angle)), exp_v.x, exp_v.y, exp_v.z);
	}
	else
	{
		return Quaternion(SINGLE(cos(angle)), v.x, v.y, v.z);
	}
#else
	const Vector	_v(x, y, z);
	const SINGLE	angle = _v.magnitude();
	const SINGLE	sine = sin(angle);

	if (sine >= QuaternionNS::epsilon)
	{
		const Vector	exp_v = _v * (sine / angle);

		return Quaternion(cos(angle), exp_v.x, exp_v.y, exp_v.z);
	}
	else
	{
		return Quaternion(cos(angle), x, y, z);
	}
#endif
}

void Quaternion::normalize(void)
{
	SINGLE m = 1.0f / get_magnitude();
#if !defined(ANONYMOUS_ILLEGAL)
	s *= m;
	v *= m;
#else
	w *= m;
	x *= m;
	y *= m;
	z *= m;
#endif
}

Quaternion Quaternion::scale(const SINGLE scalar)
{
#if !defined(ANONYMOUS_ILLEGAL)
	s *= scalar;
	v *= scalar;
#else
	w *= scalar;
	x *= scalar;
	y *= scalar;
	z *= scalar;
#endif
	return *this;
}

Quaternion Quaternion::scale_by_reciprocal(SINGLE scalar)
{
	scalar = 1.0f / scalar;
#if !defined(ANONYMOUS_ILLEGAL)
	s *= scalar;
	v *= scalar;
#else
	w *= scalar;
	x *= scalar;
	y *= scalar;
	z *= scalar;
#endif
	return *this;
}

Quaternion Quaternion::operator *= (const SINGLE scalar)
{
	return scale(scalar);
}

Quaternion Quaternion::operator /= (const SINGLE scalar)
{
	return scale_by_reciprocal(scalar);
}

Vector Quaternion::transform(const Vector& vec)
{
	Vector result;
	MATH_ENGINE.transform(result, *this, vec);
	return result;
}

// 
// Compute axis & angle representation of quaternion.
//
void Quaternion::compute_axis_angle(Vector& axis, float& angle)
{
	angle = (float)(2.0f * acos(w));
	axis.x = (float)(2.0f * asin(x));
	axis.y = (float)(2.0f * asin(y));
	axis.z = (float)(2.0f * asin(z));

	const float mag = axis.magnitude();
	if (mag > 1e-5f)
	{
		axis /= mag;
	}
}

Quaternion slerp(const Quaternion& q1, const Quaternion& q2, const SINGLE t)
{
	Quaternion result;
	MATH_ENGINE.quat_slerp(result, q1, q2, t);
	return result;
}

Quaternion squad(const Quaternion& q0, const Quaternion& q1, const Quaternion& q2, const Quaternion& q3, const SINGLE t)
{
	return slerp(slerp(q0, q3, t), slerp(q1, q2, t), 2.0f * t * (1.0f - t));
}

Quaternion spline_squad(const Quaternion& q0, const Quaternion& q1, const Quaternion& q2, const Quaternion& q3, const SINGLE t)
{
	const Quaternion	q1_inv(q1.get_inverse());
	const Quaternion	q2_inv(q2.get_inverse());

	const Quaternion	a1(q1 * (((q1_inv * q2).get_log() + (q1_inv * q0).get_log()) * (-0.25f)).get_exp());
	const Quaternion	a2(q2 * (((q2_inv * q3).get_log() + (q2_inv * q1).get_log()) * (-0.25f)).get_exp());

	return squad(q1, a1, a2, q2, t);
}

Quaternion mul(const Quaternion& q1, const Quaternion& q2)
{
	Quaternion result;
	MATH_ENGINE.mul(result, q1, q2);
	return result;
}

Quaternion operator + (const Quaternion& q1, const Quaternion& q2)
{
	return Quaternion(q1.w + q2.w, q1.x + q2.x, q1.y + q2.y, q1.z + q2.z);
}

Quaternion operator - (const Quaternion& q1, const Quaternion& q2)
{
	return Quaternion(q1.w - q2.w, q1.x - q2.x, q1.y - q2.y, q1.z - q2.z);
}

Quaternion operator * (const Quaternion& q1, const Quaternion& q2)
{
	return mul(q1, q2);
}

Quaternion scale(const Quaternion& q, const SINGLE scalar)
{
	Quaternion result;
#if !defined(ANONYMOUS_ILLEGAL)
	result.s = q.s * scalar;
	result.v = q.v * scalar;
#else
	result.w = q.w * scalar;
	result.x = q.x * scalar;
	result.y = q.y * scalar;
	result.z = q.z * scalar;
#endif
	return result;
}

Quaternion scale_by_reciprocal(const Quaternion& q, SINGLE scalar)
{
	Quaternion result;
	scalar = 1.0f / scalar;
#if !defined(ANONYMOUS_ILLEGAL)
	result.s = q.s * scalar;
	result.v = q.v * scalar;
#else
	result.w = q.w * scalar;
	result.x = q.x * scalar;
	result.y = q.y * scalar;
	result.z = q.z * scalar;
#endif
	return result;
}

Quaternion operator * (const Quaternion& q, const SINGLE scalar)
{
	MATH_BROKEN;
	// return ::scale(q, scalar);
}

Quaternion operator / (const Quaternion& q, const SINGLE scalar)
{
	MATH_BROKEN;
	// return ::scale_by_reciprocal(q, scalar);
}

/* ---------- private code */

/* ---------- reverse engineering */
