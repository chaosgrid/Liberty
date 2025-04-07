#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_623b140);

PROC_DECLARE(0x623b050, internal_623b050, public_623b050);
extern "C" NAKED register_t __cdecl internal_623b050()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 0xC
        jmp public_623b140
        UNREACHABLE_TRAP(0x623b050)
    }
}
