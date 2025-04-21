/* ---------- headers */

#include "Transform.h"
#include "3dMath.h"

/* ---------- constants */

/* ---------- definitions */

typedef SINGLE OASIS[3][3];

/* ---------- prototypes */

/* ---------- globals */

/* ---------- public code */

Transform::Transform(void)
{
	set_identity();
}

Transform::Transform(const Vector& i, const Vector& j, const Vector& k) : Matrix(i, j, k)
{
	translation.zero();
}

Transform::Transform(const Transform& transform)
{
	*this = transform;
}

Transform::Transform(const Matrix& matrix)
{
	*static_cast<Matrix*>(this) = matrix;
	translation.zero();
}

Transform::Transform(const Matrix& rot, const Vector& trans)
{
	*static_cast<Matrix*>(this) = rot;
	translation = trans;
}

Transform::Transform(const Vector& trans)
{
	Matrix::set_identity();
	translation = trans;
}

Transform::Transform(bool)
{
}

Transform::Transform(const PersistTransform& src)
{
	d[0][0] = src.m.e00;
	d[0][1] = src.m.e01;
	d[0][2] = src.m.e02;
	d[1][0] = src.m.e10;
	d[1][1] = src.m.e11;
	d[1][2] = src.m.e12;
	d[2][0] = src.m.e20;
	d[2][1] = src.m.e21;
	d[2][2] = src.m.e22;

	translation.x = src.v.x;
	translation.y = src.v.y;
	translation.z = src.v.z;
}

void Transform::set_identity(void)
{
	Matrix::set_identity();
	translation.zero();
}

Transform Transform::multiply(const Transform& t) const
{
	Transform result(false);	// bool constructor prevents extra initialization
	MATH_ENGINE.mul(result, *this, t);
	return result;
}

void Transform::compose_rotation(const U32 axis, const SINGLE angle)
{
	translation.zero();
	Matrix::compose_rotation(axis, angle);
}

Transform Transform::get_transpose(void) const
{
	return Transform(Matrix::get_transpose(), -translation);
}

Transform Transform::get_inverse(void) const
{
	return Transform(Matrix::get_transpose(), -(translation * *static_cast<const Matrix*>(this)));
}

Transform Transform::get_general_inverse(SINGLE& w) const
{
	Transform result(false);
	MATH_ENGINE.general_inverse(result, w, *this);
	return result;
}

const Vector& Transform::get_position(void) const
{
	return translation;
}

void Transform::set_position(const SINGLE x, const SINGLE y, const SINGLE z)
{
	translation.x = x;
	translation.y = y;
	translation.z = z;
}

void Transform::set_position(const Vector& pos)
{
	translation = pos;
}

void Transform::move_position(const SINGLE dx, const SINGLE dy, const SINGLE dz)
{
	const Vector in(dx, dy, dz);
	Vector out;
	MATH_ENGINE.rotate(out, *this, in);
	translation += out;
}

void Transform::move_position(const Vector& delta)
{
	Vector out;
	MATH_ENGINE.rotate(out, *this, delta);
	translation += out;
}

const Matrix& Transform::get_orientation(void) const
{
	return *this;
}

void Transform::set_orientation(const SINGLE pitch_degrees, const SINGLE roll_degrees, const SINGLE yaw_degrees)
{
	// sets orientation element of transform, leaving position
	// vector untouched
	// Apply yaw, pitch, roll in order ( angles in degrees )

	Matrix::set_orientation(pitch_degrees, roll_degrees, yaw_degrees);
}

void Transform::set_orientation(const Matrix& mat)
{
	*this = mat;
}

void Transform::set_orientation(const Quaternion& q)
{
	Matrix m(q);
	set_orientation(m);
}

Vector Transform::rotate(const Vector& v) const
{
	Vector result;
	MATH_ENGINE.rotate(result, *this, v);
	return result;
}

Vector Transform::rotate_translate(const Vector& v) const
{
	Vector result;
	MATH_ENGINE.transform(result, *this, v);
	return result;
}

Vector Transform::inverse_rotate(const Vector& v) const
{
	Vector result;
	MATH_ENGINE.inverse_rotate(result, *this, v);
	return result;
}

Vector Transform::inverse_rotate_translate(const Vector& v) const
{
	Vector result;
	MATH_ENGINE.inverse_transform(result, *this, v);
	return result;
}

