//////////////////////////////////////////////////////////////////////
//	Project FLCoreSDK v1.1, modified for use in FLHook Plugin version
//--------------------------
//
//	File:			FLCoreServer.h
//	Module:			FLCoreServer.lib
//	Description:	Interface to Server.dll
//
//	Web: www.skif.be/flcoresdk.php
//
//
//////////////////////////////////////////////////////////////////////
#ifndef _FLCORESERVER_H_
#define _FLCORESERVER_H_

#include "Common.hpp"
#include "Server.hpp"

#pragma warning(disable : 5030)

#pragma warning(push)
#pragma warning(disable : 5222)
struct SERVER_DEC [[Hook, ServerCall]] IServerImpl
{
        IServerImpl(const IServerImpl&);
        IServerImpl();
        IServerImpl& operator=(const IServerImpl&);

        // N.B. Do not modify order, vtable ordering is fixed by Server.dll
        [[DisconnectCheck]]
        virtual void FireWeapon(uint client, const XFireWeaponInfo& fwi);
        [[CallInner, DisconnectCheck]]
        virtual void ActivateEquip(uint client, const XActivateEquip& aq);
        [[CallInner, DisconnectCheck]]
        virtual void ActivateCruise(uint client, const XActivateCruise& ac);
        [[CallInner, DisconnectCheck]]
        virtual void ActivateThrusters(uint client, const XActivateThrusters& at);
        virtual void SetTarget(uint client, const XSetTarget& st);
        virtual void TractorObjects(uint client, const XTractorObjects& to);
        [[CallInner, CallCatch]]
        virtual void GoTradelane(uint client, const XGoTradelane& gt);
        [[CallInner]]
        virtual void StopTradelane(uint client, uint shipID, uint tradelaneRing1, uint tradelaneRing2);
        virtual void JettisonCargo(uint client, const XJettisonCargo& jc);
        [[CallInner, CallInnerAfter]]
        virtual bool Startup(const SStartupInfo& si);
        [[CallInnerAfter, NoPluginsAfter]]
        virtual void Shutdown();
        [[CallInner, NoLog]]
        virtual int Update();
        [[NoHook]]
        virtual void ElapseTime(float);
        [[NoHook]]
        virtual void __nullopt1();
        [[NoHook]] virtual bool SwapConnections(EFLConnection, EFLConnection);
        [[NoHook]]
        virtual void __nullopt2();
        [[CallInner]]
        virtual void DisConnect(uint client, EFLConnection conn);
        [[DisconnectCheck, CallInner(true), CallInnerAfter]]
        virtual void OnConnect(uint client);
        [[CallInnerAfter]]
        virtual void Login(const SLoginInfo& li, uint client);
        [[DisconnectCheck, CallInner(true), CallCatch]]
        virtual void CharacterInfoReq(uint client, bool);
        [[DisconnectCheck, CallInner(true), CallInnerAfter]]
        virtual void CharacterSelect(const CHARACTER_ID& cid, uint client);
        [[NoHook]]
        virtual void __nullopt3();
        virtual void CreateNewCharacter(const SCreateCharacterInfo&, uint client);
        virtual void DestroyCharacter(CHARACTER_ID const&, uint client);
        [[NoHook]] virtual void CharacterSkipAutosave(uint);
        virtual void ReqShipArch(uint archID, uint client);
        virtual void ReqHullStatus(float status, uint client);
        virtual void ReqCollisionGroups(const st6::list<CollisionGroupDesc>& collisionGroups, uint client);
        virtual void ReqEquipment(const EquipDescList& edl, uint client);
        [[NoHook]]
        virtual void ReqCargo(const EquipDescList&, uint);
        virtual void ReqAddItem(uint goodID, const char* hardpoint, int count, float status, bool mounted, uint client);
        virtual void ReqRemoveItem(ushort slotID, int count, uint client);
        virtual void ReqModifyItem(ushort slotID, const char* hardpoint, int count, float status, bool mounted, uint client);
        virtual void ReqSetCash(int cash, uint client);
        virtual void ReqChangeCash(int cashAdd, uint client);
        [[DisconnectCheck, CallInner, CallInnerAfter]]
        virtual void BaseEnter(uint baseID, uint client);
        [[DisconnectCheck, CallInner, CallInnerAfter]]
        virtual void BaseExit(uint baseID, uint client);
        virtual void LocationEnter(uint locationID, uint client);
        virtual void LocationExit(uint locationID, uint client);
        virtual void BaseInfoRequest(unsigned int, unsigned int, bool);
        virtual void LocationInfoRequest(unsigned int, unsigned int, bool);
        virtual void GFObjSelect(unsigned int, unsigned int);
        virtual void GFGoodVaporized(const SGFGoodVaporizedInfo& gvi, uint client);
        virtual void MissionResponse(unsigned int, unsigned long, bool, uint client);
        virtual void TradeResponse(const unsigned char*, int, uint client);
        virtual void GFGoodBuy(const SGFGoodBuyInfo&, uint client);
        [[CallInner(true), DisconnectCheck]]
        virtual void GFGoodSell(const SGFGoodSellInfo&, uint client);
        [[CallInnerAfter]]
        virtual void SystemSwitchOutComplete(uint shipID, uint client);
        [[CallInner, CallInnerAfter, DisconnectCheck]]
        virtual void PlayerLaunch(uint shipID, uint client);
        [[CallInner]]
        virtual void LaunchComplete(uint baseID, uint shipID);
        [[CallInnerAfter]]
        virtual void JumpInComplete(uint systemID, uint shipID);
        virtual void Hail(unsigned int, unsigned int, unsigned int);
        [[CallInner(true), NoLog, DisconnectCheck]]
        virtual void SPObjUpdate(const SSPObjUpdateInfo& ui, uint client);
        [[CallInner, DisconnectCheck]]
        virtual void SPMunitionCollision(const SSPMunitionCollisionInfo& mci, uint client);
        [[NoHook]]
        virtual void SPBadLandsObjCollision(const SSPBadLandsObjCollisionInfo&, uint);
        [[DisconnectCheck]]
        virtual void SPObjCollision(const SSPObjCollisionInfo& oci, uint client);
        virtual void SPRequestUseItem(const SSPUseItem& ui, uint client);
        virtual void SPRequestInvincibility(uint shipID, bool enable, InvincibilityReason reason, uint client);
        [[NoHook]]
        virtual void SaveGame(const CHARACTER_ID&, const ushort*, uint);
        [[NoHook]] virtual void MissionSaveB(uint, ulong);
        // eventType: 0 = docking, 1 = formation
        virtual void RequestEvent(int eventType, uint shipID, uint dockTarget, uint, ulong, uint client);
        // eventType: 0 = docking, 1 = formation
        virtual void RequestCancel(int eventType, uint shipID, uint, ulong, uint client);
        virtual void MineAsteroid(uint systemID, const FLHookCore::Vector& pos, uint crateID, uint lootID, uint count, uint client);
        [[NoHook]] virtual void CommComplete(uint, uint, uint, CommResult);
        virtual void RequestCreateShip(uint client);
        virtual void SPScanCargo(const uint&, const uint&, uint);
        virtual void SetManeuver(uint client, const XSetManeuver& sm);
        virtual void InterfaceItemUsed(uint, uint);
        virtual void AbortMission(uint client, uint);
        [[NoHook]] virtual void RTCDone(uint, uint);
        virtual void SetWeaponGroup(uint client, uchar*, int);
        virtual void SetVisitedState(uint client, uchar*, int);
        virtual void RequestBestPath(uint client, uchar*, int);
        virtual void RequestPlayerStats(uint client, uchar*, int);
        [[NoHook]] virtual void PopUpDialog(uint, uint);
        virtual void RequestGroupPositions(uint client, uchar*, int);
        [[NoHook]]
        virtual void SetMissionLog(uint, uchar*, int);
        virtual void SetInterfaceState(uint client, uchar*, int);
        virtual void RequestRankLevel(uint client, uchar*, int);
        [[CallInner]]
        virtual void InitiateTrade(uint client1, uint client2);
        [[CallInnerAfter, DisconnectCheck]]
        virtual void TerminateTrade(uint client, int accepted);
        virtual void AcceptTrade(uint client, bool);
        virtual void SetTradeMoney(uint client, ulong);
        virtual void AddTradeEquip(uint client, const EquipDesc& ed);
        virtual void DelTradeEquip(uint client, const EquipDesc& ed);
        virtual void RequestTrade(uint, uint);
        virtual void StopTradeRequest(uint client);
        [[NoHook]]
        virtual void ReqDifficultyScale(float, uint);
        [[NoHook]]
        virtual unsigned int GetServerID();
        [[NoHook]]
        virtual const char* GetServerSig();
        [[NoHook]]
        virtual void DumpPacketStats(const char*);
        [[Disable]]
        virtual void Dock(const uint&, const uint&);

