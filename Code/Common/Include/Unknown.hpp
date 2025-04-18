#pragma once

#include <FLHookCore.h>
#include "AI/AIEnums.hpp"
#include "AI/ContentCallback.hpp"
#include "AI/Ops.hpp"
#include "AI/Personality.hpp"
#include "Enums.hpp"
#include "FmtStr.hpp"
#include "Goods.hpp"
#include "Watchable.hpp"

#pragma comment(lib, "FLCoreCommon.lib")

struct CLoot;
struct CObject;
class CETractor;
namespace Archetype
{
    struct Munition;
    struct IClObjFactory;
}
class CEShield;
class CEquip;
class CAttachedEquip;
// Forward Declarations
struct IObjRW;
struct HardpointInfo;
struct EquipStatus;
namespace Universe
{
    struct IZone;
}
class TRANode;
class RDLReNode;
class IStateGraph;

enum class TransactionType
{
    Sell = 0,
    Buy = 1
};

enum class ExcludeObjectType
{
};

struct COMMON_DEC ActionDB
{
        ActionDB();
        ~ActionDB();
        ActionDB& operator=(const ActionDB&);
        void add(struct IAction*);
        IAction* find(const char*) const;
        void free();
        int get_action_count() const;
        bool remove(IAction*);
        void update(float);

    public:
        unsigned char data[OBJECT_DATA_SIZE];
};

struct COMMON_DEC AmbientScriptInfo
{
        AmbientScriptInfo();
        ~AmbientScriptInfo();
        void clear();
        void destroy();

    public:
        unsigned char data[OBJECT_DATA_SIZE];
};

class COMMON_DEC AmbientScriptProperties
{
    public:
        AmbientScriptProperties();
        ~AmbientScriptProperties();
        AmbientScriptProperties& operator=(const AmbientScriptProperties&);
        void clear();
        void destroy();
        unsigned long get_key() const;
        void init(const struct AmbientScriptDescription&);
        void marshal(class MarshalBuffer*) const;
        void unmarshal(MarshalBuffer*);

    public:
        unsigned char data[OBJECT_DATA_SIZE];
};

namespace AnimDB
{
    COMMON_DEC void Add(int);
    COMMON_DEC void Add(struct VChannel*);
    COMMON_DEC unsigned int Count();
    COMMON_DEC void Rem(int);
    COMMON_DEC void Rem(const VChannel*);
    COMMON_DEC void Shutdown();
    COMMON_DEC void Update(float);
}; // namespace AnimDB

namespace PhyArch
{
    struct COMMON_DEC Part
    {
            Part(const Part&);
            Part();
            ~Part();
            Part& operator=(const Part&);
            void clear();

        public:
            unsigned char data[OBJECT_DATA_SIZE];
    };

    COMMON_DEC const Part* GetDefaultPart();
    COMMON_DEC bool LoadSurfaces(const char*, st6::map<unsigned int, Part, st6::less<unsigned int>, st6::allocator<Part>>&);
}; // namespace PhyArch

struct IEngineInstance;

struct DockHardpointInfo
{
        float radius;
        const char* hardpoint;
        const char* dockAnimation;
        DockType dockType;
};

struct CHARACTER_ID final
{
        COMMON_DEC CHARACTER_ID();
        COMMON_DEC CHARACTER_ID const& operator=(CHARACTER_ID const&);
        bool operator<(CHARACTER_ID const& a) const { return _stricmp(charFilename, a.charFilename) < 0; }
        bool operator==(CHARACTER_ID const& a) const { return _stricmp(charFilename, a.charFilename) == 0; }
        bool operator!=(CHARACTER_ID const& a) const { return _stricmp(charFilename, a.charFilename) != 0; }
        CHARACTER_ID(const char* input) { strcpy_s(charFilename, input); }
        COMMON_DEC void invalidate();
        COMMON_DEC bool is_valid() const;

        char charFilename[512]; // Only first 16 bytes are ever used
};

namespace Async
{
    struct COMMON_DEC Action
    {
            Action(const Action&);
            Action(bool);
            virtual ~Action();

            static void* operator new(unsigned int);
            static void operator delete(void*);

        public:
            unsigned char data[OBJECT_DATA_SIZE];
    };

    COMMON_DEC bool AddWork(Action*);
    COMMON_DEC void DumpWorkQueue();
    COMMON_DEC void Shutdown();
    COMMON_DEC void Startup();
    COMMON_DEC int WorkQueueSize();
}; // namespace Async

class COMMON_DEC AttribStackNode
{
    public:
        enum class Op
        {
        };

        AttribStackNode(const AttribStackNode&);
        AttribStackNode(Op);
        AttribStackNode();
        virtual ~AttribStackNode();
        AttribStackNode& operator=(const AttribStackNode&);
        virtual class RDLNode* Clone() const;
        virtual void Execute(class TextRenderContext&, bool);
        virtual void GetElementPos(int, TextRenderContext&, int&) const;
        virtual void GetElementSize(int&) const;
        virtual void GetVisualSize(const TextRenderContext&, struct VisualSize&) const;
        virtual bool SplitAtSize(const TextRenderContext&, int, unsigned int, RDLNode*&, RDLNode*&) const;
        virtual void Update(float);
        Op get_operation();
        void set_operation(Op);

        virtual operator AttribStackNode*();
        virtual operator const AttribStackNode*() const;

    public:
        unsigned char data[OBJECT_DATA_SIZE];
};

struct COMMON_DEC BaseHint
{
        BaseHint(const BaseHint&);
        BaseHint();
        virtual ~BaseHint();
        BaseHint& operator=(const BaseHint&);

    public:
        unsigned char data[OBJECT_DATA_SIZE];
};

namespace BehaviorTypes
{
    COMMON_DEC int get_behavior_id(const char*);
    COMMON_DEC const char* get_behavior_name(int);
}; // namespace BehaviorTypes

class COMMON_DEC BinaryRDLReader
{
        char Buf[1024];

    public:
        BinaryRDLReader(const BinaryRDLReader&);
        BinaryRDLReader();
        BinaryRDLReader& operator=(const BinaryRDLReader&);
        virtual bool extract_text_from_buffer(unsigned short*, unsigned int, unsigned int&, const char*, unsigned int);
        virtual bool read_buffer(class RenderDisplayList&, const char*, unsigned int);
        virtual bool read_file(RenderDisplayList&, const char*);
};

class COMMON_DEC BinaryRDLWriter
{
        char Buf[1024];

    public:
        BinaryRDLWriter(const BinaryRDLWriter&);
        BinaryRDLWriter();
        BinaryRDLWriter& operator=(const BinaryRDLWriter&);
        virtual bool write_buffer(const RenderDisplayList&, char*, unsigned int, unsigned int&);
        virtual bool write_file(const RenderDisplayList&, const char*);
};

struct ISpatialPartition;

namespace CmnAsteroid
{
    struct LootableZone;
}

namespace Exclusion
{
    struct COMMON_DEC AsteroidExclusionZone
    {
            AsteroidExclusionZone();
            ~AsteroidExclusionZone();
            AsteroidExclusionZone& operator=(const AsteroidExclusionZone&);
            const Universe::IZone* get_zone();
            bool set_zone(const Universe::IZone*, const Universe::IZone*);
            void update_dist(const FLHookCore::Vector&);

        public:
            unsigned char data[OBJECT_DATA_SIZE];
    };

    class COMMON_DEC AsteroidExclusionZoneMgr
    {
        public:
            AsteroidExclusionZoneMgr(const AsteroidExclusionZoneMgr&);
            AsteroidExclusionZoneMgr();
            ~AsteroidExclusionZoneMgr();
            AsteroidExclusionZoneMgr& operator=(const AsteroidExclusionZoneMgr&);
            AsteroidExclusionZone* back();
            int get_max_billboard_count();
            virtual bool is_excluded(const FLHookCore::Vector&, ExcludeObjectType, void*);
            void normalize_billboard_density(int);
            virtual void push_back(const Universe::IZone*, const Universe::IZone*);
            void set_max_cliasteroid_exclusion_distance(float);
            void set_max_dynamicasteroid_exclusion_distance(float);
            virtual void sort(void*);

