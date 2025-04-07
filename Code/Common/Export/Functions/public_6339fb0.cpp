#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6339fb0);

#define public_6339fce _public_6339fce
#define public_6339fdf _public_6339fdf

PROC_DECLARE(0x6339fb0, internal_6339fb0, public_6339fb0);
extern "C" NAKED register_t __cdecl internal_6339fb0()
{
    __asm
    {
        fld dword ptr ds : [ecx+0x30]
        fcomp dword ptr ds : [ecx+0x34]
        fnstsw ax
        test ah, 5
        jp public_6339fce
        fld dword ptr ds : [ecx+0x30]
        fcomp dword ptr ds : [ecx+0x38]
        fnstsw ax
        test ah, 5
        jp public_6339fdf
        fld dword ptr ds : [ecx+0x30]
        ret 
        public_6339fce : nop
        fld dword ptr ds : [ecx+0x34]
        fcomp dword ptr ds : [ecx+0x38]
        fnstsw ax
        test ah, 5
        jp public_6339fdf
        fld dword ptr ds : [ecx+0x34]
        ret 
        public_6339fdf : nop
        fld dword ptr ds : [ecx+0x38]
        ret 
        UNREACHABLE_TRAP(0x6339fb0)
    }
}

#undef public_6339fce
#undef public_6339fdf
