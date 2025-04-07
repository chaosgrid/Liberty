#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_622fa10);
CLANG_FORWARD_PROC_SYMBOL(public_62320b0);

PROC_DECLARE(0x62320b0, internal_62320b0, public_62320b0);
extern "C" NAKED register_t __cdecl internal_62320b0()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        add ecx, 0xC
        mov dword ptr ss : [esp+4], ecx
        jmp public_622fa10
        UNREACHABLE_TRAP(0x62320b0)
    }
}