        private:
            bool is_billboard_excluded(const FLHookCore::Vector&, float*);
            bool is_cliasteroid_excluded(const FLHookCore::Vector&, float*);
            bool is_cmnasteroid_excluded(const FLHookCore::Vector&, float*);
            bool is_dynamic_asteroid_excluded(const FLHookCore::Vector&);

        public:
            unsigned char data[OBJECT_DATA_SIZE];
    };

    struct COMMON_DEC NebulaExclusionZone
    {
            NebulaExclusionZone();
            ~NebulaExclusionZone();
            NebulaExclusionZone& operator=(const NebulaExclusionZone&);
            float get_fog_far();
            const Universe::IZone* get_zone();
            ID_String get_zone_shell_name();
            void set_fog_far(float);
            bool set_zone(const Universe::IZone*, const Universe::IZone*);
            void set_zone_shell_name(const char*);
            void update_dist(const FLHookCore::Vector&);

        public:
            unsigned char data[OBJECT_DATA_SIZE];
    };

    class COMMON_DEC NebulaExclusionZoneMgr
    {
        public:
            NebulaExclusionZoneMgr(const NebulaExclusionZoneMgr&);
            NebulaExclusionZoneMgr();
            ~NebulaExclusionZoneMgr();
            NebulaExclusionZoneMgr& operator=(const NebulaExclusionZoneMgr&);
            NebulaExclusionZone* back();
            virtual bool is_excluded(const FLHookCore::Vector&, ExcludeObjectType, void*);
            bool is_in_exclusion_zone(const FLHookCore::Vector&, NebulaExclusionZone**, float*, bool);
            virtual void push_back(const Universe::IZone*, const Universe::IZone*);
            void set_max_distance(float);
            virtual void sort(void*);

        public:
            unsigned char data[OBJECT_DATA_SIZE];
    };

}; // namespace Exclusion

struct INotify
{
        enum Event
        {
        };
};

class IVP_Core;
class IVP_Event_Sim;

template <class T>
class IVP_U_Vector;

enum IVP_CONTROLLER_PRIORITY
{
};

#undef GetCurrentTime

class COMMON_DEC CAttachmentObj
{
    public:
        virtual ~CAttachmentObj();

        CAttachmentObj(const CAttachmentObj&);
        CAttachmentObj();
        CAttachmentObj& operator=(const CAttachmentObj&);

    public:
        unsigned char data[OBJECT_DATA_SIZE];
};

struct COMMON_DEC CBase
{
        virtual ~CBase();

        CBase(const CBase&);
        CBase();
        CBase& operator=(const CBase&);
        void advise(bool);
        void cobject(CObject*);
        CObject* cobject() const;
        long get_index() const;
        void notify_of_destruction(void*);

    public:
        CObject* cobj;
};

class COMMON_DEC CDeadReckonedVector
{
    public:
        CDeadReckonedVector(const CDeadReckonedVector&);
        CDeadReckonedVector();
        virtual ~CDeadReckonedVector();
        CDeadReckonedVector& operator=(const CDeadReckonedVector&);
        void AddSample(const FLHookCore::Vector&, double);
        double CalcError(const FLHookCore::Vector&);
        double ConvergeTime();
        void Doit(double);
        const FLHookCore::Vector& GetProjectedPosition();
        const FLHookCore::Vector& GetSample(int);
        void NormalizeProjectedPosition();
        void NormalizeTrackedPosition();
        FLHookCore::Vector ProjectVelocity(double);
        void Reset();
        void SetMaxCorrectiveConvergeTime(double);

    public:
        unsigned char data[OBJECT_DATA_SIZE];
};

class COMMON_DEC CFLIDMaker
{
    public:
        CFLIDMaker& operator=(const CFLIDMaker&);
        unsigned int AllocateObjectID();
        unsigned int CreateStaticID(const char*);
        static CFLIDMaker* GetInstance();
        int Initialize();
        static void Shutdown();
        static CFLIDMaker* m_pTheMaker;

    protected:
        CFLIDMaker();
        ~CFLIDMaker();

    public:
        unsigned char data[OBJECT_DATA_SIZE];
};

class COMMON_DEC CPlayerAccount
{
    public:
        CPlayerAccount(const CPlayerAccount&);
        CPlayerAccount();
        virtual ~CPlayerAccount();
        CPlayerAccount& operator=(const CPlayerAccount&);
        void GenerateAccount(const char*);
        static bool GenerateTextKey(char*);
        st6::wstring GetAccountName();
        const char* GetAccountNameChar();
        st6::wstring GetAccountNameSig();
        const char* GetAccountNameSigChar();
        st6::wstring GetServerSignature(const char*);
        static bool GetTextKey(char*);
        bool LoadAccount();
        bool LoadAccountFromStrings(const char*, const char*);
        static void SetAcctIndex(unsigned long);
        static bool SetTextKey(char*);
        bool VerifyAccount();

    protected:
        void TossHashes();
        static unsigned long AccountIndex;

    public:
        unsigned char data[OBJECT_DATA_SIZE];
};

class COMMON_DEC CPlayerTradeOffer
{
    public:
        CPlayerTradeOffer(const CPlayerTradeOffer&);
        CPlayerTradeOffer();
        virtual ~CPlayerTradeOffer();
        CPlayerTradeOffer& operator=(const CPlayerTradeOffer&);
        bool GetAccepted();
        EquipDescList& GetList();
        unsigned long GetMoneyOffered();
        unsigned int GetSourcePlayerID();
        CPlayerTradeOffer* GetTargetOffer();
        unsigned int GetTargetPlayerID();
        void SetAccepted(bool);
        void SetMoneyOffered(unsigned long);
        void SetSourcePlayerID(unsigned int);
        void SetTargetOffer(CPlayerTradeOffer*);
        void SetTargetPlayerID(unsigned int);

    public:
        unsigned char data[OBJECT_DATA_SIZE];
};

class COMMON_DEC CRemotePhysicsSimulation
{
    public:
        CRemotePhysicsSimulation(const CRemotePhysicsSimulation&);
        CRemotePhysicsSimulation();
        virtual ~CRemotePhysicsSimulation();
        CRemotePhysicsSimulation& operator=(const CRemotePhysicsSimulation&);
        double CalcPositionError(const FLHookCore::Vector&);
        bool CheckForSync(const FLHookCore::Vector&, const FLHookCore::Vector&, const FLHookCore::Quaternion&);
        void Doit(double);
        FLHookCore::Vector GetLatestUpdate();
        FLHookCore::Vector GetSample(int);
        unsigned long GetSampleCount();
        double GetSimulationTime();
        virtual void RemoteUpdate(const FLHookCore::Vector&, const FLHookCore::Quaternion&, double);
        void Reset();
        void SetLogging(bool);
        void tracef(const char*, ...);

    public:
        unsigned char data[OBJECT_DATA_SIZE];
};

struct COMMON_DEC CharPlaceInfo
{
        CharPlaceInfo();
        ~CharPlaceInfo();
        void clear();
        void destroy();
        bool is_named(const char*) const;

    public:
        unsigned char data[OBJECT_DATA_SIZE];
};

class COMMON_DEC CharacterProperties
{
    public:
        CharacterProperties();
        ~CharacterProperties();
        CharacterProperties& operator=(const CharacterProperties&);
        void destroy();
        unsigned long get_key() const;
        void init(const struct CharacterDescription&);
        void marshal(MarshalBuffer*) const;
        void unmarshal(MarshalBuffer*);

    public:
        unsigned char data[OBJECT_DATA_SIZE];
};

class COMMON_DEC ClipNode
{
    public:
        ClipNode(const struct tagRECT&);
        ClipNode(const ClipNode&);
        ClipNode();
        virtual ~ClipNode();
        ClipNode& operator=(const ClipNode&);
        virtual RDLNode* Clone() const;
        virtual void Execute(TextRenderContext&, bool);
        virtual void GetElementPos(int, TextRenderContext&, int&) const;
        virtual void GetElementSize(int&) const;
        virtual void GetVisualSize(const TextRenderContext&, struct VisualSize&) const;
        virtual bool SplitAtSize(const TextRenderContext&, int, unsigned int, RDLNode*&, RDLNode*&) const;
        virtual void Update(float);
        const struct tagRECT& get_rect();
        void set_rect(const struct tagRECT&);

