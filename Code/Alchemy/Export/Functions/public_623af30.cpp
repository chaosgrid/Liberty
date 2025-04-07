#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_623ac50);

PROC_DECLARE(0x623af30, internal_623af30, public_623af30);
extern "C" NAKED register_t __cdecl internal_623af30()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 0xC
        jmp public_623ac50
        UNREACHABLE_TRAP(0x623af30)
    }
}
