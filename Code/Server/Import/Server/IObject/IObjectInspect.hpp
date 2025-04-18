#pragma once

#include <FLHookCore.h>
#include "FLCore/Common/CObjects/CSimple/CEqObj/CShip.hpp"

struct GameObject;
struct IObjInspect
{
    struct CargoEnumerator
    {};
    struct SubtargetEnumerator
    {};
};

enum TERMINAL_TYPE {};
enum EquipmentValType{};

struct IObjInspectImpl
{
    public:
        SERVER_DEC virtual const FLHookCore::Vector& get_position() const;                                                                     // 0
        SERVER_DEC virtual FLHookCore::Vector get_velocity() const;                                                                            // 4
        SERVER_DEC virtual FLHookCore::Vector get_angular_velocity() const;                                                                    // 8
        SERVER_DEC virtual const FLHookCore::Matrix& get_orientation() const;                                                                  // 12
        SERVER_DEC virtual const FLHookCore::Transform& get_transform() const;                                                                 // 16
        SERVER_DEC virtual FLHookCore::Vector get_center_of_mass() const;                                                                      // 20
        SERVER_DEC virtual int get_sub_obj_center_of_mass(unsigned short, FLHookCore::Vector&) const;                                          // 24
        SERVER_DEC virtual long get_index() const;                                                                                 // 28
        SERVER_DEC virtual const unsigned int get_id() const;                                                                      // 32
        SERVER_DEC virtual int get_good_id(unsigned int&) const;                                                                   // 36
        SERVER_DEC virtual int get_archetype_extents(FLHookCore::Vector&, FLHookCore::Vector&) const;                                                      // 40
        SERVER_DEC virtual int get_physical_radius(float&, FLHookCore::Vector&) const;                                                         // 44
        SERVER_DEC virtual float get_mass() const;                                                                                 // 48
        SERVER_DEC virtual bool is_targetable() const;                                                                             // 52
        SERVER_DEC virtual bool is_dying() const;                                                                                  // 56
        SERVER_DEC virtual int get_status(float&) const;                                                                           // 60
        SERVER_DEC virtual int get_status(float&, float&) const;                                                                   // 64
        SERVER_DEC virtual int get_shield_status(float&, bool&) const;                                                             // 68
        SERVER_DEC virtual int get_shield_status(float&, float&, bool&) const;                                                     // 72
        SERVER_DEC virtual int get_throttle(float&) const;                                                                         // 76
        SERVER_DEC virtual int get_axis_throttle(FLHookCore::Vector&) const;                                                                   // 80
        SERVER_DEC virtual int get_nudge_vec(FLHookCore::Vector&) const;                                                                       // 84
        SERVER_DEC virtual int get_strafe_dir(StrafeDir&) const;                                                                   // 88
        SERVER_DEC virtual int is_cruise_active(bool&) const;                                                                      // 92
        SERVER_DEC virtual int is_cruise_active(bool&, bool&) const;                                                               // 96
        SERVER_DEC virtual int are_thrusters_active(bool&) const;                                                                  // 100
        SERVER_DEC virtual int get_attitude_towards(float&, const IObjInspect*) const;                                             // 104
        SERVER_DEC virtual int get_attitude_towards_symmetrical(float&, const IObjInspect*, float&) const;                         // 108
        SERVER_DEC virtual int get_reputation(float&, const unsigned int&) const;                                                  // 112
        SERVER_DEC virtual int get_target(IObjRW*&) const;                                                                         // 116
        SERVER_DEC virtual int get_subtarget(unsigned short&) const;                                                               // 120
        SERVER_DEC virtual int get_subtarget_center_of_mass(FLHookCore::Vector&) const;                                                        // 124
        SERVER_DEC virtual int get_rank(unsigned int&) const;                                                                      // 128
        SERVER_DEC virtual int get_affiliation(unsigned int&) const;                                                               // 132
        SERVER_DEC virtual int get_type(unsigned int&) const;                                                                      // 136
        SERVER_DEC virtual int get_base(unsigned int&) const;                                                                      // 140
        SERVER_DEC virtual int get_dock_target(unsigned int&) const;                                                               // 144
        SERVER_DEC virtual int get_power(float&) const;                                                                            // 148
        SERVER_DEC virtual int get_zone_props(unsigned long&) const;                                                               // 152
        SERVER_DEC virtual float get_scanner_interference() const;                                                                 // 156
        SERVER_DEC virtual int get_hold_left(float&) const;                                                                        // 160
        SERVER_DEC virtual int enumerate_cargo(IObjInspect::CargoEnumerator*) const;                                               // 164
        SERVER_DEC virtual int get_data(const void*&) const;                                                                       // 168
        SERVER_DEC virtual int get_formation_offset(FLHookCore::Vector&) const;                                                                // 172
        SERVER_DEC virtual int get_formation_leader(IObjRW*&) const;                                                               // 176
        SERVER_DEC virtual int get_follow_offset(FLHookCore::Vector&) const;                                                                   // 180
        SERVER_DEC virtual int get_follow_leader(IObjRW*&) const;                                                                  // 184
        SERVER_DEC virtual bool is_player() const;                                                                                 // 188
        SERVER_DEC virtual int get_hardpoint(const char*, FLHookCore::Vector*, FLHookCore::Matrix*) const;                                                 // 192
        SERVER_DEC virtual bool has_dock_hardpoints() const;                                                                       // 196
        SERVER_DEC virtual int get_dock_hardpoints(int, TERMINAL_TYPE*, FLHookCore::Transform*, FLHookCore::Transform*, FLHookCore::Transform*, float*) const;    // 200
        SERVER_DEC virtual float get_time_to_accelerate(float, float, float, IObject::ThrustEquipType) const;                      // 204
        SERVER_DEC virtual float get_distance_travelled(float, float, float, IObject::ThrustEquipType) const;                      // 208
        SERVER_DEC virtual float get_projected_throttle(float, IObject::ThrustEquipType) const;                                    // 212
        SERVER_DEC virtual float get_speed(float, IObject::ThrustEquipType) const;                                                 // 216
        SERVER_DEC virtual float get_initial_speed_to_coast_distance(float, bool) const;                                           // 220
        SERVER_DEC virtual float get_time_to_accelerate_angularly(float, float, float) const;                                      // 224
        SERVER_DEC virtual float get_time_to_accelerate_angularly(float, float, float, float) const;                               // 228
        SERVER_DEC virtual float get_angular_distance_travelled(float, float, float) const;                                        // 232
        SERVER_DEC virtual float get_angular_distance_travelled(float, float, float, float) const;                                 // 236
        SERVER_DEC virtual float get_angular_speed_XY(float, float) const;                                                         // 240
        SERVER_DEC virtual float get_angular_speed_Z(float) const;                                                                 // 244
        SERVER_DEC virtual float get_projected_axis_throttle_XY(float) const;                                                      // 248
        SERVER_DEC virtual float get_projected_axis_throttle_Z(float) const;                                                       // 252
        SERVER_DEC virtual float get_max_bank_angle() const;                                                                       // 256
        SERVER_DEC virtual int get_scanlist(const struct ScanList*&, unsigned int, bool) const;                                    // 260
        SERVER_DEC virtual int get_tgt_lead_fire_pos(const unsigned short&, FLHookCore::Vector&) const;                                        // 264
        SERVER_DEC virtual int is_pointing_at(bool&, const unsigned short&, float) const;                                          // 268
        SERVER_DEC virtual int can_point_at(bool&, const unsigned short&, const FLHookCore::Vector&, float) const;                             // 272
        SERVER_DEC virtual int find_equipment(unsigned short* const, unsigned int, unsigned int) const;                            // 276
        SERVER_DEC virtual int get_equipment_status(struct EquipStatus&, const unsigned short&) const;                             // 280
        SERVER_DEC virtual int get_equipment_val(struct EquipmentVal&, const unsigned short&, EquipmentValType, float) const; // 284
        SERVER_DEC virtual int scan_cargo(IObjRW*, EquipDescFLHookCore::Vector&) const;                                                        // 288
        SERVER_DEC virtual int enumerate_subtargets(IObjInspect::SubtargetEnumerator*) const;                                      // 292
        SERVER_DEC virtual int get_lane_direction(const FLHookCore::Transform&, bool*) const;                                                  // 296
        SERVER_DEC virtual int get_ring_side(const FLHookCore::Transform&, bool*) const;                                                       // 300
        SERVER_DEC virtual int traverse_rings(unsigned int&, bool) const;                                                          // 304
        SERVER_DEC virtual int is_using_tradelane(bool*) const;                                                                    // 308
        SERVER_DEC virtual int get_lane_start(const IObjInspect*, const IObjInspect*&, FLHookCore::Vector&, FLHookCore::Vector&) const;                    // 312
        SERVER_DEC virtual bool generate_follow_offset(const IObjInspect*, FLHookCore::Transform&) const;                                      // 316
        SERVER_DEC virtual int get_atmosphere_range(float&) const;                                                                 // 320
        SERVER_DEC virtual int get_toughness() const;                                                                              // 324
        SERVER_DEC virtual int get_behavior_id() const;                                                                            // 328
        SERVER_DEC virtual int get_formation_followers(IObjRW** const, unsigned int) const;                                        // 332
        SERVER_DEC virtual CObject* cobject() const;                                                                               // 336
};

