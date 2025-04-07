#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6261d90);
CLANG_FORWARD_PROC_SYMBOL(public_634cb90);

PROC_DECLARE(0x634cb90, internal_634cb90, public_634cb90);
extern "C" NAKED register_t __cdecl internal_634cb90()
{
    __asm
    {
        mov ecx, dword ptr ds : [ecx+0xC]
        jmp public_6261d90
        UNREACHABLE_TRAP(0x634cb90)
    }
}