        virtual operator ClipNode*();
        virtual operator const ClipNode*() const;

    public:
        unsigned char data[OBJECT_DATA_SIZE];
};

namespace Collision
{
    COMMON_DEC float CalcCollisionDamage(unsigned int, const FLHookCore::Vector&, const FLHookCore::Vector&);
    COMMON_DEC float CalcCollisionDamage(float, float, float);
    COMMON_DEC void Free();
    COMMON_DEC float GetImpactDamageFromType(unsigned int);
    COMMON_DEC bool Load(INI_Reader&);
}; // namespace Collision

struct COMMON_DEC CommReferrable
{
        CommReferrable(const CommReferrable&);
        CommReferrable();
        CommReferrable& operator=(const CommReferrable&);
        virtual const FLHookCore::TString<64>& GetMsgIdPrefix() const;
        virtual bool HasVoiceInfo() const;
        virtual bool read_comm_ini_data(INI_Reader&);

    public:
        unsigned char data[OBJECT_DATA_SIZE];
};

class COMMON_DEC CostumeDescriptions
{
    public:
        CostumeDescriptions(const CostumeDescriptions&);
        CostumeDescriptions();
        ~CostumeDescriptions();
        CostumeDescriptions& operator=(const CostumeDescriptions&);
        const struct accessory* find_accessory(unsigned long) const;
        const accessory* find_accessory(const char*) const;
        unsigned long find_accessory_id(const char*) const;
        const struct bodypart* find_bodypart(int, unsigned long) const;
        const bodypart* find_bodypart(int, const char*) const;
        const struct costume* find_costume(unsigned long) const;
        const costume* find_costume(const char*) const;
        unsigned long find_costume_id(const char*) const;
        unsigned long find_part_id(int, const char*) const;
        void get_costume(int, struct Costume&) const;
        void get_costume(const char*, Costume&) const;
        int get_costume_gender(const Costume&) const;
        int get_costume_gender(unsigned long) const;
        const char* get_part_mesh(int, unsigned long) const;
        const char* get_part_name(int, unsigned long) const;
        void load_bodyparts(const char*);
        void load_costumes(const char*);

    private:
        void load_accessory(INI_Reader*);
        void load_bodypart(int, int, class DetailSwitchTable*, INI_Reader*);
        void warn(INI_Reader*);

    public:
        unsigned char data[OBJECT_DATA_SIZE];
};

struct COMMON_DEC CostumeHint
{
        CostumeHint(const CostumeHint&);
        CostumeHint();
        virtual ~CostumeHint();
        CostumeHint& operator=(const CostumeHint&);
        virtual void CleanUp(unsigned char*);
        // virtual unsigned int Serialize(unsigned char**);
        virtual void UnSerialize(unsigned char*, unsigned int);

    public:
        unsigned char data[OBJECT_DATA_SIZE];
};

class COMMON_DEC Csys
{
    public:
        Csys();
        Csys& operator=(const Csys&);
        Csys get_inverse() const;
        FLHookCore::Transform get_transform() const;
        void init(const FLHookCore::Vector&, const FLHookCore::Matrix&);
        void set_identity();
        void set_transform(const FLHookCore::Transform&);
        Csys trans_from_frame(const Csys&) const;
        FLHookCore::Matrix trans_from_frame(const FLHookCore::Matrix&) const;
        FLHookCore::Vector trans_from_frame(const FLHookCore::Vector&) const;
        Csys trans_to_frame(const Csys&) const;
        FLHookCore::Matrix trans_to_frame(const FLHookCore::Matrix&) const;
        FLHookCore::Vector trans_to_frame(const FLHookCore::Vector&) const;

    public:
        unsigned char data[OBJECT_DATA_SIZE];
};

Csys operator*(const Csys&, const Csys&);

namespace DataConfig
{
    COMMON_DEC void shutdown();
    COMMON_DEC int startup(const char*, Archetype::IClObjFactory*, struct ProgressCB*);
}; // namespace DataConfig

class COMMON_DEC DetailSwitchTable
{
    public:
        DetailSwitchTable(const DetailSwitchTable&);
        DetailSwitchTable();
        ~DetailSwitchTable();
        DetailSwitchTable& operator=(const DetailSwitchTable&);
        float adjust_distance(float, float, float) const;
        float get_switch_distance(float) const;
        void read_from_ini(INI_Reader*);

    private:
        void add_table_entry(float, float);

    public:
        unsigned char data[OBJECT_DATA_SIZE];
};

class COMMON_DEC TextRenderContext
{
    public:
        class Image;
        struct FontDesc;

        TextRenderContext(const TextRenderContext&);
        TextRenderContext();
        virtual ~TextRenderContext();
        TextRenderContext& operator=(const TextRenderContext&);
        void clear_default_attributes();
        const struct TextRenderAttributes& get_current_attributes();
        const TextRenderAttributes& get_default_attributes();
        int get_origin_h();
        int get_origin_v();
        int get_pos_h();
        int get_pos_v();
        void pop_default_attributes();
        void pop_state();
        void push_default_attributes();
        void push_state();
        void reset_to_default();
        void set_current_attributes(const TextRenderAttributes&);
        void set_default_attributes(const TextRenderAttributes&);
        void set_origin(int, int);
        void set_origin_h(int);
        void set_origin_v(int);
        void set_pos(int, int);
        void set_pos_h(int);
        void set_pos_v(int);

    private:
        void get_state(struct State&);
        void set_state(const State&);

    public:
        unsigned char data[OBJECT_DATA_SIZE];
};

class COMMON_DEC DeviceTRC
{
    public:
        DeviceTRC(const DeviceTRC&);
        DeviceTRC(struct HDC__*);
        DeviceTRC();
        virtual ~DeviceTRC();
        DeviceTRC& operator=(const DeviceTRC&);
        void bind_to_dc(struct HDC__*);
        virtual TextRenderContext::Image* create_image(const char* const);
        virtual void destroy_image(TextRenderContext::Image*);
        virtual void execute_image(const TextRenderContext::Image*, bool);
        virtual void execute_text(const unsigned short*, bool, int);
        virtual int get_cell_height() const;
        virtual int get_cell_width() const;
        virtual void get_clip_rect(struct tagRECT&);
        virtual void get_font_metrics(int&, int&) const;
        virtual void get_text_fit(const unsigned short*, int, int&, int*, struct VisualSize&, int) const;
        virtual void get_text_visual_size(const unsigned short*, struct VisualSize&, int) const;
        static void release_font(int);
        virtual void set_clip_rect(const struct tagRECT&);
        static void set_drop_shadow_offset(int, int);
        static void set_image_root(const char*);
        static void static_set_font(int, const TextRenderContext::FontDesc&, float);

    private:
        static int dropShadowX;
        static int dropShadowY;
        static class WinFont* font;

    public:
        unsigned char data[OBJECT_DATA_SIZE];
};

namespace EngineEquipConsts
{
    COMMON_DEC float CRUISE_ACCEL_TIME;
    COMMON_DEC float CRUISE_ATTEN_MOD_RANGE;
    COMMON_DEC float CRUISE_DISRUPT_TIME;
    COMMON_DEC float CRUISE_DRAG;
    COMMON_DEC float CRUISE_STEADY_TIME;
    COMMON_DEC float CRUISING_SPEED;
    COMMON_DEC float DELTA_CRUISE_ATTEN_MOD_STEADY;
    COMMON_DEC float DELTA_THROTTLE_ATTEN_MOD_CHANGING;
    COMMON_DEC float DELTA_THROTTLE_ATTEN_MOD_STEADY;
    COMMON_DEC float MAX_DELTA_FX_THROTTLE;
    COMMON_DEC float MAX_ENGINE_FX_THROTTLE;
    COMMON_DEC float THROTTLE_ATTEN_MOD_RANGE;
    COMMON_DEC float THROTTLE_STEADY_TIME;
}; // namespace EngineEquipConsts

#pragma pack(push, 1)
struct SetEquipmentItem
{
        ushort count;
        float health;
        uint archId;
        ushort id;
        bool mounted;
        bool mission;
        ushort hardPointLen;
};
#pragma pack(pop)

struct FlPacketSetEquipment
{
        ushort count;
        byte items[1];
};

