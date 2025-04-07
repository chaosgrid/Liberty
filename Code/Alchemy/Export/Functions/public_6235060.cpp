#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6235750);

PROC_DECLARE(0x6235060, internal_6235060, public_6235060);
extern "C" NAKED register_t __cdecl internal_6235060()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 0xC
        jmp public_6235750
        UNREACHABLE_TRAP(0x6235060)
    }
}
