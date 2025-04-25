#pragma once

#include <Matrix.h>
#include <Transform.h>

struct EngineObject
{
private: COMMON_DEC virtual void __stdcall initialize_instance(long index);
private: COMMON_DEC virtual void __stdcall create_instance(long index);
private: COMMON_DEC virtual void __stdcall destroy_instance(long index);
private: COMMON_DEC virtual void __stdcall set_position(long index, const Vector& pos);
private: COMMON_DEC virtual const Vector& __stdcall get_position(long index) const;
private: COMMON_DEC virtual void __stdcall set_orientation(long index, const Matrix& orientation);
private: COMMON_DEC virtual const Matrix& __stdcall get_orientation(long index) const;
private: COMMON_DEC virtual void __stdcall set_transform(long index, const class Transform& transform);
private: COMMON_DEC virtual const Transform& __stdcall get_transform(long index) const;
private: COMMON_DEC virtual void __stdcall get_centered_radius(long index, float*, Vector*) const;
private: COMMON_DEC virtual void __stdcall set_centered_radius(long index, float, Vector const&);
private: COMMON_DEC virtual void __stdcall set_instance_flags(long, unsigned long);
private: COMMON_DEC virtual unsigned long __stdcall get_instance_flags(long) const;
private: COMMON_DEC virtual bool __stdcall joint_changed(long);
private: COMMON_DEC virtual ~EngineObject();
private: COMMON_DEC virtual const Vector& __stdcall get_velocity(long) const;
private: COMMON_DEC virtual void __stdcall set_velocity(long, const Vector&);
private: COMMON_DEC virtual const Vector& __stdcall get_angular_velocity(long) const;
private: COMMON_DEC virtual void __stdcall set_angular_velocity(long, Vector const&);
public:	COMMON_DEC EngineObject(const EngineObject&);
public:	COMMON_DEC EngineObject();
public:	COMMON_DEC EngineObject& operator=(EngineObject const&);
public:	COMMON_DEC const Matrix& get_orientation() const;
public:	COMMON_DEC const Vector& get_position() const;
public:	COMMON_DEC const float get_radius() const;
public:	COMMON_DEC const Transform& get_transform() const;
private: COMMON_DEC void set_centered_radius(float radius, Vector const& centerOfMass);
public: COMMON_DEC void set_orientation(const Matrix& orientation);
public: COMMON_DEC void set_position(const Vector& pos);
public: COMMON_DEC void set_transform(const Transform& transform);
public: COMMON_DEC void update_tree() const;

	  long index;
	  Transform transform;
	  float radius;
	  Vector centerOfMass;
	  unsigned long instanceFlags;
};