namespace ErrorHandler
{
    enum SeverityLevel
    {
    };
    COMMON_DEC void activate(const char*, int (*)(const char*, const char*, bool));
    COMMON_DEC void deactivate();
    COMMON_DEC bool is_log_enabled(int);
    COMMON_DEC void log_comment(int, const char*, ...);
    COMMON_DEC void log_disable(int);
    COMMON_DEC void log_enable(int);
    COMMON_DEC void log_last_error(const char*, int, SeverityLevel, char*, unsigned long);
    COMMON_DEC void* new_log(const char*, int, int, bool, bool);
}; // namespace ErrorHandler

struct COMMON_DEC ExhaustNozzleInfo
{
        ExhaustNozzleInfo();
        ExhaustNozzleInfo& operator=(const ExhaustNozzleInfo&);
        bool GetHardpointOffset_NS(FLHookCore::Transform&) const;

    public:
        unsigned char data[OBJECT_DATA_SIZE];
};

class COMMON_DEC File
{
    public:
        File();
        ~File();
        File& operator=(const File&);
        void close();
        int eof();
        void get_info();
        int get_length();
        const char* get_name() const;
        bool is_open();
        bool open(const char*);
        int read(void*, int);
        int read(void*, int, int);
        int read_line(char*, int);
        int seek(int);
        void set_name(const char*);
        int set_offset(int);
        int tell() const;

    public:
        unsigned char data[OBJECT_DATA_SIZE];
};

struct COMMON_DEC FileMap
{
        FileMap(const FileMap&);
        FileMap();
        ~FileMap();
        FileMap& operator=(const FileMap&);
        void close();
        bool eof() const;
        unsigned int get_file_length() const;
        const char* get_file_name() const;
        void handoff_to(FileMap&);
        bool open(const char*);
        bool open_memory(const void*, unsigned int);
        unsigned int read(void*, unsigned int);
        bool read_ptr(struct BINI_Block*&);
        bool read_ptr(struct BINI_Header*&);
        bool read_ptr(struct BINI_Value*&);
        void* request_pointer(unsigned int&);
        void seek(unsigned int);
        unsigned int tell() const;

    public:
        unsigned char data[OBJECT_DATA_SIZE];
};

class COMMON_DEC HardpointSummary
{
    public:
        HardpointSummary(const HardpointSummary&);
        HardpointSummary();
        virtual ~HardpointSummary();
        HardpointSummary& operator=(const HardpointSummary&);
        int analyze_instance(long);
        void clear();
        void destroy();
        void expire_instance();
        int find_name(const char*) const;
        long find_name_instance(const char*) const;
        int get_count() const;
        const HardpointInfo& get_info(int) const;
        const HardpointInfo* get_info_by_name(const char*) const;
        long get_instance(int) const;
        const char* get_name(int) const;

    private:
        void count_hardpoints(long);
        static void count_hardpoints_callback(long, void*);
        void fill_hardpoints(long);
        static void fill_hardpoints_callback(long, void*);
        static void hardpoint_callback1(const char*, void*);
        static void hardpoint_callback2(const char*, void*);

    public:
        unsigned char data[OBJECT_DATA_SIZE];
};

struct COMMON_DEC Heap
{
        Heap(unsigned int, int);
        void Free(void*);
        void* Malloc();
        void Shrink();

    public:
        unsigned char data[OBJECT_DATA_SIZE];
};

namespace Hierarchy
{
    COMMON_DEC int GetDepth(long, long);
};

struct COMMON_DEC IAction
{
        IAction(const IAction&);
        IAction();
        virtual ~IAction();
        IAction& operator=(const IAction&);
        virtual const char* get_id() const;

        static void* operator new(unsigned int);
        static void operator delete(void*);

        unsigned char data[OBJECT_DATA_SIZE];
};

struct COMMON_DEC IDirectiveInfo
{
        bool init; // ? seems to be 1 after first time auto pilot takes over
        void* vUnknown1;
        pub::AI::OpType op;
};

// Size: 460 bytes
// Constructor e.g. sub_62D2220
// Hex numbers behind dunno variables or in a comment indicate hex offset
class COMMON_DEC IBehaviorManager
{
    public:
        enum IBehaviorCameraMode
        {
            A,
            B,
            C,
            D,
            E
        };

        enum class CancelRequestType
        {
        };
        enum class EvaluateResult
        {
        };

        bool allow_head_tracking();
        bool cancel_behavior(CancelRequestType);
        bool enable_all_maneuvers();
        bool enable_maneuver(int, bool);
        EvaluateResult external_player_evaluate(int);
        bool get_camera_level_status();
        float get_closest_trailing_ship() const;
        const IDirectiveInfo* get_current_directive();
        const IObjRW* get_debugger_target() const;
        bool get_docking_port(const IObjRW*&, int&);
        unsigned int get_parent_id();
        void get_personality(pub::AI::Personality&);
        pub::AI::ScanResponse get_scan_response(unsigned int);
        const FLHookCore::Vector get_ship_up_direction();
        const IStateGraph* get_state_graph();
        class SystemManager* get_sys();
        bool get_user_turning_input_state();
        bool lock_maneuvers(bool);
        void refresh_state_graph();
        void reset_current_behavior_direction();
        void set_camera_mode(IBehaviorCameraMode);
        void set_content_callback(pub::AI::ContentCallback*);
        bool set_current_directive(const IDirectiveInfo&, const pub::AI::BaseOp*);
        void set_directive_callback(pub::AI::DirectiveCallback*);
        pub::AI::OP_RTYPE set_directive_priority(pub::AI::DirectivePriority);
        void set_personality(const pub::AI::Personality&);
        void set_ship_up_direction(const FLHookCore::Vector&);
        void set_state_graph(int, bool);
        void set_turn_sensitivity(float);
        void set_user_turning_input_state(bool);
        void submit_camera_up(const FLHookCore::Vector&);
        void update_current_behavior_afterburner(bool);
        void update_current_behavior_auto_avoidance(bool);
        void update_current_behavior_auto_level(bool);
        void update_current_behavior_brake_reverse(bool);
        void update_current_behavior_cruise(bool);
        void update_current_behavior_direction(const FLHookCore::Vector&);
        void update_current_behavior_engage_engine(bool);
        void update_current_behavior_slide_strafe_burst(StrafeDir);
        void update_current_behavior_throttle(float);
        void update_level_camera(bool);

    public:
        int* vft;                        // 0x00
        IStateGraph* stateGraphInternal; // 0x04
        void* pDunno_0x08;
        struct PathfindManager* pathfindManager; // 0x0C
        int iDunnos_0x10[42];
        int iEnabledManeuversFlag;     // 0xB8 - 0 = all enabled
        bool bLockManeuvers;           // 0xBC
        int iCurrentBehaviourIndex;    // 0xC0 - -1 when no behaviour, otherwise index of behaviourArray
        IDirectiveInfo* directiveInfo; // 0xC4
        int iDirectivePriority;        // 0xC8
        int iDunno_0xCC;
        float fDunno_0xD0;
        float fDunno_0xD4;
        byte bDunno54_0xD8;
        float fDunno55_0xDC;
        float fDunno56_0xE0;
        float fDunno57_0xE4;
        int iDunnos58_0xE8[2];
        BaseWatcher baseWatcher; // 0xF0
        byte bDunno62_0xF8;
        bool bCameraLevelStatusFlag;                       // 0xF9
        pub::AI::DirectiveCallback* directiveCallbacks[5]; // 0xFC
        pub::AI::ContentCallback* contentCallback;         // 0x110
        int iDunnos_0x114[7];
        bool bDunno_0x130;
        FLHookCore::Vector shipUpDirection;   // 0x134
        FLHookCore::Vector cameraUpDirection; // 0x140
        int iDunno_0x14C;
        bool bUserTurningInputState;    // 0x150
        IBehaviorCameraMode cameraMode; // 0x154
        byte bDunno_0x158;
        void* pDunno_0x15C;
        int iDunnos_0x160;
        float fTurnSensitivity; // 0x164
        byte bDunno_0x168;
        byte bDunno_0x169;
        int iDunno_0x16C;
        byte bDunno_0x170;
        struct Behavior* behaviourArray[21]; // 0x174 - index 7 seems to be docking
        byte bDunno_0x1C8;
};

