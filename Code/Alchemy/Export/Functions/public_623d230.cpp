#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_623c680);

PROC_DECLARE(0x623d230, internal_623d230, public_623d230);
extern "C" NAKED register_t __cdecl internal_623d230()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 4
        jmp public_623c680
        UNREACHABLE_TRAP(0x623d230)
    }
}
