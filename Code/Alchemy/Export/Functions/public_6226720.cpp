#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6226f90);

PROC_DECLARE(0x6226720, internal_6226720, public_6226720);
extern "C" NAKED register_t __cdecl internal_6226720()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 0xC
        jmp public_6226f90
        UNREACHABLE_TRAP(0x6226720)
    }
}