        [[CallInner(true), Semaphore(g_InSubmitChat), Address(-0x08)]]
        virtual void SubmitChat(CHAT_ID cidFrom, ulong size, const void* rdlReader, CHAT_ID cidTo, int);

    public:
        unsigned char data[OBJECT_DATA_SIZE];
};
#pragma warning(pop)

struct CharacterData
{
        CHARACTER_ID characterCode;
        st6::wstring name;                                    // 512
        st6::wstring description;                             // 528
        uint descripStrId;                                    // 544
        uint datetimeHigh;                                    // 548
        uint datetimeLow;                                     // 552
        uint shipHash;                                        // 556
        int money;                                            // 560
        int numOfKills;                                       // 564
        int numOfSuccessMissions;                             // 568
        int numOfFailedMissions;                              // 572
        float hullStatus;                                     // 576
        st6::list<EquipDesc> currentEquipAndCargo;            // 580
        st6::list<CollisionGroupDesc> currentCollisionGroups; // 592
        float baseHullStatus;                                 // 604
        st6::list<EquipDesc> baseEquipAndCargo;               // 608
        st6::list<CollisionGroupDesc> baseCollisionGroups;    // 620
        uint currentBase;                                     // 632
        uint lastDockedBase;                                  // 636
        uint currentRoom;                                     // 640
        uint system;                                          // 644
        FLHookCore::Vector pos;                                           // 648 - 656
        FLHookCore::Matrix rot;                                           // 660 - 692
        uint startingRing;                                    // 696
        int rank;                                             // 700
        st6::vector<Reputation::Relation> repList;            // 704
        uint affiliation;                                     // 720, see Reputation::get_id();
        Costume commCostume;                                  // 724 - 772
        uint voiceLen;                                        // 776
        char voice[32] = "trent_voice";                       // 780
        Costume baseCostume;                                  // 812 - 860
        SubObjectID::EquipIdMaker equipIdEnumerator;          // 864
        st6::string prefilledWeaponGroupIni;                  // 876
        st6::list<uint> logInfo;                              // 888
        int interfaceState = 3;                               // 896
        FlMap<uint, char> visits;                             // 900
};

struct PlayerData
{
        wchar_t accId[40];                                // 0
        FlMap<CHARACTER_ID, CharacterData> characterMap;  // 0x50
        CHARACTER_ID charFile;                            // 0x64
        uint shipArchetype;                               // 0x264
        float relativeHealth;                             // 0x268
        st6::list<CollisionGroupDesc> collisionGroupDesc; // 0x26C
        EquipDescList equipAndCargo;                      // 0x278
        int rank;                                         // 0x284
        int moneyNeededToNextRank;                        // 0x288
        Costume commCostume;                              // 0x28C
        uint voiceLen;                                    // 0x2C0
        char voice[32];                                   // 0x2C4
        Costume baseCostume;                              // 0x2E4
        int reputation;                                   // 0x318
        int money;                                        // 0x31C
        int worth;                                        // 0x320
        uint shipArchetypeWhenLanding;                    // 0x324
        // Potentially something related to anti-cheat checking
        EquipDescList shadowEquipDescList; // 0x328
        int numKills;                      // 0x334
        int numMissionSuccesses;           // 0x338
        int numMissionFailures;            // 0x33C
        bool skipAutoSave;                 // 0x340
        uint saveCount;                    // 0x344
        uint clientId;                     // 0x348
        bool cheated;                      // 0x34C
        FLHookCore::Vector position;                   // 0x350
        FLHookCore::Matrix orientation;                // 0x35C
        st6::string weaponGroups;          // 0x380
        st6::list<uint> neuralNetLog;      // 0x390
        int interfaceState;                // 0x39C
        FlMap<uint, char> visitEntries;    // 0x3A0
        uint dunno2[4];                    // 0x3B4
        float difficulty;                  // 0x3C4
        ushort lastEquipId;                // 0x3C8
        uint menuItem;                     // 0x3CC
        uint onlineId2;                    // 0x3D0
        uint dunno3[2];                    // 0x3D4
        uint tradeRequestCount;            // 0x3DC
        uint systemId;                     // 0x3E0
        uint shipId;                       // 0x3E4
        uint createdShipId;                // 0x3E8
        uint baseId;                       // 0x3EC
        uint lastBaseId;                   // 0x3F0
        uint enteredBase;                  // 0x3F4
        uint baseRoomId;                   // 0x3F8
        uint characterId;                  // 0x3FC
        CAccount* account;                 // 0x400
        CPlayerGroup* playerGroup;         // 0x404
        uint missionId;                    // 0x408
        uint missionSetBy;                 // 0x40C
        uint exitedBase;                   // 0x410
        uint unknownLocId;                 // 0x414
};

