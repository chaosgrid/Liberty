#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_623ac30);

PROC_DECLARE(0x623af00, internal_623af00, public_623af00);
extern "C" NAKED register_t __cdecl internal_623af00()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 0xC
        jmp public_623ac30
        UNREACHABLE_TRAP(0x623af00)
    }
}
