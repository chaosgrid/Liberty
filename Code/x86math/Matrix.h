#pragma once
#ifndef __MATRIX_H__
#define __MATRIX_H__

/* ---------- headers */

#include <typedefs.h>
#include <Vector.h>
#include <memory.h> // #TODO: Why is this here?

/* ---------- constants */

// defines
// enums
// constexpr

/* ---------- definitions */

// Rotation axis definitions

#define X_AXIS 0
#define Y_AXIS 1
#define Z_AXIS 2

// assumes Y is up

#define PITCH X_AXIS
#define YAW Y_AXIS
#define ROLL Z_AXIS

class Quaternion; // Forward reference.

// 3x3 Matrix class.
class X86MATH_DEC Matrix
{
public:
	/* ---------- static functions */

	static SINGLE pow2(const SINGLE f); // avoids calling fabs below

	/* ---------- member variables */

	SINGLE d[3][3];

	/* ---------- constructors & destructors */

	Matrix(void);
	Matrix(const Vector& i, const Vector& j, const Vector& k);
	Matrix(const Quaternion& q);
	Matrix(const SINGLE e00, const SINGLE e01, const SINGLE e02, const SINGLE e10, const SINGLE e11, const SINGLE e12, const SINGLE e20, const SINGLE e21, const SINGLE e22);
	Matrix(const PersistMatrix& src);

	/* ---------- accessors */

	Matrix get_transpose(void) const; // For a rotation matrix, inverse == transpose, but not for general matrices.
	Matrix get_inverse(void) const;
	Vector get_i(void) const;
	Vector get_j(void) const;
	Vector get_k(void) const;
	void set_i(const Vector& i);
	void set_j(const Vector& j);
	void set_k(const Vector& k);
	void set_orientation(const SINGLE pitch_degrees, const SINGLE roll_degrees, const SINGLE yaw_degrees); // Apply yaw, pitch, roll in order ( angles in degrees )
	void set_x_rotation(const SINGLE angle); // pitch
	void set_y_rotation(const SINGLE angle); // yaw
	void set_z_rotation(const SINGLE angle); // roll

	/* ---------- member functions */

	void rotate_around_i(SINGLE angle); // pitch
	void rotate_around_j(SINGLE angle); // yaw
	void rotate_around_k(SINGLE angle); // roll
	void x_rotate_left(const SINGLE angle); // pitch
	void y_rotate_left(const SINGLE angle);// yaw
	void z_rotate_left(const SINGLE angle); // roll
	void x_rotate_right(const SINGLE angle); // pitch
	void y_rotate_right(const SINGLE angle);// yaw
	void z_rotate_right(const SINGLE angle); // roll

	SINGLE det(void) const; // Returns determinant of matrix.
	const Matrix& set_identity(void);
	void make_orthogonal();
	const Matrix& zero(void);

	const Matrix& scale(const SINGLE s);
	const Matrix& scale_by_reciprocal(const SINGLE s);
	const Matrix& mul(const Matrix& m);
	void compose_rotation(const U32 axis, const SINGLE angle); // expects degrees
	bool equal(const Matrix& m, const SINGLE tolerance) const;

	const Matrix& operator += (const Matrix& m);
	const Matrix& operator -= (const Matrix& m);
	const Matrix& operator *= (const SINGLE s);
	const Matrix& operator /= (const SINGLE s);
	const Matrix& operator *= (const Matrix& m);

#ifdef _INC_MEMORY // #TODO: Why is this here?
	bool operator == (const Matrix& m) const;
	bool operator != (const Matrix& m) const;
#endif

	// NOTE: The following two operators are NOT equivalent, as matrix multiplication is not commutative.
	//
	// mat * vec performs pre-multiplication with a column vector, and
	// vec * mat performs post-multiplication with a row vector.
	//
	// mat * vec is equivalent to mul(mat, vec),
	// while vec * mat is equivalent to transpose_mul(mat, vec).
	// These operators are provided for completeness.

	X86MATH_DEC friend Vector operator * (const Matrix& m, const Vector& v);
	X86MATH_DEC friend Vector operator * (const Vector& v, const Matrix& m);

	X86MATH_DEC friend Matrix operator * (const Matrix& m1, const Matrix& m2);
	X86MATH_DEC friend Matrix operator + (const Matrix& m1, const Matrix& m2);
	X86MATH_DEC friend Matrix operator - (const Matrix& m1, const Matrix& m2);
	X86MATH_DEC friend Matrix operator * (const Matrix& m, const SINGLE s);
	X86MATH_DEC friend Matrix operator * (const SINGLE s, const Matrix& m);
	X86MATH_DEC friend Matrix operator / (const Matrix& m, const SINGLE s);

	X86MATH_DEC friend Matrix mul(const Matrix& m, const SINGLE s);
	X86MATH_DEC friend Vector mul(const Matrix& m, const Vector& v);
	X86MATH_DEC friend Matrix mul(const Matrix& m1, const Matrix& m2);
	X86MATH_DEC friend Vector transpose_mul(const Matrix& m, const Vector& v);
	X86MATH_DEC friend Matrix add(const Matrix& m1, const Matrix& m2);
	X86MATH_DEC friend Matrix subtract(const Matrix& m1, const Matrix& m2);
	X86MATH_DEC friend Matrix dual(const Vector& v); // Returns 2nd order skew-symmetric dual tensor of vector.
};

/* ---------- prototypes */

X86MATH_DEC extern Vector operator * (const Matrix& m, const Vector& v);
X86MATH_DEC extern Vector operator * (const Vector& v, const Matrix& m);
X86MATH_DEC extern Matrix operator * (const Matrix& m1, const Matrix& m2);
X86MATH_DEC extern Matrix operator + (const Matrix& m1, const Matrix& m2);
X86MATH_DEC extern Matrix operator - (const Matrix& m1, const Matrix& m2);
X86MATH_DEC extern Matrix operator * (const Matrix& m, const SINGLE s);
X86MATH_DEC extern Matrix operator * (const SINGLE s, const Matrix& m);
X86MATH_DEC extern Matrix operator / (const Matrix& m, const SINGLE s);
X86MATH_DEC extern Matrix mul(const Matrix& m, const SINGLE s);
X86MATH_DEC extern Vector mul(const Matrix& m, const Vector& v);
X86MATH_DEC extern Matrix mul(const Matrix& m1, const Matrix& m2);
X86MATH_DEC extern Vector transpose_mul(const Matrix& m, const Vector& v);
X86MATH_DEC extern Matrix add(const Matrix& m1, const Matrix& m2);
X86MATH_DEC extern Matrix subtract(const Matrix& m1, const Matrix& m2);
X86MATH_DEC extern Matrix dual(const Vector& v);

/* ---------- globals */

/* ---------- inline code */

#endif // __MATRIX_H__
