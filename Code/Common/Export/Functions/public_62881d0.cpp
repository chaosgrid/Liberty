#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62881d0);
CLANG_FORWARD_PROC_SYMBOL(public_6341610);

#define public_62881dc _public_62881dc

PROC_DECLARE(0x62881d0, internal_62881d0, public_62881d0);
extern "C" NAKED register_t __cdecl internal_62881d0()
{
    __asm
    {
        cmp dword ptr ds : [ecx], 0
        je public_62881dc
        push 0
        call public_6341610
        public_62881dc : nop
        ret 
        UNREACHABLE_TRAP(0x62881d0)
    }
}

#undef public_62881dc
