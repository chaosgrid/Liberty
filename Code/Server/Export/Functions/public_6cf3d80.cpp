#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6cf3d80);
CLANG_FORWARD_PROC_SYMBOL(public_6cf3db0);
CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);

#define public_6cf3d9e _public_6cf3d9e

PROC_DECLARE(0x6cf3d80, internal_6cf3d80, public_6cf3d80);
extern "C" NAKED register_t __cdecl internal_6cf3d80()
{
    __asm
    {
        push esi
        mov esi, ecx
        call public_6cf3db0
        test byte ptr ss : [esp+8], 1
        lea eax, ds:[esi-0xC]
        je public_6cf3d9e
        push eax
        call public_6d5ffb0
        add esp, 4
        lea eax, ds:[esi-0xC]
        public_6cf3d9e : nop
        pop esi
        ret 4
        UNREACHABLE_TRAP(0x6cf3d80)
    }
}

#undef public_6cf3d9e
