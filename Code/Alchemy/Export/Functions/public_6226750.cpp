#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6226f10);

PROC_DECLARE(0x6226750, internal_6226750, public_6226750);
extern "C" NAKED register_t __cdecl internal_6226750()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 0xC
        jmp public_6226f10
        UNREACHABLE_TRAP(0x6226750)
    }
}
