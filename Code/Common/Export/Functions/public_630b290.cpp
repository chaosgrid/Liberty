#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_630b290);
CLANG_FORWARD_PROC_SYMBOL(public_630cd40);

PROC_DECLARE(0x630b290, internal_630b290, public_630b290);
extern "C" NAKED register_t __cdecl internal_630b290()
{
    __asm
    {
        jmp public_630cd40
        UNREACHABLE_TRAP(0x630b290)
    }
}
