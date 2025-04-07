#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6347e90);

#define public_6347ec4 _public_6347ec4

PROC_DECLARE(0x6347e90, internal_6347e90, public_6347e90);
extern "C" NAKED register_t __cdecl internal_6347e90()
{
    __asm
    {
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
        fstp st(3)
        fstp st(0)
        fstp st(0)
        fcom dword ptr ds : [public_63a53d8]
        fnstsw ax
        test ah, 1
        je public_6347ec4
        fstp st(0)
        fld dword ptr ds : [public_63a53d4]
        ret 
        public_6347ec4 : nop
        fld st(0)
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
        fmulp 
        ret 
        UNREACHABLE_TRAP(0x6347e90)
    }
}

#undef public_6347ec4