struct IObjAffect
{
    virtual int set_throttle(float);                           // 0
    virtual int set_axis_throttle(const FLHookCore::Vector&);              // 4
    virtual int set_nudge_vec(const FLHookCore::Vector&);                  // 8
    virtual int set_strafe_dir(StrafeDir);                     // 12
    virtual int basewatcher_setpointer(IObjInspect*);          // 16
    virtual int basewatcher_removepointer(IObjInspect*);       // 20
    virtual FORMATION_RTYPE add_formation_follower(IObjRW*);   // 24
    virtual FORMATION_RTYPE remove_formation_follower(IObjRW*);// 28
    virtual int get_formation_follower_count();                // 32
    virtual int set_follow_leader(IObjRW*);                    // 36
    virtual int set_follow_offset(const FLHookCore::Vector&);              // 40
    virtual FORMATION_RTYPE add_follow_follower(IObjRW*);      // 44
    virtual FORMATION_RTYPE remove_follow_follower(IObjRW*);   // 48
    virtual int fire_weapons(ushort startIndex, ushort endIndex, void* unk, void* unk2); // 52
    virtual int jettison_cargo(ushort sID, ushort amount, void* unused, void* unused2); // 56
    virtual int tractor_all(ushort tractorSId, st6::vector<GameObject*> tractorArray, int clientId); // 60
    virtual int tractor_single(ushort sId, GameObject* loot, int clientId); // 64
    virtual int set_gun_target(ushort gunSId, uint target, ushort targetSId, int flag); // 68
    virtual int set_target(IObjRW* target, ushort sId, int dunno); // 72
    virtual int sub_6CE70B0(ushort sId, int dunno, int flag);  // 76 something about strafing/thrusting
    virtual int toggle_cruise(bool cruiseActive, bool disruptCruise, int dunno2); // 80
    virtual int sub_6D02500();                                 // 84 activates thrusters?
    virtual int use_item(ushort sId, uint amount, int unused); // 88 sub_6CE7210
    virtual int request_event(uint eventType, uint requestTarget, uint param1, uint param2, uint dunno); // 92
    virtual int request_cancel(uint eventType, uint param1, uint param2); // 96
    virtual int go_tradelane(const IObjInspect* startRing, const IObjInspect* nextRing, IObjRW* jumpingIObj, bool unk1, float unk2); // 100
    virtual int stop_tradelane();                              // 104 switch from one pair of tradelane to another midflight?
    virtual int sub_6CEF350();                                 // 108 null
    virtual int sub_6D02000();                                 // 112 unknown
    virtual int sub_6D02070(uint spaceObjId);                  // 116 sendmessage 0x26

    Watchable* watchable;
};

struct IObjDestructor
{
    virtual struct IObjInspectImpl* DestroyIObj(bool deallocate);
};

struct IObjRW : public IObjInspectImpl
{

};











