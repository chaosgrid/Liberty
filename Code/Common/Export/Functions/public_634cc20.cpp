#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_634cc30);
CLANG_FORWARD_PROC_SYMBOL(public_634cc40);

PROC_DECLARE(0x634cc20, internal_634cc20, public_634cc20);
extern "C" NAKED register_t __cdecl internal_634cc20()
{
    __asm
    {
        call public_634cc30
        jmp public_634cc40
        UNREACHABLE_TRAP(0x634cc20)
    }
}
