#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6226f70);

PROC_DECLARE(0x6226700, internal_6226700, public_6226700);
extern "C" NAKED register_t __cdecl internal_6226700()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 0xC
        jmp public_6226f70
        UNREACHABLE_TRAP(0x6226700)
    }
}
