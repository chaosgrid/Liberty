#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_401e90);
CLANG_FORWARD_PROC_SYMBOL(public_4354e0);
CLANG_FORWARD_PROC_SYMBOL(public_4355e0);
CLANG_FORWARD_PROC_SYMBOL(public_4393b0);
CLANG_FORWARD_PROC_SYMBOL(public_558850);

PROC_DECLARE(0x558850, internal_558850, public_558850);
extern "C" NAKED register_t __cdecl internal_558850()
{
    __asm
    {
        call public_401e90
        mov ecx, offset public_668708
        call public_4393b0
        call public_4354e0
        jmp public_4355e0
        UNREACHABLE_TRAP(0x558850)
    }
}
