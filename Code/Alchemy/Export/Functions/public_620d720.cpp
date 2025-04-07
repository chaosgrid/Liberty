#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_620dfd0);

PROC_DECLARE(0x620d720, internal_620d720, public_620d720);
extern "C" NAKED register_t __cdecl internal_620d720()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 0xC
        jmp public_620dfd0
        UNREACHABLE_TRAP(0x620d720)
    }
}
