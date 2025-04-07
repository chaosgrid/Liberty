#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6245290);

PROC_DECLARE(0x6245510, internal_6245510, public_6245510);
extern "C" NAKED register_t __cdecl internal_6245510()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 4
        jmp public_6245290
        UNREACHABLE_TRAP(0x6245510)
    }
}
