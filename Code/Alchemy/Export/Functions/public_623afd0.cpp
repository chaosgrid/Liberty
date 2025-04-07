#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6238280);
CLANG_FORWARD_PROC_SYMBOL(public_623afd0);

PROC_DECLARE(0x623afd0, internal_623afd0, public_623afd0);
extern "C" NAKED register_t __cdecl internal_623afd0()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        add ecx, 0xC
        mov dword ptr ss : [esp+4], ecx
        jmp public_6238280
        UNREACHABLE_TRAP(0x623afd0)
    }
}
