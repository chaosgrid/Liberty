#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5ad350);
CLANG_FORWARD_PROC_SYMBOL(public_5b6bd0);

PROC_DECLARE(0x5b6bd0, internal_5b6bd0, public_5b6bd0);
extern "C" NAKED register_t __cdecl internal_5b6bd0()
{
    __asm
    {
        lea eax, ss:[esp+4]
        push eax
        add ecx, 4
        call public_5ad350
        ret 4
        UNREACHABLE_TRAP(0x5b6bd0)
    }
}
