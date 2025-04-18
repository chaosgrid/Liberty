#pragma once

#include "../../../PhySys/Controller.hpp"

#include "CEqObj.hpp"

class CStrafeEngine;
class CNudgeEngine;
class CSteering;
class CPlayerGroup;
class IObjInspect;

enum class FORMATION_RTYPE
{
};

struct CShip : public CEqObj, public PhySys::Controller
{
    public:
        struct COMMON_DEC CreateParms
        {
                CreateParms();
                CreateParms& operator=(const CreateParms&);

            public:
                unsigned char data[OBJECT_DATA_SIZE];
        };

        COMMON_DEC static const float JETTISON_CLEARANCE_TIME;

        COMMON_DEC virtual ~CShip();

        COMMON_DEC virtual void do_simulation_controller(IVP_Event_Sim*, IVP_U_Vector<IVP_Core>*);

        COMMON_DEC virtual int update(float, unsigned int);
        COMMON_DEC virtual void disable_controllers();
        COMMON_DEC virtual void enable_controllers();
        COMMON_DEC virtual unsigned int get_name() const;
        COMMON_DEC virtual void init_physics(const FLHookCore::Vector&, const FLHookCore::Vector&);
        COMMON_DEC virtual void flush_animations();
        COMMON_DEC virtual CEquip* alloc_equip(unsigned short, Archetype::Equipment*, bool);
        COMMON_DEC virtual void init(const CreateParms&); // 268

        COMMON_DEC CShip(const CShip&);
        COMMON_DEC CShip();
        COMMON_DEC const Archetype::Ship* shiparch() const;
        COMMON_DEC void VerifyTarget();
        COMMON_DEC FORMATION_RTYPE add_follow_follower(IObjRW*);
        COMMON_DEC FORMATION_RTYPE add_formation_follower(IObjRW*);
        COMMON_DEC void airlock_in(const FLHookCore::Vector&, const FLHookCore::Matrix&);
        COMMON_DEC bool any_thrusters_on() const;
        COMMON_DEC bool check_formation_follower_status(float);
        COMMON_DEC float close_bay();
        COMMON_DEC bool generate_follow_offset(const IObjInspect*, FLHookCore::Transform&) const;
        COMMON_DEC int get_ammo_capacity_remaining(unsigned int) const;
        COMMON_DEC int get_ammo_capacity_remaining(const Archetype::Equipment*) const;
        COMMON_DEC float get_angular_distance_travelled(float, float, float) const;
        COMMON_DEC float get_angular_distance_travelled(float, float, float, float) const;
        COMMON_DEC FLHookCore::Vector get_angular_drag() const;
        COMMON_DEC float get_angular_speed_XY(float, float) const;
        COMMON_DEC float get_angular_speed_Z(float) const;
        COMMON_DEC const FLHookCore::Vector& get_axis_throttle() const;
        COMMON_DEC BayState get_bay_state() const;
        COMMON_DEC float get_cargo_hold_remaining() const;
        COMMON_DEC float get_distance_travelled(float, float, float, IObject::ThrustEquipType) const;
        COMMON_DEC bool get_farthest_active_gun_range(float&) const;
        COMMON_DEC IObjRW* get_follow_leader();
        COMMON_DEC const FLHookCore::Vector& get_follow_offset();
        COMMON_DEC int get_formation_follower_count();
        COMMON_DEC int get_formation_followers(IObjRW** const, unsigned int);
        COMMON_DEC unsigned int get_group_name() const;
        COMMON_DEC const struct ShipGunStats& get_gun_stats() const;
        COMMON_DEC float get_initial_speed_to_coast_distance(float, bool) const;
        COMMON_DEC float get_linear_drag() const;
        COMMON_DEC float get_max_bank_angle() const;
        COMMON_DEC float get_max_thrust_power() const;
        COMMON_DEC FLHookCore::Vector get_nudge_vec() const;
        COMMON_DEC const unsigned short* get_pilot_name() const;
        COMMON_DEC float get_projected_axis_throttle_XY(float) const;
        COMMON_DEC float get_projected_axis_throttle_Z(float) const;
        COMMON_DEC float get_projected_throttle(float, IObject::ThrustEquipType) const;
        COMMON_DEC long get_renderable_subtarget() const;
        COMMON_DEC int get_repair_kit_capacity_remaining() const;
        COMMON_DEC int get_shield_battery_capacity_remaining() const;
        COMMON_DEC int get_space_for_cargo_type(const Archetype::Equipment*) const;
        COMMON_DEC float get_speed(float, IObject::ThrustEquipType) const;
        COMMON_DEC int get_status(char*, int) const;
        COMMON_DEC StrafeDir get_strafe_dir() const;
        COMMON_DEC unsigned short get_sub_target() const;
        COMMON_DEC IObjRW* get_target() const;
        COMMON_DEC int get_targeted_enemy_count();
        COMMON_DEC bool get_tgt_lead_fire_pos(Vector&) const;
        COMMON_DEC bool get_tgt_lead_fire_pos(const IObjInspect*, FLHookCore::Vector&) const;
        COMMON_DEC float get_throttle() const;
        COMMON_DEC float get_thrust_power() const;
        COMMON_DEC float get_thrust_power_ratio() const;
        COMMON_DEC float get_time_to_accelerate(float, float, float, IObject::ThrustEquipType) const;
        COMMON_DEC float get_time_to_accelerate_angularly(float, float, float) const;
        COMMON_DEC float get_time_to_accelerate_angularly(float, float, float, float) const;
        COMMON_DEC unsigned int get_tradelane_entrance_ring();
        COMMON_DEC unsigned int get_tradelane_exit_ring();
        COMMON_DEC float get_tradelane_speed();
        COMMON_DEC int go_tradelane(const IObjInspect*, const IObjInspect*, IObjRW*, bool, float);
        COMMON_DEC bool is_cruise_active() const;
        COMMON_DEC bool is_enemy(IObjInspect*);
        COMMON_DEC bool is_jumping() const;
        COMMON_DEC bool is_launching() const;
        COMMON_DEC bool is_player() const;
        COMMON_DEC bool is_using_tradelane() const;
        COMMON_DEC void jump_in(IObjRW*, const FLHookCore::Vector&, const FLHookCore::Matrix&, float);
        COMMON_DEC void launch(IObjRW*, CEqObj*, int);
        COMMON_DEC bool leaving_system_update(unsigned int&);
        COMMON_DEC IObjRW* next_enemy();
        COMMON_DEC IObjRW* next_target(bool);
        COMMON_DEC void notify_set_target(CShip*, bool);
        COMMON_DEC float open_bay();
        COMMON_DEC IObjRW* previous_enemy();
        COMMON_DEC FORMATION_RTYPE remove_follow_follower(IObjRW*);
        COMMON_DEC FORMATION_RTYPE remove_formation_follower(IObjRW*);
        COMMON_DEC void request_exit_tradelane();
        COMMON_DEC void set_angular_drag_factor(float);
        COMMON_DEC void set_axis_throttle(const FLHookCore::Vector&);
        COMMON_DEC void set_follow_leader(IObjRW*);
        COMMON_DEC void set_follow_offset(const FLHookCore::Vector&);
        COMMON_DEC void set_gun_stats_dirty();
        COMMON_DEC void set_nudge_vec(const FLHookCore::Vector&);
        COMMON_DEC void set_strafe_dir(StrafeDir);
        COMMON_DEC void set_sub_target(unsigned short);
        COMMON_DEC void set_target(IObjRW*);
        COMMON_DEC void set_throttle(float);
        COMMON_DEC void set_thrust_power(float);
        COMMON_DEC void set_tradelane_speed(float);
        COMMON_DEC void stop_tradelane();
        COMMON_DEC void use_tradelane(bool);
        COMMON_DEC void collect_angular_force_components(unsigned int, float, float&, float&) const;
        COMMON_DEC void collect_force_components(float, IObject::ThrustEquipType, float&, float&) const;
        COMMON_DEC float get_distance_travelled(float, float, float, float, float) const;
        COMMON_DEC float get_initial_speed_to_coast_distance(float, float, float) const;
        COMMON_DEC float get_time_to_accelerate(float, float, float, float, float) const;
        COMMON_DEC void recalculate_formation_speed();

