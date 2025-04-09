#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_445700);

#define public_44570d _public_44570d

PROC_DECLARE(0x445700, internal_445700, public_445700);
extern "C" NAKED register_t __cdecl internal_445700()
{
    __asm
    {
        cmp dword ptr ss : [esp+4], 0xFFFFFFFF
        je public_44570d
        inc dword ptr ds : [ecx+0x374]
        public_44570d : nop
        ret 4
        UNREACHABLE_TRAP(0x445700)
    }
}

#undef public_44570d
