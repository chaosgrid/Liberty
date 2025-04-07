#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6245270);

PROC_DECLARE(0x6245540, internal_6245540, public_6245540);
extern "C" NAKED register_t __cdecl internal_6245540()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 4
        jmp public_6245270
        UNREACHABLE_TRAP(0x6245540)
    }
}
