#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6226f80);

PROC_DECLARE(0x6226710, internal_6226710, public_6226710);
extern "C" NAKED register_t __cdecl internal_6226710()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 0xC
        jmp public_6226f80
        UNREACHABLE_TRAP(0x6226710)
    }
}
