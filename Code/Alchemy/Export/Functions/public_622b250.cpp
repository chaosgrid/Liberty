#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_622ac30);

PROC_DECLARE(0x622b250, internal_622b250, public_622b250);
extern "C" NAKED register_t __cdecl internal_622b250()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 4
        jmp public_622ac30
        UNREACHABLE_TRAP(0x622b250)
    }
}
