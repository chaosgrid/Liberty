#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_622ac30);
CLANG_FORWARD_PROC_SYMBOL(public_623ef70);

PROC_DECLARE(0x622ac30, internal_622ac30, public_622ac30);
extern "C" NAKED register_t __cdecl internal_622ac30()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        push eax
        call public_623ef70
        add esp, 4
        ret 8
        UNREACHABLE_TRAP(0x622ac30)
    }
}
