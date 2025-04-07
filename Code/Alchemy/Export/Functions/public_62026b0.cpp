#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62026b0);
CLANG_FORWARD_PROC_SYMBOL(public_623fc90);

PROC_DECLARE(0x62026b0, internal_62026b0, public_62026b0);
extern "C" NAKED register_t __cdecl internal_62026b0()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        add ecx, 4
        mov dword ptr ss : [esp+4], ecx
        jmp public_623fc90
        UNREACHABLE_TRAP(0x62026b0)
    }
}