struct PlayerDbTreeNode
{
        PlayerDbTreeNode* left;
        PlayerDbTreeNode* parent;
        PlayerDbTreeNode* right;
        ulong l1;
        // File name of character
        char* flName;
        // Length of file name
        uint length;
        // Always seems to be 0x1F. Possibly max length of flName
        uint dunno;
        // Account for this player
        CAccount* acc;
};

class SERVER_DEC PlayerDB
{
    public:
        PlayerDB(const PlayerDB&);
        PlayerDB();
        ~PlayerDB();
        PlayerDB& operator=(const PlayerDB&);
        PlayerData& operator[](const unsigned int&);
        bool BanAccount(st6::wstring&, bool);
        void BuildLocalUserDir();
        unsigned int CountPlayersInSystem(int);
        bool CreateAccount(st6::wstring&);
        void DeleteAccount(st6::wstring&);
        void DeleteCharacterFromID(st6::wstring&);
        bool DeleteCharacterFromName(st6::wstring&);
        CAccount* FindAccountFromCharacterID(st6::string&);
        CAccount* FindAccountFromCharacterName(st6::wstring&);
        CAccount* FindAccountFromClientID(unsigned int);
        CAccount* FindAccountFromName(st6::wstring&);
        bool GetAccountAdminRights(st6::wstring&);
        bool GetAccountBanned(st6::wstring&);
        const unsigned short* GetActiveCharacterName(unsigned int) const;
        bool GetCharactersForAccount(st6::wstring&, st6::list<st6::wstring>&);
        unsigned int GetGroupID(unsigned int);
        st6::wstring& GetMOTD();
        unsigned int GetMaxPlayerCount();
        unsigned int GetServerID();
        const char* GetServerSig();
        void LockAccountAccess(st6::wstring&);
        bool MakeLocalUserPath(char*, const char*);
        void ReadCharacterName(const char*, st6::wstring&);
        void SendGroupID(unsigned int, unsigned int);
        void SendSystemID(unsigned int, unsigned int);
        bool SetAccountAdminRights(st6::wstring&, bool);
        bool SetAccountPassword(st6::wstring&, st6::wstring&);
        void SetMOTD(st6::wstring&);
        void UnlockAccountAccess(st6::wstring&);
        void cleanup(unsigned int);
        bool create_new_character(const SCreateCharacterInfo&, unsigned int);
        bool create_restart_file(const char*);
        void free();
        void init(unsigned int, bool);
        bool is_valid(const unsigned int&);
        bool is_valid_ship_owner(const unsigned int&, const unsigned int&);
        unsigned char login(const SLoginInfo&, unsigned int);
        void logout(unsigned int);
        void logout_all();
        PlayerData* traverse_active(PlayerData*) const;

    private:
        int create_account(const SLoginInfo&);
        unsigned char load_user_data(const SLoginInfo&, unsigned int);
        unsigned int to_index(unsigned int);

    public:
        char* data;
        uint dunno1[12];
        PlayerDbTreeNode* firstNode;
        PlayerDbTreeNode* lastNode;
        uint dunno2;
        uint numAccounts;
};
;

namespace SrvAsteroid
{
    class SERVER_DEC SrvAsteroidSystem
    {
        public:
            SrvAsteroidSystem(const SrvAsteroidSystem&);
            SrvAsteroidSystem();
            ~SrvAsteroidSystem();
            SrvAsteroidSystem& operator=(const SrvAsteroidSystem&);
            int AddRef();
            int Release();
            void load(const char*);
            void map_asteroid_fields();
            void set_cmn_system(CmnAsteroid::CAsteroidSystem*);
            void set_sys_id(unsigned int);
            void update();

        public:
            unsigned char data[OBJECT_DATA_SIZE];
    };

    class MedAsteroid : public GameObject
    {
            virtual void sub_6CEF1C0();
            virtual void sub_6CEE630();
            virtual void sub_6CEE670();
            virtual void sub_6CEE6D0();
            virtual void sub_6D02CB0();
            virtual void sub_6D04C30();
            virtual void sub_6CEE9E0();
            virtual void sub_6CEE6E0();
            virtual void sub_6CEE810();
            virtual void sub_6CEE980();
            virtual void noImpl1(uint dummy1, uint dummy2);
            virtual void noImpl2(uint dummy1, uint dummy2);
            virtual void noImpl3(uint dummy1, uint dummy2);
            virtual void noImpl4(uint dummy);
            virtual void sub_6CE6190();
            virtual void sub_6CEEFA0();
            virtual void sub_6CEF0F0();
            virtual void sub_6CE61A0();
            virtual void sub_6CE61B0();
            virtual void sub_6CE61C0();
            virtual void sub_6CEE9F0();
            virtual void sub_6CEEE20();
            virtual void sub_6CEF1E0();
            virtual void sub_6CEEC90();
            virtual void sub_6CEEF70();
            virtual void sub_6CEF0B0();

            // TODO: Fields
    };

