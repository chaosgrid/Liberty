#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6350fb0);

#define public_635100b _public_635100b

PROC_DECLARE(0x6350fb0, internal_6350fb0, public_6350fb0);
extern "C" NAKED register_t __cdecl internal_6350fb0()
{
    __asm
    {
        fld dword ptr ds : [ecx+0xC]
        fld dword ptr ds : [ecx+8]
        fld dword ptr ds : [ecx+4]
        fld dword ptr ds : [ecx]
        fld st(0)
        fmul st, st(1)
        fld st(2)
        fmul st, st(3)
        faddp 
        fld st(3)
        fmul st, st(4)
        faddp 
        fld st(4)
        fmul st, st(5)
        faddp 
        fstp st(4)
        fstp st(0)
        fstp st(0)
        fstp st(0)
        fcom dword ptr ds : [public_63a53d8]
        fnstsw ax
        test ah, 0x41
        jne public_635100b
        fsqrt 
        fdivr dword ptr ds : [public_63a53d0]
        fld st(0)
        fmul dword ptr ds : [ecx]
        fstp dword ptr ds : [ecx]
        fld st(0)
        fmul dword ptr ds : [ecx+4]
        fstp dword ptr ds : [ecx+4]
        fld st(0)
        fmul dword ptr ds : [ecx+8]
        fstp dword ptr ds : [ecx+8]
        fmul dword ptr ds : [ecx+0xC]
        fstp dword ptr ds : [ecx+0xC]
        ret 
        public_635100b : nop
        fstp st(0)
        ret 
        UNREACHABLE_TRAP(0x6350fb0)
    }
}

#undef public_635100b
