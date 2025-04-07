#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_622a8f0);

PROC_DECLARE(0x622b230, internal_622b230, public_622b230);
extern "C" NAKED register_t __cdecl internal_622b230()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 4
        jmp public_622a8f0
        UNREACHABLE_TRAP(0x622b230)
    }
}