    class MedMine : public GameObject
    {
            virtual void sub_6CEF1C0();
            virtual void sub_6CEE630();
            virtual void sub_6CEE670();
            virtual void sub_6CEE6D0();
            virtual void sub_6D02CB0();
            virtual void sub_6D04C30();
            virtual void sub_6CEE9E0();
            virtual void sub_6CEE6E0();
            virtual void sub_6CEE810();
            virtual void sub_6CEE980();
            virtual void noImpl1(uint dummy1, uint dummy2);
            virtual void noImpl2(uint dummy1, uint dummy2);
            virtual void noImpl3(uint dummy1, uint dummy2);
            virtual void sub_6CEEE70();
            virtual void sub_6CE6190();
            virtual void sub_6CEEFA0();
            virtual void sub_6CEF0F0();
            virtual void sub_6CE61A0();
            virtual void sub_6CE61B0();
            virtual void sub_6CE61C0();
            virtual void sub_6CEE9F0();
            virtual void sub_6CEEE20();
            virtual void sub_6CEF1E0();
            virtual void sub_6CEEC90();
            virtual void sub_6CEEF70();
            virtual void sub_6CEF0B0();
            virtual void noImpl4(uint dummy1, uint dummy2);

            // TODO: Fields
    };

}; // namespace SrvAsteroid

struct MetaListNode
{
        MetaListNode* next;
        MetaListNode* prev;
        GameObject* value;
};

struct MetaList
{
        uint vtable;
        MetaListNode* start;
        MetaListNode* end;
        uint dunno[2];
};

struct SERVER_DEC StarSystem
{
        unsigned int count_players(unsigned int) const;

    public:
        uint vftable;                // 0
        uint dunno[12];              // 4
        MetaList shipList;           // 52/13
        MetaList lootList;           // 72/18
        MetaList solarList;          // 92/23
        MetaList guidedList;         // 112
        MetaList bulletList;         // 132
        MetaList mineList;           // 152
        MetaList counterMeasureList; // 172
        MetaList asteroidList;       // 192
};

namespace SysDB
{
    SERVER_DEC st6::map<unsigned int, StarSystem, st6::less<unsigned int>, st6::allocator<std::pair<const unsigned int, StarSystem>>> SysMap;
};

namespace Controller
{
    struct TimerExpired;
}

template <class T>
class SERVER_DEC OwnerList
{
    public:
        OwnerList();
        virtual ~OwnerList();
        OwnerList& operator=(const OwnerList&);
        void free();

    protected:
        unsigned char data[16];
};

namespace pub
{
    struct CargoEnumerator;

    SERVER_DEC int BuildBaseReader(INI_Reader&, const unsigned int&);
    SERVER_DEC int BuildSystemReader(INI_Reader&, const unsigned int&);
    SERVER_DEC HINSTANCE__* DLL_LoadLibrary(const char*);
    SERVER_DEC void DebugPrint(const char*, int);
    SERVER_DEC int FindHardpoint(const char*, unsigned int, FLHookCore::Vector&, FLHookCore::Matrix&);
    SERVER_DEC int GetBaseID(unsigned int&, const char*);
    SERVER_DEC unsigned int GetBaseNickname(char*, unsigned int, const unsigned int&);
    SERVER_DEC int GetBaseStridName(unsigned int&, const unsigned int&);
    SERVER_DEC int GetBases(const unsigned int&, unsigned int* const, unsigned int, unsigned int&);
    SERVER_DEC int GetCargoHoldSize(const unsigned int&, unsigned int&);
    SERVER_DEC int GetCostumeID(int&, const char*);
    SERVER_DEC IFileSystem* GetDataPath();
    SERVER_DEC int GetEquipmentID(unsigned int&, const char*);
    SERVER_DEC int GetFullHealth(const unsigned int&, unsigned int&);
    SERVER_DEC int GetGoodID(unsigned int&, const char*);
    SERVER_DEC int GetGoodProperties(const unsigned int&, float&, float&);
    SERVER_DEC int GetLoadout(EquipDescFLHookCore::Vector&, const unsigned int&);
    SERVER_DEC int GetLoadoutID(unsigned int&, const char*);
    SERVER_DEC int GetLoadoutName(const unsigned int&, char*, int);
    SERVER_DEC unsigned int GetLocationNickname(char*, unsigned int, const unsigned int&);
    SERVER_DEC int GetLocations(const unsigned int&, unsigned int* const, unsigned int, unsigned int&);
    SERVER_DEC int GetMaxHitPoints(const unsigned int&, int&);
    SERVER_DEC int GetNavMapScale(unsigned int, float&);
    SERVER_DEC unsigned int GetNicknameId(const char*);
    SERVER_DEC int GetRwTime(double&);
    SERVER_DEC int GetShipArchSTRID(const unsigned int&, unsigned int&);
    SERVER_DEC int GetShipID(unsigned int&, const char*);
    SERVER_DEC int GetSolarType(const unsigned int&, unsigned int&);
    SERVER_DEC int GetSystem(unsigned int&, const unsigned int&);
    SERVER_DEC int GetSystemGateConnection(const unsigned int&, unsigned int&);
    SERVER_DEC int GetSystemID(unsigned int&, const char*);
    SERVER_DEC unsigned int GetSystemNickname(char*, unsigned int, const unsigned int&);
    SERVER_DEC int GetTime(double&);
    SERVER_DEC int GetType(const unsigned int&, unsigned int&);
    SERVER_DEC int GetVoiceID(unsigned int&, const char*);
    SERVER_DEC int IsCommodity(const unsigned int&, bool&);
    SERVER_DEC unsigned short MakeId(const char*);
    SERVER_DEC bool NextBaseID(unsigned int&);
    SERVER_DEC bool NextSystemID(unsigned int&);
    SERVER_DEC int ReportFreeTerminal(unsigned int, int);
    SERVER_DEC int Save(unsigned int, unsigned int);
    // SERVER_DEC int SetTimer(unsigned int const&, Controller::TimerExpired const&, float);
    SERVER_DEC bool SinglePlayer();
    SERVER_DEC int TranslateArchToGood(const unsigned int&, unsigned int&);
    SERVER_DEC int TranslateGoodToMsgIdPrefix(unsigned int, TString<64>&);
    SERVER_DEC int TranslateShipToMsgIdPrefix(unsigned int, TString<64>&);
    SERVER_DEC int TranslateSystemToMsgIdPrefix(unsigned int, TString<64>&);

    namespace AI
    {
        class Personality;

