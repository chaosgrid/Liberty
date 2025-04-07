#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d13cc0);
CLANG_FORWARD_PROC_SYMBOL(public_6d15650);
CLANG_FORWARD_PROC_SYMBOL(public_6d18840);

PROC_DECLARE(0x6d18840, internal_6d18840, public_6d18840);
extern "C" NAKED register_t __cdecl internal_6d18840()
{
    __asm
    {
        call public_6d15650
        mov ecx, eax
        jmp public_6d13cc0
        UNREACHABLE_TRAP(0x6d18840)
    }
}