struct COMMON_DEC ICRSplineSegment
{
        ICRSplineSegment();
        ICRSplineSegment& operator=(const ICRSplineSegment&);
        void calculate_arclength();
        FLHookCore::Vector calculate_spline_tangent(float);
        FLHookCore::Vector calculate_spline_vector(float);
        float get_spline_length();
        float get_t_from_point(const FLHookCore::Vector&, float, float);

    public:
        unsigned char data[OBJECT_DATA_SIZE];
};

class COMMON_DEC ImageNode
{
    public:
        ImageNode(const ImageNode&);
        ImageNode(const TextRenderContext::Image*);
        ImageNode();
        virtual ~ImageNode();
        ImageNode& operator=(const ImageNode&);
        virtual RDLNode* Clone() const;
        virtual void Execute(TextRenderContext&, bool);
        virtual void GetElementPos(int, TextRenderContext&, int&) const;
        virtual void GetElementSize(int&) const;
        virtual void GetVisualSize(const TextRenderContext&, struct VisualSize&) const;
        virtual bool SplitAtSize(const TextRenderContext&, int, unsigned int, RDLNode*&, RDLNode*&) const;
        virtual void Update(float);
        const TextRenderContext::Image* get_image();
        void set_image(const TextRenderContext::Image*);

        virtual operator ImageNode*();
        virtual operator const ImageNode*() const;

    public:
        unsigned char data[OBJECT_DATA_SIZE];
};

namespace LaunchActionVars
{
    //@@@TODO	COMMON_DEC  float const  launch_coast_time;
    //@@@TODO	COMMON_DEC  float const  launch_decel_time;
};

struct COMMON_DEC LineParser32
{
        LineParser32();
        LineParser32& operator=(const LineParser32&);
        void clear();
        unsigned int fetch_string(char*, unsigned int);
        int find_char(char) const;
        char get_char() const;
        unsigned int read_string(char*, const char*);
        unsigned int read_terminator2(char*, char, char);
        unsigned int read_terminator(char*, char);
        void set(const char*, unsigned int);
        bool skip_char(char);
        void skip_white();
        bool terminate_line(char);
        bool whitespace(char) const;

    public:
        unsigned char data[OBJECT_DATA_SIZE];
};

namespace Loadout
{
    struct COMMON_DEC Map
    {
            Map(const Map&);
            Map();
            ~Map();
            Map& operator=(const Map&);

        public:
            uint id;
            char cdunno; // -1
            EquipDesc* first;
            EquipDesc* last;
            EquipDesc* end;
    };

    COMMON_DEC void Free();
    COMMON_DEC const Map* Get(unsigned int);
    COMMON_DEC unsigned int GetID(const char*);
    COMMON_DEC int Load(const char*, bool);
    COMMON_DEC bool ReadCargoLine(INI_Reader&, EquipDesc&);
    COMMON_DEC bool ReadEquipLine(INI_Reader&, EquipDesc&);
}; // namespace Loadout

//
// Defined in FLCoreDALib.h
//-------------------------
// class COMMON_DEC MD5Hash
//{
// public:
//	MD5Hash(class MD5Hash const &);
//	class MD5Hash & operator=(class MD5Hash const &);
//	unsigned char * GetStatePtr();

// public:
//	unsigned char data[OBJECT_DATA_SIZE];
// };

struct COMMON_DEC MPCritSec
{
        MPCritSec();
        ~MPCritSec();
        MPCritSec& operator=(const MPCritSec&);
        void lock();
        void unlock();

    public:
        unsigned char data[OBJECT_DATA_SIZE];
};

struct COMMON_DEC MarketGoodInfo
{
        MarketGoodInfo();
        MarketGoodInfo& operator=(const MarketGoodInfo&);

    public:
        uint goodId;
        float price;
        int min;
        int stock;
        TransactionType transType;
        float rank;
        float rep;
        int quantity;
        float scale;
};

class COMMON_DEC MarshalBuffer
{
    public:
        MarshalBuffer();
        MarshalBuffer& operator=(const MarshalBuffer&);
        void clear();
        Costume get_Costume();
        EquipDescList get_EquipDescList();
        unsigned int get_FL_ID();
        FmtStr get_FmtStr();
        GoodDescList get_GoodDescList();
        unsigned short get_U16();
        unsigned long get_U32();
        unsigned char get_U8();
        bool get_bool();
        const unsigned char* get_buffer() const;
        int get_buffer_size() const;
        float get_float();
        void get_image(unsigned char*);
        void get_image(unsigned short*);
        void get_image(int*);
        void get_image(unsigned long*);
        void get_image(float*);
        int get_int();
        int get_num_written() const;
        char* get_string();
        void get_string_to_buffer(char*, int);
        void get_void(void*, int);
        unsigned short* get_wstring();
        bool is_empty() const;
        void put_Costume(const Costume&);
        void put_EquipDescList(const EquipDescList&);
        void put_FL_ID(unsigned int);
        void put_FmtStr(const FmtStr&);
        void put_GoodDescList(const GoodDescList&);
        void put_U16(unsigned short);
        void put_U32(unsigned long);
        void put_U8(unsigned char);
        void put_bool(bool);
        void put_float(float);
        void put_image(const unsigned char&);
        void put_image(const unsigned short&);
        void put_image(const int&);
        void put_image(const unsigned long&);
        void put_image(const float&);
        void put_int(int);
        void put_string(const char*);
        void put_void(const void*, int);
        void put_wstring(const unsigned short*);
        void skip_over(int);
        void use_default();
        void use_read_buffer(const unsigned char*, int);
        void use_write_buffer(unsigned char*, int);

    public:
        unsigned char data[OBJECT_DATA_SIZE];
};

/* struct COMMON_DEC MessageHandler
{
    MessageHandler(class IMessageRouter *);
    virtual ~MessageHandler();
    unsigned int get_id()const ;

protected:
    virtual void send_delayed_message(class StateMachineMessage *,float,unsigned int);
    virtual void send_delayed_message_to_me(class StateMachineMessage *,float,int);
    virtual void send_immediate_message(class StateMachineMessage *,unsigned int);

public:
    unsigned char data[OBJECT_DATA_SIZE];
};*/

class COMMON_DEC MissionVendorAcceptance
{
    public:
        MissionVendorAcceptance(const MissionVendorAcceptance&);
        MissionVendorAcceptance();
        ~MissionVendorAcceptance();
        MissionVendorAcceptance& operator=(const MissionVendorAcceptance&);
        void clear();
        void destroy();
        unsigned long get_key() const;
        void marshal(MarshalBuffer*) const;
        void unmarshal(MarshalBuffer*);

    public:
        unsigned char data[OBJECT_DATA_SIZE];
};

class COMMON_DEC MissionVendorProperties
{
    public:
        MissionVendorProperties(const MissionVendorProperties&);
        MissionVendorProperties();
        ~MissionVendorProperties();
        MissionVendorProperties& operator=(const MissionVendorProperties&);
        void clear();
        void destroy();
        const char* get_icon_texture() const;
        unsigned long get_key() const;
        void init(const struct MissionVendorOfferDescription&);
        void marshal(MarshalBuffer*) const;
        void unmarshal(MarshalBuffer*);

    public:
        unsigned char data[OBJECT_DATA_SIZE];
};

class COMMON_DEC NewsBroadcastProperties
{
    public:
        NewsBroadcastProperties(const NewsBroadcastProperties&);
        NewsBroadcastProperties();
        ~NewsBroadcastProperties();
        NewsBroadcastProperties& operator=(const NewsBroadcastProperties&);
        void clear();
        void destroy();
        unsigned long get_key() const;
        const char* get_logo_texture() const;
        void init(const struct NewsBroadcastDescription&);
        void marshal(MarshalBuffer*) const;
        void unmarshal(MarshalBuffer*);

    public:
        unsigned char data[OBJECT_DATA_SIZE];
};

// Size: 1408 bytes
// Constructor e.g. sub_62DB3B0
// Hex numbers behind dunno variables or in a comment indicate hex offset
struct COMMON_DEC PathfindManager
{
        void clear_user_zone();
        bool get_user_zone(struct UserZone&);
        void submit_user_zone(const UserZone&);

