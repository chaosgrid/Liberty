#include "Deformable2-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65f9e00);

#define public_65f9e47 _public_65f9e47
#define public_65f9e60 _public_65f9e60
#define public_65f9e7c _public_65f9e7c
#define public_65f9ea8 _public_65f9ea8

PROC_DECLARE(0x65f9e00, internal_65f9e00, public_65f9e00);
extern "C" NAKED register_t __cdecl internal_65f9e00()
{
    __asm
    {
        fld dword ptr ss : [esp+4]
        fabs 
        fld dword ptr ss : [esp+8]
        fabs 
        fstp dword ptr ss : [esp+4]
        fcom dword ptr ss : [esp+4]
        fnstsw ax
        test ah, 0x41
        jne public_65f9e60
        fld dword ptr ss : [esp+4]
        fdiv st, st(1)
        fst dword ptr ds : [public_66033a4]
        fcomp qword ptr ds : [public_6601398]
        fnstsw ax
        test ah, 0x44
        jp public_65f9e47
        fld qword ptr ds : [public_6601398]
        fadd qword ptr ds : [public_6601320]
        fsqrt 
        fmulp 
        ret 8
        public_65f9e47 : nop
        fld dword ptr ds : [public_66033a4]
        fmul dword ptr ds : [public_66033a4]
        fadd qword ptr ds : [public_6601320]
        fsqrt 
        fmulp 
        ret 8
        public_65f9e60 : nop
        fld dword ptr ss : [esp+4]
        fcomp qword ptr ds : [public_6601398]
        fnstsw ax
        test ah, 0x44
        jp public_65f9e7c
        fstp st(0)
        fld qword ptr ds : [public_6601398]
        ret 8
        public_65f9e7c : nop
        fdiv dword ptr ss : [esp+4]
        fst dword ptr ds : [public_66033a4]
        fcomp qword ptr ds : [public_6601398]
        fnstsw ax
        test ah, 0x44
        jp public_65f9ea8
        fld qword ptr ds : [public_6601398]
        fadd qword ptr ds : [public_6601320]
        fsqrt 
        fmul dword ptr ss : [esp+4]
        ret 8
        public_65f9ea8 : nop
        fld dword ptr ds : [public_66033a4]
        fmul dword ptr ds : [public_66033a4]
        fadd qword ptr ds : [public_6601320]
        fsqrt 
        fmul dword ptr ss : [esp+4]
        ret 8
        UNREACHABLE_TRAP(0x65f9e00)
    }
}

#undef public_65f9e47
#undef public_65f9e60
#undef public_65f9e7c
#undef public_65f9ea8
