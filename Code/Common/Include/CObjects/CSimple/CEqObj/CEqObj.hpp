#pragma once

#include "../../CSimple.hpp"
#include "FLCore/Common/CArchGroup.hpp"
#include "FLCore/Common/CEquip/CEquipManager.hpp"
#include "FLCore/Common/Damage.hpp"
#include "FLCore/Common/EquipDesc.hpp"
#include "FLCore/Common/MiscStructs.hpp"
#include "FLCore/Common/Unknown.hpp"

namespace Archetype
{
    struct EqObj;
    struct Equipment;
} // namespace Archetype
namespace PhySys
{
    struct CreateParms;
}

enum ObjActivateResult
{
};

struct CEqObj : CSimple
{
        struct COMMON_DEC CreateParms
        {
                CreateParms();
                CreateParms& operator=(const CreateParms&);

                unsigned char data[OBJECT_DATA_SIZE];
        };

        COMMON_DEC virtual ~CEqObj();                                                         // 56
        COMMON_DEC virtual int update(float, unsigned int);                                   // 80
        COMMON_DEC virtual void disable_controllers();                                        // 92
        COMMON_DEC virtual void enable_controllers();                                         // 96
        COMMON_DEC virtual void unmake_physical();                                            // 116
        COMMON_DEC virtual void remake_physical(const PhySys::CreateParms&, float);           // 120
        COMMON_DEC virtual unsigned int get_name() const;                                     // 136
        COMMON_DEC virtual bool is_targetable() const;                                        // 140
        COMMON_DEC virtual void connect(IObjDB*);                                             // 144
        COMMON_DEC virtual void disconnect(IObjDB*);                                          // 148
        COMMON_DEC virtual void init(const CreateParms&);                                     // 160
        COMMON_DEC virtual void load_equip_and_cargo(const struct EquipDescVector&, bool);    // 164
        COMMON_DEC virtual void clear_equip_and_cargo();                                      // 168
        COMMON_DEC virtual void get_equip_desc_list(EquipDescVector&) const;                  // 172
        COMMON_DEC virtual bool add_item(const EquipDesc&);                                   // 176
        COMMON_DEC virtual ObjActivateResult activate(bool, unsigned int);                    // 180
        COMMON_DEC virtual bool get_activate_state(st6::vector<bool, st6::allocator<bool>>&); // 184
        COMMON_DEC virtual void disconnect(INotify*);                                         // 188
        COMMON_DEC virtual void disconnect(IObjRW*);                                          // 192
        COMMON_DEC virtual void connect(INotify*);                                            // 196
        COMMON_DEC virtual void notify(INotify::Event, void*);                                // 200
        COMMON_DEC virtual void flush_animations();                                           // 204
        COMMON_DEC virtual float get_total_hit_pts() const;                                   // 208
        COMMON_DEC virtual float get_total_max_hit_pts() const;                               // 212
        COMMON_DEC virtual float get_total_relative_health() const;                           // 216
        COMMON_DEC virtual bool get_sub_obj_velocity(unsigned short, FLHookCore::Vector&) const;          // 220
        COMMON_DEC virtual bool get_sub_obj_center_of_mass(unsigned short, FLHookCore::Vector&) const;    // 224
        COMMON_DEC virtual bool get_sub_obj_hit_pts(unsigned short, float&) const;            // 228
        COMMON_DEC virtual bool set_sub_obj_hit_pts(unsigned short, float);                   // 232
        COMMON_DEC virtual bool get_sub_obj_max_hit_pts(unsigned short, float&) const;        // 236
        COMMON_DEC virtual bool get_sub_obj_relative_health(unsigned short, float&) const;    // 240
        COMMON_DEC virtual unsigned short inst_to_subobj_id(long) const;                      // 244
        COMMON_DEC virtual long sub_obj_id_to_inst(unsigned short) const;                     // 248
        COMMON_DEC virtual void destroy_sub_objs(const DamageList&, bool);                    // 252
        COMMON_DEC virtual int enumerate_sub_objs() const;                                    // 256
        COMMON_DEC virtual CEquip* alloc_equip(unsigned short, Archetype::Equipment*, bool);  // 260
        COMMON_DEC virtual void link_shields();                                               // 264

