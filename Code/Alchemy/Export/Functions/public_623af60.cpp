#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_623ad40);

PROC_DECLARE(0x623af60, internal_623af60, public_623af60);
extern "C" NAKED register_t __cdecl internal_623af60()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 0xC
        jmp public_623ad40
        UNREACHABLE_TRAP(0x623af60)
    }
}