        SERVER_DEC OP_RTYPE SubmitDirective(unsigned int, BaseOp*);
        SERVER_DEC OP_RTYPE SubmitState(unsigned int, BaseOp*);
        SERVER_DEC bool enable_all_maneuvers(unsigned int);
        SERVER_DEC bool enable_maneuver(unsigned int, int, bool);
        SERVER_DEC int get_behavior_id(unsigned int);
        SERVER_DEC bool get_personality(unsigned int, Personality&);
        SERVER_DEC ScanResponse get_scan_response(unsigned int, unsigned int, unsigned int);
        SERVER_DEC int get_state_graph_id(unsigned int);
        SERVER_DEC bool lock_maneuvers(unsigned int, bool);
        SERVER_DEC void refresh_state_graph(unsigned int);
        SERVER_DEC int remove_forced_target(unsigned int, unsigned int);
        SERVER_DEC OP_RTYPE set_directive_priority(unsigned int, DirectivePriority);
        SERVER_DEC bool set_player_enemy_clamp(unsigned int, int, int);
        SERVER_DEC int submit_forced_target(unsigned int, unsigned int);
        SERVER_DEC enum FORMATION_RTYPE update_formation_state(unsigned int, unsigned int, const FLHookCore::Vector&);
    }; // namespace AI

    namespace Audio
    {
        struct Tryptich
        {
                uint dunno;
                uint dunno2;
                uint dunno3;
                uint musicId;
        };

        SERVER_DEC int CancelMusic(unsigned int);
        SERVER_DEC int PlaySoundEffect(unsigned int, unsigned int);
        SERVER_DEC int SetMusic(unsigned int, const Tryptich&);
    }; // namespace Audio

    namespace GF
    {
        enum MVEmptyReason
        {
        };
        SERVER_DEC unsigned long AmbientScriptCreate(const struct AmbientScriptDescription&);
        SERVER_DEC void AmbientScriptDestroy(unsigned long*);
        SERVER_DEC unsigned long CharacterBehaviorCreate(const struct CharacterBehaviorDescription&);
        SERVER_DEC void CharacterBehaviorDestroy(unsigned long*);
        SERVER_DEC unsigned int CharacterCreate(const struct CharacterDescription&);
        SERVER_DEC void CharacterDestroy(unsigned int*);
        SERVER_DEC void CharacterSetBehavior(unsigned int, unsigned long);
        SERVER_DEC void EnumerateCharacterPlacementIni(unsigned int, void (*)(int, INI_Reader*, void*), void*);
        SERVER_DEC unsigned int FindBase(const char*);
        SERVER_DEC unsigned int FindLocation(unsigned int, const char*);
        SERVER_DEC const char* FormCharacterPlacementName(const SetpointProperties*);
        SERVER_DEC int GetAccessory(const char*);
        SERVER_DEC int GetBasePosition(const unsigned int&, const unsigned int&, FLHookCore::Vector&);
        SERVER_DEC int GetBodyPart(const char*, int);
        SERVER_DEC unsigned int GetCharacterOnPlacement(unsigned int, unsigned int, int);
        SERVER_DEC int GetCharacterPlacementByName(unsigned int, const char*, int&);
        SERVER_DEC const char* GetCharacterPlacementName(unsigned int, int);
        SERVER_DEC unsigned long GetCharacterPlacementOccupancy(unsigned int, int);
        SERVER_DEC int GetCharacterPlacementPosture(unsigned int, int, unsigned long&);
        SERVER_DEC bool GetCharacterPlacementProperties(unsigned int, int, SetpointProperties*);
        SERVER_DEC void GetCostumeByID(int, Costume&);
        SERVER_DEC int GetCostumeSkeletonGender(const Costume&, int&);
        SERVER_DEC int GetMissionVendorOfferCount(unsigned int, unsigned int);
        SERVER_DEC int GetNumCharacterPlacements(unsigned int);
        SERVER_DEC float GetRtcPerformanceSlider();
        SERVER_DEC unsigned int GetSpaceflightLocation();
        SERVER_DEC bool IsCharacterPlacementNormal(unsigned int, int);
        SERVER_DEC bool IsCharacterPlacementSpecial(unsigned int, int);
        SERVER_DEC void MissionVendorAcceptance(unsigned long, bool, const FmtStr&, unsigned int);
        SERVER_DEC unsigned long MissionVendorOfferCreate(const struct MissionVendorOfferDescription&);
        SERVER_DEC void MissionVendorOfferDestroy(unsigned long*);
        SERVER_DEC unsigned long NewsBroadcastCreate(const struct NewsBroadcastDescription&);
        SERVER_DEC void NewsBroadcastDestroy(unsigned long*);
        SERVER_DEC int ReportWhyMissionVendorEmpty(unsigned int, MVEmptyReason);
    }; // namespace GF

    namespace Market
    {
        SERVER_DEC int GetCommoditiesForSale(unsigned int, unsigned int* const, int*);
        SERVER_DEC int GetCommoditiesInDemand(unsigned int, unsigned int* const, int*);
        SERVER_DEC int GetGoodJumpDist(unsigned int, unsigned int&);
        SERVER_DEC int GetMinInventory(unsigned int, unsigned int, int&);
        SERVER_DEC int GetNominalPrice(unsigned int, float&);
        SERVER_DEC int GetNumCommoditiesForSale(unsigned int, int*);
        SERVER_DEC int GetNumCommoditiesInDemand(unsigned int, int*);
        SERVER_DEC int GetPrice(unsigned int, unsigned int, float&);
        SERVER_DEC int IsGoodInDemand(unsigned int, unsigned int, bool&);
    }; // namespace Market

    namespace Phantom
    {
        SERVER_DEC int Attach(const unsigned int&, void*);
        SERVER_DEC int Create(unsigned int, const FLHookCore::Vector&, const FLHookCore::Vector&, const FLHookCore::Matrix&, unsigned int, void*&);
        SERVER_DEC int Create(unsigned int, float, const FLHookCore::Vector&, unsigned int, void*&);
        SERVER_DEC int Destroy(void*);
        SERVER_DEC int Detach(void*);
        SERVER_DEC int SetActive(void*, bool);
    }; // namespace Phantom