        struct COMMON_DEC DockAnimInfo
        {
                DockAnimInfo();
                DockAnimInfo& operator=(const DockAnimInfo&);

                unsigned char data[OBJECT_DATA_SIZE];
        };

        COMMON_DEC CEqObj(const CEqObj&);
        COMMON_DEC CEqObj(Class);
        COMMON_DEC void attaching_damaged_obj(const CacheString&);
        COMMON_DEC float attitude_towards(const CEqObj*) const;
        COMMON_DEC void attitude_towards_symmetrical(float&, const CEqObj*, float&) const;
        COMMON_DEC void clear_arch_groups();
        COMMON_DEC IBehaviorManager* create_behavior_interface(IObjRW*, int);
        COMMON_DEC Archetype::EqObj* eqobjarch() const;
        COMMON_DEC unsigned int get_base() const;
        COMMON_DEC unsigned int get_base_name() const;
        COMMON_DEC IBehaviorManager* get_behavior_interface();
        COMMON_DEC float get_cloak_percentage() const;
        COMMON_DEC void get_collision_group_description(st6::list<CollisionGroupDesc>&) const;
        COMMON_DEC const unsigned int& get_dock_target() const;
        COMMON_DEC bool get_explosion_dmg_bounding_sphere(float&, FLHookCore::Vector&) const;
        COMMON_DEC float get_max_power() const;
        COMMON_DEC float get_power() const;
        COMMON_DEC float get_power_ratio() const;
        COMMON_DEC int get_vibe() const;
        COMMON_DEC bool is_base() const;
        COMMON_DEC int is_cloaked() const;
        COMMON_DEC bool is_control_excluded(unsigned int) const;
        COMMON_DEC bool is_damaged_obj_attached(const CacheString&) const;
        COMMON_DEC bool is_dock() const;
        COMMON_DEC bool launch_pos(Vector&, FLHookCore::Matrix&, int) const;
        COMMON_DEC void load_arch_groups(const st6::list<CollisionGroupDesc>&);
        COMMON_DEC void set_control_exclusion(unsigned int);
        COMMON_DEC void set_power(float);
        COMMON_DEC bool sync_cargo(const EquipDescList&);
        COMMON_DEC bool add_cargo_item(const EquipDesc&);
        COMMON_DEC bool add_equipped_item(const EquipDesc&);
        COMMON_DEC void compute_explosion_dmg_bounding_sphere(float&, FLHookCore::Vector&) const;
        COMMON_DEC void init_docking_points(unsigned int);
        COMMON_DEC void update_docking_animations(float);

        CEquipManager equipManager;                        // 57
        int repVibe;                                       // 65
        Costume commCostume;                               // 66
        uint voiceId;                                      // 79
        float cloakPercentage;                             // 80
        CArchGroupManager archGroupManager;                // 81
        bool isDead;                                       // 87
        uint dockTargetId;                                 // 88
        IObjInspectImpl* dockTargetIObj;                   // 89
        uint iDunnoEqObj23;                                // 90
        bool boundingExplosionBool;                        // 91
        float boundingExplosionFloat;                      // 92
        FLHookCore::Vector boundingExplosionVector;                    // 93
        st6::vector<DockAnimInfo> dockingAnimationsVector; // 96 could be st6::vector<IAnimation2>
        uint controlExcludedDunno;                         // 100
        IBehaviorManager* behaviorManager;                 // 101
        float power;                                       // 102
        float maxPower;                                    // 103
        uint iDunnoEqObj;                                  // 104 0xffffffff for all solars except those docking on lands you on a base, then it's 6?

    private:
        void destroy_equipment(const DamageList&, bool);
};
