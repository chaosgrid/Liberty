#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_622ea40);

PROC_DECLARE(0x622e250, internal_622e250, public_622e250);
extern "C" NAKED register_t __cdecl internal_622e250()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 0xC
        jmp public_622ea40
        UNREACHABLE_TRAP(0x622e250)
    }
}
