#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6235b40);

PROC_DECLARE(0x6235100, internal_6235100, public_6235100);
extern "C" NAKED register_t __cdecl internal_6235100()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 0xC
        jmp public_6235b40
        UNREACHABLE_TRAP(0x6235100)
    }
}
