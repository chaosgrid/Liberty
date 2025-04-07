#include "Deformable2-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65f2500);

PROC_DECLARE(0x65f2530, internal_65f2530, public_65f2530);
extern "C" NAKED register_t __cdecl internal_65f2530()
{
    __asm
    {
        sub dword ptr ss : [esp+4], 4
        jmp public_65f2500
        UNREACHABLE_TRAP(0x65f2530)
    }
}
