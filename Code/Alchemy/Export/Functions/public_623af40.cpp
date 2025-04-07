#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_623ad20);

PROC_DECLARE(0x623af40, internal_623af40, public_623af40);
extern "C" NAKED register_t __cdecl internal_623af40()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 0xC
        jmp public_623ad20
        UNREACHABLE_TRAP(0x623af40)
    }
}
