#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d2f2be);
CLANG_FORWARD_PROC_SYMBOL(public_6d484a8);

#define public_6d484c0 _public_6d484c0

PROC_DECLARE(0x6d484a8, internal_6d484a8, public_6d484a8);
extern "C" NAKED register_t __cdecl internal_6d484a8()
{
    __asm
    {
        cmp dword ptr ss : [esp+4], 0
        je public_6d484c0
        cmp dword ptr ss : [esp+8], 0
        je public_6d484c0
        push dword ptr ss : [esp+8]
        call public_6d2f2be
        pop ecx
        public_6d484c0 : nop
        ret 
        UNREACHABLE_TRAP(0x6d484a8)
    }
}

#undef public_6d484c0
