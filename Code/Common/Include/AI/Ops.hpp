#pragma once
#include "Personality.hpp"

namespace pub
{
    namespace AI
    {

        class BaseOp
        {
            public:
                COMMON_DEC BaseOp(OpType);
                COMMON_DEC BaseOp(const BaseOp&);

                COMMON_DEC virtual bool validate();

                OpType op_type;
                int fireWeapons; // Probably a bool, anything non-zero turns it on
        };

        class DirectiveCancelOp : public BaseOp
        {
            public:
                COMMON_DEC DirectiveCancelOp(const DirectiveCancelOp&);
                COMMON_DEC DirectiveCancelOp();
                COMMON_DEC virtual bool validate();
        };

        class DirectiveDelayOp : public BaseOp
        {
            public:
                COMMON_DEC DirectiveDelayOp(const DirectiveDelayOp&);
                COMMON_DEC DirectiveDelayOp();
                COMMON_DEC virtual bool validate();

                float DelayTime;
        };

        class DirectiveDockOp : public BaseOp
        {
            public:
                COMMON_DEC DirectiveDockOp(const DirectiveDockOp&);
                COMMON_DEC DirectiveDockOp();
                COMMON_DEC virtual bool validate();

                uint DockSpaceObj;
                uint x10;   // 0
                ushort x12; // 0
                ushort x14; // 0xbb, 0x83 ??
                int x18;    // -1
                uint x1C;   // 0
                float x20;  // 200
                float x24;  // 500
                uint x28;   // 0
        };

        class DirectiveDrasticEvadeOp : public BaseOp
        {
            public:
                COMMON_DEC DirectiveDrasticEvadeOp(const DirectiveDrasticEvadeOp&);
                COMMON_DEC DirectiveDrasticEvadeOp();
                COMMON_DEC virtual bool validate();

            public:
                unsigned char data[OBJECT_DATA_SIZE];
        };

        class DirectiveEvadeOp : public BaseOp
        {
            public:
                COMMON_DEC DirectiveEvadeOp(const DirectiveEvadeOp&);
                COMMON_DEC DirectiveEvadeOp();
                COMMON_DEC virtual bool validate();

                uint EvadeSpaceObj;
                unsigned char data[OBJECT_DATA_SIZE];
        };

        class DirectiveFaceOp : public BaseOp
        {
            public:
                COMMON_DEC DirectiveFaceOp(const DirectiveFaceOp&);
                COMMON_DEC DirectiveFaceOp();
                COMMON_DEC virtual bool validate();

            public:
                unsigned char data[OBJECT_DATA_SIZE];
        };

        class DirectiveFollowOp : public BaseOp
        {
            public:
                COMMON_DEC DirectiveFollowOp(const DirectiveFollowOp&);
                COMMON_DEC DirectiveFollowOp();
                COMMON_DEC virtual bool validate();

                uint followSpaceObj;
                float maxDistance;
                FLHookCore::Vector offset;
                float dunno2; // 400
        };

        class DirectiveFormationOp : public BaseOp
        {
            public:
                COMMON_DEC DirectiveFormationOp(const DirectiveFormationOp&);
                COMMON_DEC DirectiveFormationOp();
                COMMON_DEC virtual bool validate();

            public:
                unsigned char data[OBJECT_DATA_SIZE];
        };

        class DirectiveGotoOp : public BaseOp
        {
            public:
                COMMON_DEC DirectiveGotoOp(const DirectiveGotoOp&);
                COMMON_DEC DirectiveGotoOp();
                COMMON_DEC virtual bool validate();

                int gotoType; // 1 = Vec, 0 = Ship, 2 = spline, 3 = undefined
                // The target position if GotoType is 1.
                FLHookCore::Vector pos;
                // If GotoType is 0 then move to this spaceobj. Do not set a pos if you
                // set this.
                uint targetId;
                // The 4 points to fly to if GotoType is 2
                FLHookCore::Vector spline[4];
                // This specifies how close the NPC will attempt to get to the position
                float range;
                // This specifies the thrust in the range from 0-100. Use -1 for maximum.
                float thrust;
                // This specifies if the ship should move (*not* always set to true)
                bool shipMoves;
                // This specifies if the ship should move (always set to true)
                bool shipMoves2;
                // Set the follow to control if the ship will cruise or not. Do not set
                // both to true.
                bool goToCruise;
                bool goToNoCruise;
                int x5C;
                float x60; // 200
                float x64; // 500
                int x68;
                float x6C;
        };

        class DirectiveGuideOp : public BaseOp
        {
            public:
                COMMON_DEC DirectiveGuideOp(const DirectiveGuideOp&);
                COMMON_DEC DirectiveGuideOp();
                COMMON_DEC virtual bool validate();

            public:
                unsigned char data[OBJECT_DATA_SIZE];
        };

        class DirectiveIdleOp : public BaseOp
        {
            public:
                COMMON_DEC DirectiveIdleOp(const DirectiveIdleOp&);
                COMMON_DEC DirectiveIdleOp();
                COMMON_DEC virtual bool validate();
        };

