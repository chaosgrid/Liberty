#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6231f40);

PROC_DECLARE(0x6231540, internal_6231540, public_6231540);
extern "C" NAKED register_t __cdecl internal_6231540()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 0xC
        jmp public_6231f40
        UNREACHABLE_TRAP(0x6231540)
    }
}
