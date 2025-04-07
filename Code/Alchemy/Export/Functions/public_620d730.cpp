#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_620dfa0);

PROC_DECLARE(0x620d730, internal_620d730, public_620d730);
extern "C" NAKED register_t __cdecl internal_620d730()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 0xC
        jmp public_620dfa0
        UNREACHABLE_TRAP(0x620d730)
    }
}