    public:
        // size: 64 bytes
        struct UserZone
        {
                int iZoneType;                // 0 = position, 1 = cuboid 2 = spaceobj
                int iDunno_0x04;              // same as iDunno_0x10 from SetZoneBehaviorParams if iDunno_0x10 was 0 or 1
                FLHookCore::Vector vPosition;             // only used for iZoneType 0
                float fRadius;                // not used for iZoneType 1
                FLHookCore::Matrix mDunno_0x18;           // pub::AI::SubmitState sets this to identiy when SetZoneBehaviorParams is used and iZoneType is 1
                FLHookCore::Vector vCuboidCenter;         // only used for iZoneType 1
                FLHookCore::Vector vCuboidHalfEdgeLength; // only used for iZoneType 1
                int iSpaceObjId;              // only used for iZoneType 2
        };
        int iDunno_0x00;
        int iDunno_0x04;
        bool bHasUserZone; // 0x08
        UserZone userZone; // 0x0C
        int iDunnos_0x64[2];
        int iDunnoStruct_0x6C[8]; // struct size 32 bytes
        File* fileDunno_0x8C;
        int iDunnos_0x90[62];
        File* fileDunno_0x188;
        int iDunnos_0x188[7];
        float fDunno_0x1A8;
        int iDunno_0x1AC;
        byte bDunno_0x1B0;
        int iDunnos_0x1B4[3];
        IBehaviorManager* behaviorManager; // 0x1C0 - usually the one this one belongs to
        int iDunno_0x1C4;
        BaseWatcher baseWatcher_0x1C8;
        int iDunnos_0x1D0[4];
        float fDunno_0x1E0;
        float fDunno_0x1E4;
        float fDunno_0x1E8;
        float fdunno_0x1EC;
        int iDunno_0x1F0;
        float fDunno_0x1F4;
        float fDunno_0x1F8;
        float fDunno_0x1FC;
        int iDunnos_0x1F8[3];
        float fDunno_0x20C;
        float fDunno_0x210;
        int iDunno_0x214;
        BaseWatcher baseWatcher_0x218;
        int iDunnos_0x220[6];
        byte bDunno_0x238;
        float fDunno_0x23C;
        int iDunno_0x240;
        byte bDunno_0x244;
        byte bDunno_0x245;
        int iDunno_0x248;
        byte bDunno_0x24C;
        int iDunno_0x250;
        byte bDunno_0x254;
        int iDunno_0x258[3];
        byte bDunno_0x260;
        int iDunnos_0x264[198];
};

class COMMON_DEC PetalInterfaceDatabase
{
    public:
        PetalInterfaceDatabase(const PetalInterfaceDatabase&);
        PetalInterfaceDatabase();
        ~PetalInterfaceDatabase();
        PetalInterfaceDatabase& operator=(const PetalInterfaceDatabase&);
        void destroy();
        const struct petal_record* find_record(int, unsigned long) const;
        static int get_category(const char*);
        void load_from_ini(const char*);

    private:
        void add_record(int, const char*, const char*, char**, int);

    public:
        unsigned char data[OBJECT_DATA_SIZE];
};

/*class COMMON_DEC TextNode
{
    char Buf[1024];
public:
    TextNode(unsigned short const *,int);
    TextNode();
};*/

/*class COMMON_DEC StyleNode
{
public:
    StyleNode(unsigned short);

public:
    unsigned char data[1024];
};*/

/*class COMMON_DEC ParagraphNode
{
public:
    ParagraphNode();
};*/

/*class COMMON_DEC RDLReNode
{
public:
    RDLReNode(class RDLReNode const &);

public:
    unsigned char data[1024];
};*/

/*class COMMON_DEC JustifyNode
{
public:
    JustifyNode(enum TextJustify);

public:
    unsigned char data[1024];
};*/

struct COMMON_DEC Rect
{
        Rect(int, int, int, int);
        Rect();
        Rect& operator=(const Rect&);
        int area() const;
        int bottommost() const;
        void clear();
        void get_center(int*, int*) const;
        int height() const;
        void init(int, int, int, int);
        void init_from_ltrb(int, int, int, int);
        int leftmost() const;
        bool nonnull() const;
        bool null() const;
        bool point_is_inside(int, int) const;
        int rightmost() const;
        int topmost() const;
        int width() const;

    public:
        unsigned char data[OBJECT_DATA_SIZE];
};

class COMMON_DEC RenderDisplayList
{
    public:
        RenderDisplayList(const RenderDisplayList&);
        RenderDisplayList();
        ~RenderDisplayList();
        RenderDisplayList& operator=(const RenderDisplayList&);
        void execute(TextRenderContext&, bool);
        void get_dimensions(TextRenderContext&, float&, float&, float&);
        int get_element_count() const;
        bool get_element_pos(TextRenderContext&, int, float&, float&, float&);
        void optimize();
        void update(float);

    public:
        unsigned char data[OBJECT_DATA_SIZE];
};

; // namespace Reputation

struct COMMON_DEC RoomButtonInfo
{
        RoomButtonInfo();
        ~RoomButtonInfo();
        void clear();
        void destroy();

    public:
        unsigned char data[OBJECT_DATA_SIZE];
};

struct COMMON_DEC RoomCameraInfo
{
        RoomCameraInfo();
        ~RoomCameraInfo();
        RoomCameraInfo& operator=(const RoomCameraInfo&);
        void clear();
        void destroy();

    public:
        unsigned char data[OBJECT_DATA_SIZE];
};

struct Camera
{
        char* vtable; // vftable
        FLHookCore::Matrix rotation;
        FLHookCore::Vector pos;
        bool bRenderNewCam; // 14
        FLHookCore::Matrix rotation2;
        FLHookCore::Vector pos2;
        float halfRes[2];
        float halfRes2[2];
        float fovXHud;
        float fovYHud;
        float cosFovX;
        float alwaysZeroFovX;
        float sinFovX;
        float alwaysZeroFovY;
        float cosFovY;
        float sinFovY;
        float fovX;
        float fovY;
        float aspect;
        float zNear;
        float zFar;
        uint screenExtents[4];
        uint dunno;
        Watchable* watchable; // 49
        uint dunno1[6];
        FLHookCore::Vector dunno2;
        uint dunno3[6];
        FLHookCore::Vector cameraOffset;
};

class COMMON_DEC RoomData
{
    public:
        RoomData(const RoomData&);
        RoomData();
        ~RoomData();
        RoomData& operator=(const RoomData&);
        void clear();
        void destroy();
        void enumerate_CharacterPlacement_ini(void (*)(int, INI_Reader*, void*), void*) const;
        const RoomCameraInfo* find_camera(const char*, const char*) const;
        const RoomCameraInfo* find_camera_generic(const char*, const char*) const;
        const struct SetpointInfo* find_setpoint(const char*, const char*) const;
        const SetpointInfo* find_setpoint_generic(const char*, const char*) const;
        void fixup(long);
        const RoomCameraInfo* get_camera_info() const;
        void init(unsigned int, unsigned int, const char*, const char*);
        void load();
        void unfixup();
        void unload();

    private:
        void add_set_script_Camera(unsigned long, const Csys&, const char*, const struct ThornCameraProperties*);
        void add_set_script_Prop(const char*, const char*, int, const Csys&, bool, bool, bool, bool, unsigned char, signed char, unsigned long, const char*,
                                 unsigned long, bool);
        void add_set_script_Setpoint(unsigned long, const Csys&, const char*, const struct ThornEntity*);
        void add_set_script_light(unsigned long, const Csys&, const struct ThornLightProperties*, unsigned char);
        const SetpointInfo* apply_setpoint(const char*, char**, Csys*, const char*);
        CharPlaceInfo* find_CharacterPlacement(const char*);
        void fixup_FlashLight_list(long, const HardpointSummary*);
        static void make_setpoint_name_generic(const char*, char*);
        void read_Camera_block(INI_Reader*);
        void read_CharacterPlacement_block(INI_Reader*);
        void read_FlashLightLine_block(INI_Reader*);
        void read_FlashLightSet_block(INI_Reader*);
        void read_ForSaleShipPlacement_block(INI_Reader*);
        void read_Hotspot_block(INI_Reader*);
        void read_PlayerShipPlacement_block(INI_Reader*);
        void read_RoomInfo_block(INI_Reader*);
        void read_Sound_block(INI_Reader*);
        void read_ambient_script(INI_Reader*);
        void read_from_ini(const char*);
        void read_set_script(const char*);
        void setup_Camera();
        void unfixup_FlashLight_list();
        void unsetup_Camera();
        void warn(INI_Reader*, bool);

