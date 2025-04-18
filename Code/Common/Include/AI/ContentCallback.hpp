#pragma once

namespace pub
{
    namespace AI
    {
        struct ContentCallback
        {
                enum class CSNType
                {
                };
                enum class FollowStatusType
                {
                };
                enum CreationType
                {
                };
                enum class InformationType
                {
                };
                enum class LeadProgressType
                {
                };
                enum class FleeReason
                {
                };
                enum class FleeDestinationType
                {
                };
                enum class TetherStatusType
                {
                };

                COMMON_DEC virtual void combat_drift_event();
                COMMON_DEC virtual void combat_state_notification(CSNType, unsigned int, unsigned int);
                COMMON_DEC virtual void follow_event(unsigned int, unsigned int, FollowStatusType, float);
                COMMON_DEC virtual CreationType get_creation_type();
                COMMON_DEC virtual bool information_request(InformationType, int, char*);
                COMMON_DEC virtual void lead_object_event(unsigned int, unsigned int, LeadProgressType, float, const FLHookCore::Vector&);
                COMMON_DEC virtual bool request_flee_destination(unsigned int, FleeReason, FleeDestinationType&, FLHookCore::Vector&, unsigned int&, float&);
                COMMON_DEC virtual void scan_state_change(bool);
                COMMON_DEC virtual void ship_in_sights_event(unsigned int);
                COMMON_DEC virtual void tether_object_event(unsigned int, unsigned int, TetherStatusType, const FLHookCore::Vector&);

            public:
                unsigned char data[OBJECT_DATA_SIZE];
        };
    } // namespace AI
} // namespace pub
