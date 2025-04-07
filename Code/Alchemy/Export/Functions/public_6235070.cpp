#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6235770);

PROC_DECLARE(0x6235070, internal_6235070, public_6235070);
extern "C" NAKED register_t __cdecl internal_6235070()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 0xC
        jmp public_6235770
        UNREACHABLE_TRAP(0x6235070)
    }
}