        class DirectiveInstantTradelaneOp : public BaseOp
        {
            public:
                COMMON_DEC DirectiveInstantTradelaneOp(const DirectiveInstantTradelaneOp&);
                COMMON_DEC DirectiveInstantTradelaneOp();
                COMMON_DEC virtual bool validate();

                uint tradelaneRingFrom;
                uint tradelaneRingTo;
                float dunno; // 3750
        };

        class DirectiveLaunchOp : public BaseOp
        {
            public:
                COMMON_DEC DirectiveLaunchOp(const DirectiveLaunchOp&);
                COMMON_DEC DirectiveLaunchOp();
                COMMON_DEC virtual bool validate();

                uint launchFromObject;
                uint x10; // 2, cannot be -1, defaults to -1
                uint x14; // 1, cannot be 0, defaults to 0
        };

        class DirectiveRamOp : public BaseOp
        {
            public:
                COMMON_DEC DirectiveRamOp(const DirectiveRamOp&);
                COMMON_DEC DirectiveRamOp();
                COMMON_DEC virtual bool validate();

            public:
                unsigned char data[OBJECT_DATA_SIZE];
        };

        class DirectiveStrafeOp : public BaseOp
        {
            public:
                COMMON_DEC DirectiveStrafeOp(const DirectiveStrafeOp&);
                COMMON_DEC DirectiveStrafeOp();
                COMMON_DEC virtual bool validate();

            public:
                unsigned char data[OBJECT_DATA_SIZE];
        };

        class DirectiveTractorBeamOp : public BaseOp
        {
            public:
                COMMON_DEC DirectiveTractorBeamOp(const DirectiveTractorBeamOp&);
                COMMON_DEC DirectiveTractorBeamOp();
                COMMON_DEC virtual bool validate();

            public:
                unsigned char data[OBJECT_DATA_SIZE];
        };

        class DirectiveTrailOp : public BaseOp
        {
            public:
                COMMON_DEC DirectiveTrailOp(const DirectiveTrailOp&);
                COMMON_DEC DirectiveTrailOp();
                COMMON_DEC virtual bool validate();

                uint x0C;  // 10
                float x10; // 500
                uint x14;  // 0
                uint x18;  // 0
        };

        class DirectiveWaitForPlayerManeuverOp : public BaseOp
        {
            public:
                COMMON_DEC DirectiveWaitForPlayerManeuverOp(const DirectiveWaitForPlayerManeuverOp&);
                COMMON_DEC DirectiveWaitForPlayerManeuverOp();
                COMMON_DEC virtual bool validate();

            public:
                unsigned char data[OBJECT_DATA_SIZE];
        };

        class  DirectiveWaitForShip
        {
            public:
                COMMON_DEC DirectiveWaitForShip(const DirectiveWaitForShip&);
                COMMON_DEC DirectiveWaitForShip();
                COMMON_DEC virtual bool validate();

            public:
                unsigned char data[OBJECT_DATA_SIZE];
        };

        struct GSplinePath
        {
                COMMON_DEC GSplinePath();
                COMMON_DEC GSplinePath& operator=(const GSplinePath&);

            public:
                unsigned char data[OBJECT_DATA_SIZE];
        };

        struct SetFlagParams
        {
                COMMON_DEC SetFlagParams(const SetFlagParams&);
                COMMON_DEC SetFlagParams();
                COMMON_DEC virtual bool validate();

                uint x0C;  // 0
                float x10; // ??
                float x14; // ??
        };

        struct SetPersonalityParams : public BaseOp
        {
                COMMON_DEC SetPersonalityParams();
                COMMON_DEC SetPersonalityParams(const SetPersonalityParams&);

                COMMON_DEC virtual bool validate();

                int stateGraph;
                ContentCallback* contentCallback;
                DirectiveCallback* directiveCallback;
                bool stateId; // true - state_graph_id, false - state_graph
                Personality personality;
        };

        // Note: op_type of SetZoneBehaviorParams is 1, indicating that the enum has a different meaning for pub::AI::SubmitState
        // Hex numbers behind dunno variables or in a comment indicate hex offset
        struct SetZoneBehaviorParams : public BaseOp
        {
                COMMON_DEC SetZoneBehaviorParams(const SetZoneBehaviorParams&);
                COMMON_DEC SetZoneBehaviorParams();
                COMMON_DEC virtual bool validate();

                uint iZoneType;     // 0 = position, 1 = cuboid 2 = spaceobj
                uint iDunno_0x10;   // 0=?? 1=?? 2=delete user zone
                FLHookCore::Vector vPosition;   // only used for iZoneType 0
                uint iSpaceObj;     // only used for iZoneType 2
                FLHookCore::Vector vBoxCorner1; // only used for iZoneType 1
                FLHookCore::Vector vBoxCorner2; // only used for iZoneType 1
                float fRadius;      // not used for iZoneType 1
        };
    }
}