    public:
        unsigned char data[OBJECT_DATA_SIZE];
};

struct COMMON_DEC RoomLightInfo
{
        RoomLightInfo();
        ~RoomLightInfo();
        RoomLightInfo& operator=(const RoomLightInfo&);
        void clear();
        void destroy();

    public:
        unsigned char data[OBJECT_DATA_SIZE];
};

struct COMMON_DEC RoomPropInfo
{
        RoomPropInfo();
        ~RoomPropInfo();
        RoomPropInfo& operator=(const RoomPropInfo&);
        void clear();
        void destroy();

    public:
        unsigned char data[OBJECT_DATA_SIZE];
};

namespace RtcSlider
{
    COMMON_DEC float get_default_fps_cap();
    COMMON_DEC float get_fps_cap();
    COMMON_DEC float get_slider();
    COMMON_DEC bool is_enabled(unsigned long);
    COMMON_DEC bool is_enabled(const char*);
    COMMON_DEC void load(const char*);
    COMMON_DEC void set_slider(float);
    COMMON_DEC bool validate_setting(const char*, const char*);
}; // namespace RtcSlider

struct COMMON_DEC SMControllerEvent
{
        SMControllerEvent(int, const void*);

    public:
        unsigned char data[OBJECT_DATA_SIZE];
};

struct COMMON_DEC SMEventData
{
        enum STATE_MACHINE_EVENT_TYPE
        {
        };

        SMEventData(STATE_MACHINE_EVENT_TYPE);
        virtual STATE_MACHINE_EVENT_TYPE get_event_type() const;
        bool is_sm_event() const;
        bool is_user_event() const;

    public:
        unsigned char data[OBJECT_DATA_SIZE];
};

struct COMMON_DEC SMMChangeState
{
        SMMChangeState(int);
        virtual class StateMachineMessage* clone() const;

    public:
        unsigned char data[OBJECT_DATA_SIZE];
};

struct COMMON_DEC SMMessage
{
        SMMessage(StateMachineMessage*);

    public:
        unsigned char data[OBJECT_DATA_SIZE];
};

struct COMMON_DEC ScanList
{
    public:
        ScanList(const ScanList&);
        ScanList();
        ~ScanList();
        ScanList& operator=(const ScanList&);
        bool add(IObjRW*);
        int add_in_range(const FLHookCore::Vector&, float, struct IObjDB*, unsigned int, struct Filter*);
        void remove(IObjRW*);
        void reset();

    public:
        uint vftable;
        BaseWatcher objectArray[256];
        uint currSize;
        uint maxSize;
};

class COMMON_DEC ScriptBehavior
{
    public:
        ScriptBehavior(const ScriptBehavior&);
        ScriptBehavior();
        ~ScriptBehavior();
        ScriptBehavior& operator=(const ScriptBehavior&);
        void clear();
        void destroy();
        unsigned long get_key() const;
        void init(const struct CharacterBehaviorDescription&);
        void marshal(MarshalBuffer*) const;
        void unmarshal(MarshalBuffer*);

    public:
        unsigned char data[OBJECT_DATA_SIZE];
};

struct COMMON_DEC SetpointInfo
{
        SetpointInfo(const SetpointInfo&);
        SetpointInfo();
        ~SetpointInfo();
        void clear();
        void destroy();

    public:
        unsigned char data[OBJECT_DATA_SIZE];
};

struct COMMON_DEC SetpointProperties
{
        SetpointProperties(const SetpointProperties&);
        SetpointProperties();
        ~SetpointProperties();
        SetpointProperties& operator=(const SetpointProperties&);
        void clear();
        const char* combine_to_name() const;
        void destroy();
        void extract_from_name(const char*);
        void set_segment(const char*);

    public:
        unsigned char data[OBJECT_DATA_SIZE];
};

namespace ShieldEquipConsts
{
    COMMON_DEC float HULL_DAMAGE_FACTOR;
};

struct COMMON_DEC ShipGunStats
{
        ShipGunStats();
        ShipGunStats& operator=(const ShipGunStats&);
        void clear();

    public:
        uint activeGunCount;
        float avgGunSpeed;
        float maxGunRange;
        uint dunno1;
        uint dunno2;
};

struct COMMON_DEC ShipPlaceInfo
{
        ShipPlaceInfo();
        ~ShipPlaceInfo();
        void clear();
        void destroy();

    public:
        unsigned char data[OBJECT_DATA_SIZE];
};

namespace SolarReps
{
    COMMON_DEC int FindSolarRep(const ID_String&);
};

class COMMON_DEC SphereIntruderChecker
{
    public:
        SphereIntruderChecker(const SphereIntruderChecker&);
        SphereIntruderChecker();
        ~SphereIntruderChecker();
        SphereIntruderChecker& operator=(const SphereIntruderChecker&);
        void check_sphere(unsigned int, const FLHookCore::Vector&, float, st6::list<CObject*, st6::allocator<CObject*>>&);

    protected:
        virtual void added(CObject*);
        virtual void deleted(CObject*);

    public:
        unsigned char data[OBJECT_DATA_SIZE];
};

struct COMMON_DEC StateMachine
{
        StateMachine();
        virtual ~StateMachine();
        int get_state() const;
        virtual void process(const SMEventData*);
        void reset();
        void start();

    protected:
        virtual void handle_state_change();
        void set_state(int);

    public:
        unsigned char data[OBJECT_DATA_SIZE];
};

class COMMON_DEC StateMachineGroup
{
    public:
        StateMachineGroup(class IMessageRouter*);
        virtual ~StateMachineGroup();
        virtual void add_state_machine(class StateMachineMessageHandler*);
        virtual void remove_state_machine(unsigned int);
        virtual void remove_state_machine(const StateMachineMessageHandler*);

    protected:
        virtual void process(const SMEventData*);
        void remove_dying_machines();

    public:
        unsigned char data[OBJECT_DATA_SIZE];
};

class COMMON_DEC StateMachineMessage
{
    public:
        StateMachineMessage(const StateMachineMessage&);
        StateMachineMessage(unsigned int);
        StateMachineMessage(float, unsigned int, unsigned int, unsigned int, int);
        StateMachineMessage();
        virtual ~StateMachineMessage();
        static unsigned int GenerateUniqueMessageType();
        virtual StateMachineMessage* clone() const;
        int get_delivery_state() const;
        float get_delivery_time() const;
        unsigned int get_message_type() const;
        unsigned int get_receiver() const;
        unsigned int get_sender() const;
        bool is_delivered() const;
        void set_delivered(bool);
        void set_delivery_options(float, unsigned int, unsigned int, int);
        void set_delivery_state(int);
        void set_delivery_time(float);
        void set_message_type(unsigned int);
        void set_receiver(unsigned int);
        void set_sender(unsigned int);

        static void* operator new(unsigned int);
        static void operator delete(void*);

    private:
        static unsigned int s_unique_message_type_generator;

    public:
        unsigned char data[OBJECT_DATA_SIZE];
};

class COMMON_DEC StateMachineMessageHandler
{
        enum SM_MESSAGE_SCOPE
        {
        };

    public:
        StateMachineMessageHandler(IMessageRouter*);
        virtual void receive_message(StateMachineMessage*);

    protected:
        void send_delayed_message_to_me(StateMachineMessage*, float, SM_MESSAGE_SCOPE, int);

    public:
        unsigned char data[OBJECT_DATA_SIZE];
};

class COMMON_DEC StyleCollection
{
        class Style
        {
            public:
                unsigned char data[OBJECT_DATA_SIZE];
        };

    public:
        StyleCollection& operator=(const StyleCollection&);
        static RenderDisplayList& get_style(unsigned short);
        static void remove_style(unsigned short);
        static void set_style(unsigned short, const TextRenderAttributes&);
        static void set_style(unsigned short, const RenderDisplayList&);