Transform& Transform::operator = (const Matrix& matrix)
{
	*static_cast<Matrix*>(this) = matrix;
	return *this;
}

#ifdef _INC_MEMORY	
bool Transform::operator == (const Transform& t) const
{
	return (0 == memcmp(this, &t, sizeof(*this)));
}

bool Transform::operator != (const Transform& t) const
{
	return !(*this == t);
}
#endif

bool Transform::equal(const Transform& t, const SINGLE tolerance) const
{
	return translation.equal(t.translation, tolerance) && Matrix::equal(t, tolerance);
}

const Transform& Transform::operator *= (const Transform& t)
{
	*this = multiply(t);
	return *this;
}

void Transform::rotate_about_i(SINGLE angle)
{
	OASIS temp;
	SINGLE cosine, sine;

	//	angle *= -PI_RADIANS;		// convert to radians
	angle = -angle;
	cosine = (SINGLE)cos(angle);
	sine = (SINGLE)sin(angle);

	memcpy(temp, d, sizeof(d));
	d[0][1] = (cosine * temp[0][1]) - (sine * temp[0][2]);
	d[1][1] = (cosine * temp[1][1]) - (sine * temp[1][2]);
	d[2][1] = (cosine * temp[2][1]) - (sine * temp[2][2]);

	d[0][2] = (cosine * temp[0][2]) + (sine * temp[0][1]);
	d[1][2] = (cosine * temp[1][2]) + (sine * temp[1][1]);
	d[2][2] = (cosine * temp[2][2]) + (sine * temp[2][1]);
}

void Transform::rotate_about_j(SINGLE angle)
{
	OASIS temp;
	SINGLE cosine, sine;

	//	angle *= PI_RADIANS;		// convert to radians
	cosine = (SINGLE)cos(angle);
	sine = (SINGLE)sin(angle);
	memcpy(temp, d, sizeof(d));

	d[0][0] = (cosine * temp[0][0]) + (sine * temp[0][2]);
	d[1][0] = (cosine * temp[1][0]) + (sine * temp[1][2]);
	d[2][0] = (cosine * temp[2][0]) + (sine * temp[2][2]);

	d[0][2] = (cosine * temp[0][2]) - (sine * temp[0][0]);
	d[1][2] = (cosine * temp[1][2]) - (sine * temp[1][0]);
	d[2][2] = (cosine * temp[2][2]) - (sine * temp[2][0]);
}

void Transform::rotate_about_k(SINGLE angle)
{
	OASIS temp;
	SINGLE cosine, sine;

	//	angle *= -PI_RADIANS;		// convert to radians
	angle = -angle;
	cosine = (SINGLE)cos(angle);
	sine = (SINGLE)sin(angle);

	memcpy(temp, d, sizeof(d));

	d[0][0] = (cosine * temp[0][0]) + (sine * temp[0][1]);
	d[1][0] = (cosine * temp[1][0]) + (sine * temp[1][1]);
	d[2][0] = (cosine * temp[2][0]) + (sine * temp[2][1]);

	d[0][1] = (cosine * temp[0][1]) - (sine * temp[0][0]);
	d[1][1] = (cosine * temp[1][1]) - (sine * temp[1][0]);
	d[2][1] = (cosine * temp[2][1]) - (sine * temp[2][0]);
}


Vector operator * (const Transform& t, const Vector& v)
{
	return t.rotate_translate(v);
}

Vector operator * (const Vector& v, const Transform& t)
{
	return t.inverse_rotate_translate(v);
}

Transform operator * (const Transform& t1, const Transform& t2)
{
	return t1.multiply(t2);
}

Transform operator + (const Transform& t1, const Transform& t2)
{
	return add(t1, t2);
}

Transform operator - (const Transform& t1, const Transform& t2)
{
	return subtract(t1, t2);
}

Transform add(const Transform& m1, const Transform& m2)
{
	return Transform(add(*((const Matrix*)&m1), *((const Matrix*)&m2)), (m1.translation + m2.translation));
}

Transform subtract(const Transform& m1, const Transform& m2)
{
	return Transform(subtract(*((const Matrix*)&m1), *((const Matrix*)&m2)), (m1.translation - m2.translation));
}

/* ---------- private code */

/* ---------- reverse engineering */
