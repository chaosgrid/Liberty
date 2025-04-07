#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6245190);

PROC_DECLARE(0x6245590, internal_6245590, public_6245590);
extern "C" NAKED register_t __cdecl internal_6245590()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 4
        jmp public_6245190
        UNREACHABLE_TRAP(0x6245590)
    }
}