    namespace Player
    {
        SERVER_DEC int AddCargo(const unsigned int&, const unsigned int&, unsigned int, float, bool);
        SERVER_DEC int AdjustCash(const unsigned int&, int);
        SERVER_DEC int CfgInterfaceNotification(unsigned int, unsigned int, bool, int);
        SERVER_DEC int DisplayMissionMessage(const unsigned int&, const FmtStr&, MissionMessageType, bool);
        SERVER_DEC int EnumerateCargo(const unsigned int&, pub::CargoEnumerator&);
        SERVER_DEC int ForceLand(unsigned int, unsigned int);
        SERVER_DEC int GetAssetValue(const unsigned int&, float&);
        SERVER_DEC int GetBase(const unsigned int&, unsigned int&);
        SERVER_DEC int GetBody(const unsigned int&, unsigned int&);
        SERVER_DEC int GetCharacter(const unsigned int&, unsigned int&);
        SERVER_DEC int GetGender(const unsigned int&, int&);
        SERVER_DEC int GetGroupMembers(unsigned int, st6::vector<unsigned int>&);
        SERVER_DEC int GetGroupSize(unsigned int, unsigned int&);
        SERVER_DEC int GetLocation(const unsigned int&, unsigned int&);
        SERVER_DEC int GetMoneyNeededToNextRank(const unsigned int&, int&);
        SERVER_DEC int GetMsnID(unsigned int, unsigned int&);
        SERVER_DEC int GetName(unsigned int, st6::wstring&);
        SERVER_DEC int GetNumKills(const unsigned int&, int&);
        SERVER_DEC int GetNumMissionFailures(const unsigned int&, int&);
        SERVER_DEC int GetNumMissionSuccesses(const unsigned int&, int&);
        SERVER_DEC int GetRank(const unsigned int&, int&);
        SERVER_DEC int GetRelativeHealth(const unsigned int&, float&);
        SERVER_DEC int GetRemainingHoldSize(const unsigned int&, float&);
        SERVER_DEC int GetRep(const unsigned int&, int&);
        SERVER_DEC int GetShip(const unsigned int&, unsigned int&);
        SERVER_DEC int GetShipID(const unsigned int&, unsigned int&);
        SERVER_DEC int GetSystem(const unsigned int&, unsigned int&);
        SERVER_DEC int InspectCash(const unsigned int&, int&);
        SERVER_DEC int IsGroupMember(unsigned int, unsigned int, bool&);
        SERVER_DEC int LoadHint(unsigned int, BaseHint*);
        SERVER_DEC int MarkObj(unsigned int, unsigned int, int);
        SERVER_DEC int PopUpDialog(unsigned int, const FmtStr&, const FmtStr&, unsigned int);
        SERVER_DEC int RemoveCargo(const unsigned int&, unsigned short, unsigned int);
        SERVER_DEC int RemoveFromGroup(unsigned int);
        SERVER_DEC int ReplaceMissionObjective(const unsigned int&, const unsigned int&, unsigned int, const struct MissionObjective&);
        SERVER_DEC int ReturnBestPath(unsigned int, unsigned char*, int);
        SERVER_DEC int ReturnPlayerStats(unsigned int, unsigned char*, int);
        SERVER_DEC int RevertCamera(unsigned int);
        SERVER_DEC int RewardGroup(unsigned int, int);
        SERVER_DEC int SendNNMessage(unsigned int, unsigned int);
        SERVER_DEC int SetCamera(unsigned int, const FLHookCore::Transform&, float, float);
        SERVER_DEC int SetCostume(const unsigned int&, int);
        SERVER_DEC int SetInitialOrnt(const unsigned int&, const FLHookCore::Matrix&);
        SERVER_DEC int SetInitialPos(const unsigned int&, const FLHookCore::Vector&);
        SERVER_DEC int SetMissionObjectiveState(const unsigned int&, const unsigned int&, int, unsigned int);
        SERVER_DEC int SetMissionObjectives(const unsigned int&, const unsigned int&, const MissionObjective*, unsigned int, const FmtStr&, unsigned char,
                                        const FmtStr&);
        SERVER_DEC int SetMoneyNeededToNextRank(unsigned int, int);
        SERVER_DEC int SetMonkey(unsigned int);
        SERVER_DEC int SetMsnID(unsigned int, unsigned int, unsigned int, bool, unsigned int);
        SERVER_DEC int SetNumKills(const unsigned int&, int);
        SERVER_DEC int SetNumMissionFailures(const unsigned int&, int);
        SERVER_DEC int SetNumMissionSuccesses(const unsigned int&, int);
        SERVER_DEC int SetRank(unsigned int, int);
        SERVER_DEC int SetRobot(unsigned int);
        SERVER_DEC int SetShipAndLoadout(const unsigned int&, unsigned int, const EquipDescFLHookCore::Vector&);
        SERVER_DEC int SetStoryCue(const unsigned int&, unsigned int);
        SERVER_DEC int SetTrent(unsigned int);
    }; // namespace Player

    namespace Reputation
    {
        SERVER_DEC int Alloc(int&, const FmtStr&, const FmtStr&);
        SERVER_DEC int EnumerateGroups(struct Enumerator&);
        SERVER_DEC int Free(const int&);
        SERVER_DEC int GetAffiliation(const int&, unsigned int&);
        SERVER_DEC int GetAttitude(const int&, const int&, float&);
        SERVER_DEC int GetGroupFeelingsTowards(const int&, const unsigned int&, float&);
        SERVER_DEC int GetGroupName(const unsigned int&, unsigned int&);
        SERVER_DEC int GetName(const int&, FmtStr&, FmtStr&);
        SERVER_DEC int GetRank(const int&, float&);
        SERVER_DEC int GetReputation(int&, const ID_String&);
        SERVER_DEC int GetReputation(int&, const char*);
        SERVER_DEC int GetReputation(const int&, const unsigned int&, float&);
        SERVER_DEC int GetReputation(const unsigned int&, const unsigned int&, float&);
        SERVER_DEC int GetReputationGroup(unsigned int&, const char*);
        SERVER_DEC int GetShortGroupName(const unsigned int&, unsigned int&);
        SERVER_DEC int SetAffiliation(const int&, const unsigned int&);
        SERVER_DEC int SetAttitude(const int&, const int&, float);
        SERVER_DEC int SetRank(const int&, float);
        SERVER_DEC int SetReputation(const int&, const unsigned int&, float);
        SERVER_DEC int SetReputation(const unsigned int&, const unsigned int&, float);
    }; // namespace Reputation

