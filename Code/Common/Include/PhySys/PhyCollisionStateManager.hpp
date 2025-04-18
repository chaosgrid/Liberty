#pragma once


namespace PhySys
{
    class PhyCollisionStateManager
    {
        public:
            COMMON_DEC PhyCollisionStateManager(const PhyCollisionStateManager&);
            COMMON_DEC PhyCollisionStateManager(CObject*);
            COMMON_DEC ~PhyCollisionStateManager();
            COMMON_DEC PhyCollisionStateManager& operator=(const PhyCollisionStateManager&);
            COMMON_DEC void enable_collisions(bool, bool);
            COMMON_DEC bool get_actual_collision_state() const;
            COMMON_DEC bool get_desired_collision_state() const;
            // COMMON_DEC @@@ int get_intruding_cobjs(bool,struct CheapSet<struct CObject *,struct st6::less<struct CObject *>> &);
            COMMON_DEC virtual void mindist_entered_volume(class IVP_Controller_Phantom*, class IVP_Mindist_Base*);
            COMMON_DEC virtual void mindist_left_volume(IVP_Controller_Phantom*, IVP_Mindist_Base*);
            COMMON_DEC virtual void phantom_is_going_to_be_deleted_event(IVP_Controller_Phantom*);
            COMMON_DEC void update(float);

        protected:
            COMMON_DEC class IVP_Real_Object* get_other_object(IVP_Mindist_Base*);
            COMMON_DEC CObject* mindist_to_cobject(IVP_Mindist_Base*);

        public:
            CObject* cobject;
            unsigned char data[OBJECT_DATA_SIZE];
    };
} // namespace PhySys
