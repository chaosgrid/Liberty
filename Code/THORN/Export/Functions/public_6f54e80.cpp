#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f54e80);
CLANG_FORWARD_PROC_SYMBOL(public_6f54ea0);
CLANG_FORWARD_PROC_SYMBOL(public_6f55260);

PROC_DECLARE(0x6f54e80, internal_6f54e80, public_6f54e80);
extern "C" NAKED register_t __cdecl internal_6f54e80()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+8]
        push esi
        call public_6f55260
        push eax
        push esi
        call public_6f54ea0
        add esp, 0xC
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6f54e80)
    }
}
