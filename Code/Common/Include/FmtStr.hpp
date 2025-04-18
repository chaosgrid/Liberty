#pragma once
#include <FLHookCore.h>

struct FmtStr
{
        struct COMMON_DEC Val
        {
                Val(const Val&);
                Val(unsigned short, void*, unsigned char);
                Val(const void*);
                Val(const void*, int&);
                ~Val();
                const Val& operator=(const Val&);
                bool operator==(const Val&) const;
                uint flatten(void*, unsigned int) const;
                uint get_flattened_size() const;

                static void* operator new(unsigned int);
                static void operator delete(void*);

            private:
                int InitFromVoid(const void*);

            public:
                uint dunno;
                uint dunno2;
                wchar_t dunno3;
                uchar dunno4;
        };

        FmtStr() : FmtStr(0, nullptr) {}
        COMMON_DEC FmtStr(const FmtStr&);
        COMMON_DEC FmtStr(unsigned int, const Val*);
        COMMON_DEC ~FmtStr();
        COMMON_DEC const FmtStr& operator=(const FmtStr&);
        COMMON_DEC bool operator==(const FmtStr&) const;
        COMMON_DEC void append(Val*);
        COMMON_DEC void append_base(const unsigned int&);
        COMMON_DEC void append_fmt_str(const FmtStr&);
        COMMON_DEC void append_good(const unsigned int&);
        COMMON_DEC void append_installation(int);
        COMMON_DEC void append_int(unsigned int);
        COMMON_DEC void append_loot(int);
        COMMON_DEC void append_nav_marker(const struct NavMarker&);
        COMMON_DEC void append_rep_group(const unsigned int&);
        COMMON_DEC void append_rep_instance(const int&);
        COMMON_DEC void append_spaceobj_id(const unsigned int&);
        COMMON_DEC void append_string(unsigned int);
        COMMON_DEC void append_system(const unsigned int&);
        COMMON_DEC int append_void(void*);
        COMMON_DEC void append_zone_id(const unsigned int&);
        COMMON_DEC void begin_mad_lib(unsigned int);
        COMMON_DEC void destroy();
        COMMON_DEC void end_mad_lib();
        COMMON_DEC int flatten(void*, unsigned int) const;
        COMMON_DEC int unflatten(void*, unsigned int);

        uint something;
        uint strid;        // resource containing text
        uchar tnav_marker; // counters for each type
        uchar tsystem;
        uchar tbase;
        uchar tstring;
        uchar tgood;
        uchar tunused;
        uchar tint;
        uchar trep_instance;
        uchar trep_group;
        uchar tzone_id;
        uchar tspace_obj_id;
        uchar tfmt_str;
        uchar tinstallation;
        uchar tloot;
};
