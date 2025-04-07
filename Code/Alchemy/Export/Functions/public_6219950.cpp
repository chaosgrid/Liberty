#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6219600);

PROC_DECLARE(0x6219950, internal_6219950, public_6219950);
extern "C" NAKED register_t __cdecl internal_6219950()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 0xC
        jmp public_6219600
        UNREACHABLE_TRAP(0x6219950)
    }
}
