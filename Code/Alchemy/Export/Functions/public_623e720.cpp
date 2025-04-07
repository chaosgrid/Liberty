#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_623df80);

PROC_DECLARE(0x623e720, internal_623e720, public_623e720);
extern "C" NAKED register_t __cdecl internal_623e720()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 4
        jmp public_623df80
        UNREACHABLE_TRAP(0x623e720)
    }
}