    protected:
        static st6::map<unsigned short, Style, st6::less<unsigned short>, st6::allocator<Style>> mStyles;

    public:
        unsigned char data[OBJECT_DATA_SIZE];
};
; // namespace SubObjectID

class COMMON_DEC TRANode
{
    public:
        TRANode(const TextRenderAttributes&, unsigned int, unsigned int);
        TRANode(const TRANode&);
        TRANode();
        virtual ~TRANode();
        TRANode& operator=(const TRANode&);
        virtual RDLNode* Clone() const;
        virtual void Execute(TextRenderContext&, bool);
        virtual void GetElementPos(int, TextRenderContext&, int&) const;
        virtual void GetElementSize(int&) const;
        virtual void GetVisualSize(const TextRenderContext&, struct VisualSize&) const;
        virtual bool SplitAtSize(const TextRenderContext&, int, unsigned int, RDLNode*&, RDLNode*&) const;
        virtual void Update(float);
        const TextRenderAttributes& get_attributes();
        unsigned int get_default_mask();
        unsigned int get_mask();
        void set_attributes(const TextRenderAttributes&, unsigned int);
        void set_default_mask(unsigned int);
        void set_mask(unsigned int);

        virtual operator TRANode*();
        virtual operator const TRANode*() const;

    public:
        unsigned char data[OBJECT_DATA_SIZE];
};

struct COMMON_DEC TargetManager
{
        int remove_forced_target(unsigned int);
        void set_player_enemy_clamp(int, int);
        int submit_forced_target(unsigned int);

    public:
        unsigned char data[OBJECT_DATA_SIZE];
};

struct COMMON_DEC TextFile32
{
        TextFile32(const TextFile32&);
        TextFile32();
        ~TextFile32();
        TextFile32& operator=(const TextFile32&);
        unsigned int get_line_num() const;
        bool read_line(LineParser32&);

    public:
        unsigned char data[OBJECT_DATA_SIZE];
};

struct COMMON_DEC ThrustManager
{
        void engage_cruise(bool);

    public:
        unsigned char data[OBJECT_DATA_SIZE];
};

namespace ThrusterEquipConsts
{
    COMMON_DEC ID_String EXTERIOR_SOUND_NAME;
    COMMON_DEC float INSIDE_CONE_ANGLE;
    COMMON_DEC ID_String INTERIOR_SOUND_NAME;
    COMMON_DEC float MAX_VOLUME_FORCE;
    COMMON_DEC float MIN_VOLUME_FORCE;
    COMMON_DEC float OUTSIDE_CONE_ANGLE;
    COMMON_DEC float OUTSIDE_CONE_ATTENUATION;
}; // namespace ThrusterEquipConsts

namespace Timing
{
    struct COMMON_DEC Delta
    {
            Delta();
            Delta& operator=(const Delta&);
            double calc_dt();
            void init();
            double read_dt();
            void start();
            void stop();
            void swap();

        public:
            unsigned char data[OBJECT_DATA_SIZE];
    };

    COMMON_DEC double GetGlobalTime();
    COMMON_DEC int GetMachineSpeed();
    COMMON_DEC void UpdateGlobalTime(double);
    COMMON_DEC void init();
    COMMON_DEC double read();
    COMMON_DEC int64 read_ticks();
    COMMON_DEC double seconds(const int64&);
}; // namespace Timing

enum class TractorFailureCode
{
};

class COMMON_DEC TractorArm
{
    public:
        enum class Mode
        {
        };

        TractorArm(const TractorArm&);
        TractorArm(CETractor*);
        ~TractorArm();
        TractorArm& operator=(const TractorArm&);
        TractorFailureCode GetErrorCode() const;
        Mode GetMode() const;
        CLoot* GetTarget() const;
        FLHookCore::Vector GetTipPos() const;
        bool IsOn() const;
        void SetTarget(CLoot*);
        void TurnOff();
        void Update(float);

    protected:
        static const float AcquireDelay;
        static const float GrabToleranceSquared;

    public:
        unsigned char data[OBJECT_DATA_SIZE];
};

class COMMON_DEC TradeResponseInfo
{
    public:
        TradeResponseInfo(const TradeResponseInfo&);
        TradeResponseInfo();
        ~TradeResponseInfo();
        TradeResponseInfo& operator=(const TradeResponseInfo&);
        void clear();
        void destroy();
        void marshal(MarshalBuffer*) const;
        void unmarshal(MarshalBuffer*);

    public:
        unsigned char data[OBJECT_DATA_SIZE];
};

namespace TurnHelper
{
    COMMON_DEC FLHookCore::Vector get_angular_throttle(const FLHookCore::Matrix&, const FLHookCore::Matrix&, float*);
};

struct COMMON_DEC accessory
{
        accessory(const accessory&);
        accessory();
        ~accessory();
        accessory& operator=(const accessory&);
        const char* get_accessory_hardpoint() const;
        const char* get_character_hardpoint() const;
        const st6::list<st6::string>& get_materials() const;
        const char* get_mesh() const;
        const char* get_name() const;
        unsigned long get_name_crc() const;
        void init(const char*, const char*, const char*, const char*, const st6::list<st6::string>&);

    public:
        unsigned char data[OBJECT_DATA_SIZE];
};

struct COMMON_DEC bodypart
{
        bodypart(const bodypart&);
        bodypart();
        ~bodypart();
        bodypart& operator=(const bodypart&);
        int get_gender() const;
        const char* get_mesh() const;
        const char* get_name() const;
        unsigned long get_name_crc() const;
        st6::list<st6::string>* get_petal_anims() const;
        DetailSwitchTable* get_switch_table() const;
        void init(const char*, const char*, int, st6::list<st6::string>*, DetailSwitchTable*);

    public:
        unsigned char data[OBJECT_DATA_SIZE];
};

struct COMMON_DEC option_spec
{
        option_spec& operator=(const option_spec&);

    public:
        unsigned char data[OBJECT_DATA_SIZE];
};

namespace Geometry
{
    struct Frustum;
    struct Sphere;
}; // namespace Geometry

struct COMMON_DEC FlashLightSetInfo
{
        FlashLightSetInfo();
        ~FlashLightSetInfo();
        FlashLightSetInfo& operator=(const FlashLightSetInfo&);
        void clear();
        void destroy();
        void fixup(long, const class HardpointSummary*, const RoomData*);
        void unfixup();

    private:
        void add_light_csys(const Csys&);

    public:
        unsigned char data[OBJECT_DATA_SIZE];
};

class COMMON_DEC BaseData
{
    public:
        BaseData(const BaseData&);
        BaseData();
        ~BaseData();
        BaseData& operator=(const BaseData&);
        unsigned int get_base_id() const;
        // const st6::list<class RoomData*>* get_const_room_data_list() const;
        // const st6::map<unsigned int, struct MarketGoodInfo, st6::less<unsigned int>, st6::allocator<MarketGoodInfo>>* get_market() const;
        // st6::list<RoomData*>* get_room_data_list();
        //  commented out since they'd fail on the account of them being defined as 'std' in the game binaries. Use the fields below directly instead.
        float get_price_variance() const;
        float get_ship_repair_cost() const;
        unsigned int get_start_location() const;
        void read_from_ini(const char*, unsigned int);
        void set_market_good(unsigned int, int, int, TransactionType, float, float, float);

    private:
        void read_Base_block(class INI_Reader*);
        void read_Room_block(INI_Reader*);

    public:
        uint dunno;
        float startRoom;
        float priceVariance;
        float shipRepairCost;
        st6::map<uint, MarketGoodInfo> marketMap;
        st6::list<RoomData*> roomData;
};

class COMMON_DEC BaseDataList
{
    public:
        BaseDataList(const BaseDataList&);
        BaseDataList();
        ~BaseDataList();
        BaseDataList& operator=(const BaseDataList&);
        BaseData* get_base_data(unsigned int) const;
        st6::list<BaseData*>* get_base_data_list();
        const st6::list<BaseData*>* get_const_base_data_list() const;
        RoomData* get_room_data(unsigned int) const;
        RoomData* get_unloaded_room_data(unsigned int) const;
        void load();
        void load_market_data(const char*);

    public:
        unsigned char data[OBJECT_DATA_SIZE];
};
