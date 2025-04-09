#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4348b0);
CLANG_FORWARD_PROC_SYMBOL(public_435500);
CLANG_FORWARD_PROC_SYMBOL(public_439260);
CLANG_FORWARD_PROC_SYMBOL(public_556200);
CLANG_FORWARD_PROC_SYMBOL(public_558870);
CLANG_FORWARD_PROC_SYMBOL(public_559380);

PROC_DECLARE(0x558870, internal_558870, public_558870);
extern "C" NAKED register_t __cdecl internal_558870()
{
    __asm
    {
        call public_435500
        mov ecx, offset public_668708
        call public_439260
        call public_559380
        mov ecx, offset public_667e50
        call public_4348b0
        jmp public_556200
        UNREACHABLE_TRAP(0x558870)
    }
}
