#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4456e0);

#define public_4456ed _public_4456ed

PROC_DECLARE(0x4456e0, internal_4456e0, public_4456e0);
extern "C" NAKED register_t __cdecl internal_4456e0()
{
    __asm
    {
        cmp dword ptr ss : [esp+4], 0xFFFFFFFF
        je public_4456ed
        inc dword ptr ds : [ecx+0x370]
        public_4456ed : nop
        ret 4
        UNREACHABLE_TRAP(0x4456e0)
    }
}

#undef public_4456ed
