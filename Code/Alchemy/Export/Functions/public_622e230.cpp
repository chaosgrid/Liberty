#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_622ea90);

PROC_DECLARE(0x622e230, internal_622e230, public_622e230);
extern "C" NAKED register_t __cdecl internal_622e230()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 0xC
        jmp public_622ea90
        UNREACHABLE_TRAP(0x622e230)
    }
}
