#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6245150);

PROC_DECLARE(0x6245570, internal_6245570, public_6245570);
extern "C" NAKED register_t __cdecl internal_6245570()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 4
        jmp public_6245150
        UNREACHABLE_TRAP(0x6245570)
    }
}
