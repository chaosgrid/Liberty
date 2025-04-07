#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62f4740);

#define public_62f475a _public_62f475a

PROC_DECLARE(0x62f4740, internal_62f4740, public_62f4740);
extern "C" NAKED register_t __cdecl internal_62f4740()
{
    __asm
    {
        fld dword ptr ds : [ecx+0x1C]
        fmul dword ptr ds : [public_63a05bc]
        fld dword ptr ds : [ecx+0x70]
        fcomp 
        fnstsw ax
        test ah, 5
        jp public_62f475a
        fstp st(0)
        fld dword ptr ds : [ecx+0x70]
        public_62f475a : nop
        ret 
        UNREACHABLE_TRAP(0x62f4740)
    }
}

#undef public_62f475a
