#pragma once
#ifndef __QUATERNION_H__
#define __QUATERNION_H__

/* ---------- headers */

#include <Matrix.h>
#include <PersistMath.h>

/* ---------- definitions */

class X86MATH_DEC Quaternion
{
public:
	/* ---------- member variables */

	union
	{
		// 4-vector array.
		SINGLE		d[4];

		// 4-vector with named elements.
		struct
		{
			SINGLE	w, x, y, z;
		};

#if !defined(ANONYMOUS_ILLEGAL)
		// Scalar + 3-vector.
		struct
		{
			SINGLE	s;
			Vector	v;
		};
#endif
	};

	/* ---------- constructors & destructors */

	Quaternion(void);
	explicit Quaternion(const Matrix& m); // Converts rotation matrix to quaternion.
	Quaternion(const Vector& axis, const SINGLE angle); // Creates quaternion representing a rotation by the given angle about the given axis.
	// Creates a quaternion with scalar part ZERO, vector part v. NOTE that this
	// is NOT in general equivalent to creating a quaternion with axis == v and
	// angle == 0.
	explicit Quaternion(const Vector& vec);
	Quaternion(const SINGLE _w, const SINGLE _x, const SINGLE _y, const SINGLE _z);
	Quaternion(const PersistQuaternion& src);

	/* ---------- accessors */

	Quaternion get_conjugate(void) const;
	Quaternion get_inverse(void) const;
	Quaternion get_log(void) const;
	Quaternion get_exp(void) const; // Use on pure quaternions (s == 0)
	SINGLE get_magnitude(void) const; // For debugging purposes only. Quaternions representing rotations should always have magnitude 1.

	Quaternion set(const SINGLE _w, const SINGLE _x, const SINGLE _y, const SINGLE _z);
	Quaternion set(const Matrix& m);
	void set_identity(void);

	/* ---------- member functions */

	SINGLE norm(void) const;
	void normalize(void);
	Quaternion scale(const SINGLE scalar);
	Quaternion scale_by_reciprocal(SINGLE scalar);
	Quaternion operator *= (const SINGLE scalar);
	Quaternion operator /= (const SINGLE scalar);
	Vector transform(const Vector& vec);
	void compute_axis_angle(Vector& axis, float& angle); // Compute axis & angle representation of quaternion.

	X86MATH_DEC friend Quaternion operator + (const Quaternion& q1, const Quaternion& q2);
	X86MATH_DEC friend Quaternion operator - (const Quaternion& q1, const Quaternion& q2);
	X86MATH_DEC friend Quaternion operator * (const Quaternion& q1, const Quaternion& q2);
	X86MATH_DEC friend Quaternion operator * (const Quaternion& q, const SINGLE scalar);
	X86MATH_DEC friend Quaternion operator / (const Quaternion& q, const SINGLE scalar);

	X86MATH_DEC friend Quaternion slerp(const Quaternion& q1, const Quaternion& q2, const SINGLE t);
	X86MATH_DEC friend Quaternion squad(const Quaternion& q0, const Quaternion& q1, const Quaternion& q2, const Quaternion& q3, const SINGLE t);
	X86MATH_DEC friend Quaternion spline_squad(const Quaternion& q0, const Quaternion& q1, const Quaternion& q2, const Quaternion& q3, const SINGLE t);
	X86MATH_DEC friend Quaternion mul(const Quaternion& q1, const Quaternion& q2);
	X86MATH_DEC friend Quaternion scale(const Quaternion& q, const SINGLE scalar);
	X86MATH_DEC friend Quaternion scale_by_reciprocal(const Quaternion& q, SINGLE scalar);
};

/* ---------- prototypes */

X86MATH_DEC extern Quaternion operator + (const Quaternion& q1, const Quaternion& q2);
X86MATH_DEC extern Quaternion operator - (const Quaternion& q1, const Quaternion& q2);
X86MATH_DEC extern Quaternion operator * (const Quaternion& q1, const Quaternion& q2);
X86MATH_DEC extern Quaternion operator * (const Quaternion& q, const SINGLE scalar);
X86MATH_DEC extern Quaternion operator / (const Quaternion& q, const SINGLE scalar);
// Spherical Linear Interpolation
X86MATH_DEC extern Quaternion slerp(const Quaternion& q1, const Quaternion& q2, const SINGLE t);
// Spherical Quadratic Interpolation
X86MATH_DEC extern  Quaternion squad(const Quaternion& q0, const Quaternion& q1, const Quaternion& q2, const Quaternion& q3, const SINGLE t);
// Spherical Spline Interpolation
X86MATH_DEC extern Quaternion spline_squad(const Quaternion& q0, const Quaternion& q1, const Quaternion& q2, const Quaternion& q3, const SINGLE t);
X86MATH_DEC extern Quaternion mul(const Quaternion& q1, const Quaternion& q2);
X86MATH_DEC extern Quaternion scale(const Quaternion& q, const SINGLE scalar);
X86MATH_DEC extern Quaternion scale_by_reciprocal(const Quaternion& q, SINGLE scalar);

/* ---------- globals */

/* ---------- inline code */

#endif // __QUATERNION_H__
