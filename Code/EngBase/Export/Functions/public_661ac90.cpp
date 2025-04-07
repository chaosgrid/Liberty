#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_661a9a0);

PROC_DECLARE(0x661ac90, internal_661ac90, public_661ac90);
extern "C" NAKED register_t __cdecl internal_661ac90()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 8
        jmp public_661a9a0
        UNREACHABLE_TRAP(0x661ac90)
    }
}