    namespace SpaceObj
    {
        struct CargoDesc
        {
                int vTbl;
                int unk1;
                int unk2;
                int unk3;
                int unk4;
        };

        struct EquipItem
        {
                EquipItem* next;
                uint i2;
                ushort s1;
                ushort id;
                uint goodId;
                CacheString hardpoint;
                bool mounted;
                char unk[3];
                float status;
                uint count;
                bool mission;
        };

        struct ShipInfo
        {
                uint flag = 0;
                uint system = 0;
                uint shipArchetype = 0;
                FLHookCore::Vector pos = { 0, 0, 0 };
                FLHookCore::Vector unk1 = { 0, 0, 0 }; // all 0
                FLHookCore::Vector unk2 = { 0, 0, 0 }; // all 0
                FLHookCore::Matrix orientation;
                uint unk3 = 0; // 0
                uint loadout;
                OwnerList<pub::SpaceObj::CargoDesc> cargoDesc;
                uint look1 = 0;
                uint look2 = 0;
                uint unk4 = 0; // 0
                uint unk6 = 0; // 0
                uint comm = 0;
                float unk7 = 0;
                float unk8 = 0;
                float unk9 = 0;
                float unk10 = 0;
                float unk11 = 0;
                float unk12 = 0;
                float unk13 = 0;
                uint unk14 = 0;

                int rep = 0; // increases for each NPC spawned, starts at 0 or 1
                uint pilotVoice = 0;
                uint unk15 = 0;   // 0
                uint health = -1; // -1 = max health
                uint unk16 = 0;   // 0
                uint unk17 = 0;   // 0
                uint level = 1;
        };

        struct SolarInfo
        {
                int flag; // 0x290; ShipInfo has this too, no clue whether actually a flag
                uint archId;
                uint systemId;
                FLHookCore::Vector pos;
                FLHookCore::Matrix orientation;
                uint loadoutId;
                Costume costume;
                int rep;
                uint voiceId;
                uint dockWith;
                bool missionBool;
                int hitPointsLeft;
                char nickName[64]; // Has to be unique
                uint unk11;        // 0 unused?
                uint mission = 0;  // 1 = flagged as mission solar, 0 = normal
        };

        struct LootInfo
        {
                uint systemId;
                uint equipmentArchId;
                uint infocardOverride;
                uint ownerId;
                FLHookCore::Vector linearVelocity;
                FLHookCore::Vector pos;
                FLHookCore::Matrix rot;
                FLHookCore::Vector angularVelocity;
                int itemCount;
                float hitPtsPercentage;
                bool canAITractor;
                bool isMissionLoot;
        };

        struct TerminalInfo
        {
                char hardPoint[0x20];
                DockType type; // 1=berth 4=moor? 7=jump?
        };

        enum class EQUIPMENT_RTYPE
        {
        };
        enum class PosSelectionType
        {
        };

        SERVER_DEC int Activate(const unsigned int&, bool, int);
        SERVER_DEC EQUIPMENT_RTYPE ActivateEquipment(const unsigned int&, struct EQInfo*);
        SERVER_DEC int AddImpulse(const unsigned int&, const FLHookCore::Vector&, const FLHookCore::Vector&);
        SERVER_DEC int Create(unsigned int&, const ShipInfo&);
        SERVER_DEC int CreateLoot(unsigned int&, const LootInfo&);
        SERVER_DEC int CreateSolar(unsigned int&, const SolarInfo&);
        SERVER_DEC int Destroy(unsigned int, DestroyType);
        SERVER_DEC int Dock(const unsigned int&, const unsigned int&, int, DOCK_HOST_RESPONSE);
        SERVER_DEC int DockRequest(const unsigned int&, const unsigned int&);
        SERVER_DEC int DrainShields(unsigned int);
        SERVER_DEC int EnumerateCargo(const unsigned int&, pub::CargoEnumerator&);
        SERVER_DEC int ExistsAndAlive(unsigned int);
        SERVER_DEC int FormationResponse(const unsigned int&, FORMATION_RTYPE);
        SERVER_DEC int GetArchetypeID(const unsigned int&, unsigned int&);
        SERVER_DEC int GetAtmosphereRange(const unsigned int&, float&);
        SERVER_DEC int GetBurnRadius(const unsigned int&, float&, FLHookCore::Vector&);
        SERVER_DEC int GetCargoSpaceOccupied(const unsigned int&, unsigned int&);
        SERVER_DEC int GetCenterOMass(const unsigned int&, FLHookCore::Vector&);
        SERVER_DEC int GetDockingTarget(const unsigned int&, unsigned int&);
        SERVER_DEC int GetEmptyPos(const unsigned int&, const FLHookCore::Transform&, const float&, const float&, const PosSelectionType&, FLHookCore::Vector&);
        SERVER_DEC int GetGoodID(const unsigned int&, unsigned int&);
        SERVER_DEC int GetHardpoint(const unsigned int&, const char*, FLHookCore::Vector*, FLHookCore::Matrix*);
        SERVER_DEC int GetHealth(const unsigned int& SpaceObj, float& CurrentHealth, float& MaxHealth);
        SERVER_DEC int GetInvincible(unsigned int, bool&, bool&, float&);
        SERVER_DEC int GetJumpTarget(const unsigned int&, unsigned int&, unsigned int&);
        SERVER_DEC int GetLocation(unsigned int, FLHookCore::Vector&, FLHookCore::Matrix&);
        SERVER_DEC int GetMass(const unsigned int&, float&);
        SERVER_DEC int GetMotion(unsigned int, FLHookCore::Vector&, FLHookCore::Vector&);
        SERVER_DEC int GetRadius(const unsigned int&, float&, FLHookCore::Vector&);
        SERVER_DEC int GetRelativeHealth(const unsigned int&, float&);
        SERVER_DEC int GetRep(unsigned int, int&);
        SERVER_DEC int GetScannerRange(unsigned int, int&, int&);
        SERVER_DEC int GetShieldHealth(const unsigned int& spaceObj, float& currentShields, float& maxShields, bool& shieldsUp);
        SERVER_DEC int GetSolarArchetypeID(unsigned int, unsigned int&);
        SERVER_DEC int GetSolarArchetypeNickname(char*, int, unsigned int);
        SERVER_DEC int GetSolarParent(const unsigned int&, unsigned int&);
        SERVER_DEC int GetSolarRep(unsigned int, int&);
        SERVER_DEC int GetSystem(unsigned int, unsigned int&);
        SERVER_DEC int GetTarget(const unsigned int&, unsigned int&);
        SERVER_DEC int GetTerminalInfo(const unsigned int&, int terminalIndex, TerminalInfo&);
        SERVER_DEC int GetTradelaneNextAndPrev(const unsigned int&, unsigned int&, unsigned int&);
        SERVER_DEC int GetType(unsigned int, unsigned int&);
        SERVER_DEC int GetVoiceID(const unsigned int&, unsigned int&);
        SERVER_DEC int InstantDock(const unsigned int&, const unsigned int&, int);
        SERVER_DEC int IsPosEmpty(const unsigned int&, const FLHookCore::Vector&, const float&, bool&);
        SERVER_DEC int JettisonEquipment(const unsigned int&, const unsigned short&, const int&);
        SERVER_DEC int JumpIn(const unsigned int&, const unsigned int&);
        SERVER_DEC int LaneResponse(const unsigned int&, int);
        SERVER_DEC int Launch(const unsigned int&, const unsigned int&, int);
        SERVER_DEC int LightFuse(const unsigned int&, const char*, float);
        SERVER_DEC int Relocate(const unsigned int&, const unsigned int&, const FLHookCore::Vector&, const FLHookCore::Matrix&);
        SERVER_DEC int RequestSpaceScript(const unsigned int&, const FLHookCore::Vector&, const int&, unsigned int, const char*);
        SERVER_DEC int SendComm(unsigned int, unsigned int, unsigned int, const Costume*, unsigned int, unsigned int*, int, unsigned int, float, bool);
        SERVER_DEC int SetInvincible2(unsigned int, bool, bool, float);
        SERVER_DEC int SetInvincible(unsigned int, bool, bool, float);
        SERVER_DEC int SetRelativeHealth(const unsigned int&, float);
    }; // namespace SpaceObj

