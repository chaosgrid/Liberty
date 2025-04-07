#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_634bde0);
CLANG_FORWARD_PROC_SYMBOL(public_634bf10);

PROC_DECLARE(0x634bf10, internal_634bf10, public_634bf10);
extern "C" NAKED register_t __cdecl internal_634bf10()
{
    __asm
    {
        mov dword ptr ds : [ecx], offset public_63a554c
        jmp public_634bde0
        UNREACHABLE_TRAP(0x634bf10)
    }
}