        DWORD dunno5[2];                          // 106
        uint physicsPtr;                          // 108
        CPlayerGroup* playerGroup;                // 109
        DWORD dunno6;                             // 110
        IObjRW* followLeader2;                    // 111
        uint dunno16;                             // 112
        FLHookCore::Vector followOffset2;                     // 113
        st6::vector<IObjRW*> followerVector;      // 116
        IObjRW* followLeader;                     // 120
        DWORD followLeaderID_unk;                 // 121
        FLHookCore::Vector followOffset;                      // 122
        DWORD dunno8[3];                          // 125
        st6::vector<IObjRW*> targetedEnemyVector; // 128
        DWORD dunno11[3];                         // 132
        uint groupId;                             // 135
        IObjRW* target;                           // 136
        DWORD targetId_unk;                       // 137
        ushort subTargetId;                       // 138
        DWORD BayAnim;                            // 139
        CSteering* cSteering;                     // 140
        DWORD dunno13[6];                         // 141
        FLHookCore::Vector axisThrottle;                      // 147
        CNudgeEngine* nudgeEngine;                // 150
        DWORD dunno10[6];                         // 151
        FLHookCore::Vector nudgeVector;                       // 157
        CStrafeEngine* strafeEngine;              // 160
        DWORD dunno12[5];                         // 161
        StrafeDir strafeDir;                      // 166
        float throttle;                           // 167
        float thrustPower;                        // 168
        float maxThrustPower;                     // 169
        uint dunno14;                             // 170
        BayState bayState;                        // 171
        ActionDB* ActionDB;                       // 172
        uint dunnoCShip1;                         // 173
        float tradeLaneSpeed;                     // 174
        bool inTradeLane;                         // 175
        bool gunRelatedBool;                      // has active guns?
        float angularDragFactor;                  // 176
        uint gunStatsDirty;                       // 177
        uint activeGunCount1;                     // 178
        float rectHeight;                         // 179 no clue
        float maxActiveGunRange1;                 // 180
        uint activeGunCount2;                     // 181
        float maxActiveGunRange2;                 // 182 1-missiles 2-guns?
};
