#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6219350);

PROC_DECLARE(0x6219890, internal_6219890, public_6219890);
extern "C" NAKED register_t __cdecl internal_6219890()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 0xC
        jmp public_6219350
        UNREACHABLE_TRAP(0x6219890)
    }
}
