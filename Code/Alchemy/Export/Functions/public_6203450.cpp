#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6203400);

PROC_DECLARE(0x6203450, internal_6203450, public_6203450);
extern "C" NAKED register_t __cdecl internal_6203450()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 4
        jmp public_6203400
        UNREACHABLE_TRAP(0x6203450)
    }
}
