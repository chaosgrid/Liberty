#pragma once


#include "../Unknown.hpp"

namespace PhySys
{
    struct Controller
    {
        public:
            COMMON_DEC virtual ~Controller();

            COMMON_DEC static void Register(Controller*, CObject*);
            COMMON_DEC static void UnRegister(Controller*);

            COMMON_DEC Controller(const Controller&);
            COMMON_DEC Controller();
            COMMON_DEC Controller& operator=(const Controller&);
            COMMON_DEC void push(const FLHookCore::Vector&, float);
            COMMON_DEC void rotate(const FLHookCore::Vector&, float);
            COMMON_DEC void wakeup();

        protected:
            COMMON_DEC virtual void core_is_going_to_be_deleted_event(IVP_Core*);
            // virtual float dunno_retn_1f(); //??
            COMMON_DEC virtual IVP_U_Vector<IVP_Core>* get_associated_controlled_cores();
            // virtual void create_instance(long); //??
            COMMON_DEC virtual void do_simulation_controller(IVP_Event_Sim*, IVP_U_Vector<IVP_Core>*);
            COMMON_DEC virtual IVP_CONTROLLER_PRIORITY get_controller_priority();
    };
} // namespace PhySys