    namespace System
    {
        struct SysObj
        {
                char nick[32]; // NOT NUL-terminated if longer
                FLHookCore::Vector pos;
                UINT archId;
                UINT idsName;
                UINT idsInfo;
                char reputation[32];
                UINT dockWith;
                UINT gotoSystem;
                UINT system;
                // -------------------
                // Some nicknames are longer than 32 characters, so take advantage of the
                // fact that where it gets the nickname from immediately follows.
                size_t len; // TString<64>
                char nickname[64];
        };

        struct SysObjEnumerator
        {
                virtual bool operator()(const SysObj&) = 0;
        };

        struct Connection
        {
                UINT stuff[10];
        };

        struct ConnectionEnumerator
        {
                virtual bool operator()(const Connection&) = 0;
        };

        SERVER_DEC int EnumerateConnections(const unsigned int&, pub::System::ConnectionEnumerator&, ConnectionType);
        SERVER_DEC int EnumerateObjects(const unsigned int&, SysObjEnumerator&);
        SERVER_DEC int EnumerateZones(const unsigned int&, struct ZoneEnumerator&);
        SERVER_DEC int Find(const unsigned int&, const char*, unsigned int&);
        SERVER_DEC int GetName(unsigned int, unsigned int&);
        SERVER_DEC int GetNestedProperties(const unsigned int&, const FLHookCore::Vector&, unsigned long&);
        SERVER_DEC int InZones(unsigned int, const FLHookCore::Transform&, float, float, float, unsigned int* const, unsigned int, unsigned int&);
        SERVER_DEC int InZones(unsigned int, const FLHookCore::Vector&, float, unsigned int* const, unsigned int, unsigned int&);
        SERVER_DEC int LoadSystem(const unsigned int&);
        SERVER_DEC int ScanObjects(const unsigned int&, unsigned int* const, unsigned int, const FLHookCore::Vector&, float, unsigned int, unsigned int&);
    }; // namespace System

    namespace Zone
    {
        enum ZoneShape
        {
        };
        SERVER_DEC float ClassifyPoint(unsigned int, const FLHookCore::Vector&);
        SERVER_DEC float GetDistance(unsigned int, const FLHookCore::Vector&);
        SERVER_DEC unsigned int GetId(unsigned int, const char*);
        SERVER_DEC int GetLootableInfo(unsigned int, ID_String&, ID_String&, int&, int&, int&);
        SERVER_DEC int GetName(unsigned int, unsigned int&);
        SERVER_DEC int GetOrientation(const unsigned int&, FLHookCore::Matrix&);
        // SERVER_DEC  int GetPopulation(unsigned int,class weighted_vector<unsigned int> const * &);
        SERVER_DEC FLHookCore::Vector GetPos(unsigned int);
        SERVER_DEC int GetProperties(unsigned int, unsigned long&);
        SERVER_DEC float GetRadius(unsigned int);
        SERVER_DEC int GetShape(unsigned int, ZoneShape&);
        SERVER_DEC int GetSize(unsigned int, FLHookCore::Vector&);
        SERVER_DEC unsigned int GetSystem(unsigned int);
        SERVER_DEC bool InZone(unsigned int, const FLHookCore::Vector&, float);
        SERVER_DEC bool Intersect(unsigned int, const FLHookCore::Vector&, const FLHookCore::Vector&, FLHookCore::Vector&);
        SERVER_DEC bool VerifyId(unsigned int);
    }; // namespace Zone

    namespace Controller
    {
        struct CreateParms
        {
                void* freeFunc;
                uint client;
        };

        enum PRIORITY
        {
        };

        SERVER_DEC unsigned int Create(const char*, const char*, const CreateParms*, PRIORITY);
        SERVER_DEC void Destroy(unsigned int);
        SERVER_DEC int SetHeartbeatInterval(const unsigned int&, float);
        SERVER_DEC int _SendMessage(const unsigned int&, int, const void*);
    } // namespace Controller

}; // namespace pub

SERVER_DEC void (*g_pPrivateChatHook)(unsigned short*, int);
SERVER_DEC void (*g_pSystemChatHook)(unsigned short*, int);
SERVER_DEC void (*g_pUniverseChatHook)(unsigned short*, int);

SERVER_DEC PlayerDB Players;
extern "C" SERVER_DEC IServerImpl Server;

#endif // _FLCORESERVER_H_
