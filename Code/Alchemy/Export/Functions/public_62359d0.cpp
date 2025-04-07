#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6232cc0);
CLANG_FORWARD_PROC_SYMBOL(public_62359d0);

PROC_DECLARE(0x62359d0, internal_62359d0, public_62359d0);
extern "C" NAKED register_t __cdecl internal_62359d0()
{
    __asm
    {
        mov ecx, dword ptr ss : [esp+4]
        add ecx, 0xC
        mov dword ptr ss : [esp+4], ecx
        jmp public_6232cc0
        UNREACHABLE_TRAP(0x62359d0)
    }
}
