#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4456f0);

#define public_4456fd _public_4456fd

PROC_DECLARE(0x4456f0, internal_4456f0, public_4456f0);
extern "C" NAKED register_t __cdecl internal_4456f0()
{
    __asm
    {
        cmp dword ptr ss : [esp+4], 0xFFFFFFFF
        je public_4456fd
        dec dword ptr ds : [ecx+0x370]
        public_4456fd : nop
        ret 4
        UNREACHABLE_TRAP(0x4456f0)
    }
}

#undef public_4456fd
