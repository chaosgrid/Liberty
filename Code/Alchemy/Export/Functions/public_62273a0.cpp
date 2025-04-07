#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62273a0);
CLANG_FORWARD_PROC_SYMBOL(public_623ef70);

PROC_DECLARE(0x62273a0, internal_62273a0, public_62273a0);
extern "C" NAKED register_t __cdecl internal_62273a0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        push eax
        call public_623ef70
        add esp, 4
        ret 8
        UNREACHABLE_TRAP(0x62273a0)
    }
}
