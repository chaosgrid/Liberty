#pragma once



struct EngineObject
{
    public:
        COMMON_DEC virtual void __stdcall initialize_instance(long);                        // 0
        COMMON_DEC virtual void __stdcall create_instance(long);                            // 4
        COMMON_DEC virtual void __stdcall destroy_instance(long);                           // 8
        COMMON_DEC virtual void __stdcall set_position(long, const FLHookCore::Vector&);                // 12
        COMMON_DEC virtual const FLHookCore::Vector& __stdcall get_position(long) const;                // 16
        COMMON_DEC virtual void __stdcall set_orientation(long, const FLHookCore::Matrix&);             // 20
        COMMON_DEC virtual const FLHookCore::Matrix& __stdcall get_orientation(long) const;             // 24
        COMMON_DEC virtual void __stdcall set_transform(long, const class FLHookCore::Transform&);      // 28
        COMMON_DEC virtual const FLHookCore::Transform& __stdcall get_transform(long) const;            // 32
        COMMON_DEC virtual void __stdcall get_centered_radius(long, float*, FLHookCore::Vector*) const; // 36
        COMMON_DEC virtual void __stdcall set_centered_radius(long, float, const FLHookCore::Vector&);  // 40
        COMMON_DEC virtual void __stdcall set_instance_flags(long, unsigned long);          // 44
        COMMON_DEC virtual unsigned long __stdcall get_instance_flags(long) const;          // 48
        COMMON_DEC virtual bool __stdcall joint_changed(long);                              // 52
        COMMON_DEC virtual ~EngineObject();                                                 // 56
        COMMON_DEC virtual const FLHookCore::Vector& __stdcall get_velocity(long) const;                // 60
        COMMON_DEC virtual void __stdcall set_velocity(long, const FLHookCore::Vector&);                // 64
        COMMON_DEC virtual const FLHookCore::Vector& __stdcall get_angular_velocity(long) const;        // 68
        COMMON_DEC virtual void __stdcall set_angular_velocity(long, const FLHookCore::Vector&);        // 72

        COMMON_DEC EngineObject(const EngineObject&);
        COMMON_DEC EngineObject();
        COMMON_DEC EngineObject& operator=(const EngineObject&);
        COMMON_DEC const FLHookCore::Matrix& get_orientation() const;
        COMMON_DEC const FLHookCore::Vector& get_position() const;
        COMMON_DEC const float get_radius() const;
        COMMON_DEC const FLHookCore::Transform& get_transform() const;
        COMMON_DEC void set_centered_radius(float, const FLHookCore::Vector&);
        COMMON_DEC void set_orientation(const FLHookCore::Matrix&);
        COMMON_DEC void set_position(const FLHookCore::Vector&);
        COMMON_DEC void set_transform(const FLHookCore::Transform&);
        COMMON_DEC void update_tree() const;

        void* index;         // 1 fetched in CBase::get_index()
        FLHookCore::Matrix orientation;  // 2
        FLHookCore::Vector position;     // 11
        float radius;        // 14
        FLHookCore::Vector centerOfMass; // 15
        uint instanceFlags;  // 18
};
