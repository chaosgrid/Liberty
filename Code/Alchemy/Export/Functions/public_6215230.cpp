#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6214640);

PROC_DECLARE(0x6215230, internal_6215230, public_6215230);
extern "C" NAKED register_t __cdecl internal_6215230()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 4
        jmp public_6214640
        UNREACHABLE_TRAP(0x6215230)
    }
}
