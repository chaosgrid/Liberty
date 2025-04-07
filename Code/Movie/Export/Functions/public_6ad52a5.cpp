#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ad14b5);
CLANG_FORWARD_PROC_SYMBOL(public_6ad2df1);
CLANG_FORWARD_PROC_SYMBOL(public_6ad52a5);
CLANG_FORWARD_PROC_SYMBOL(public_6ad7863);

PROC_DECLARE(0x6ad52a5, internal_6ad52a5, public_6ad52a5);
extern "C" NAKED register_t __cdecl internal_6ad52a5()
{
    __asm
    {
        push 0xA
        call public_6ad2df1
        push 0x16
        call public_6ad7863
        pop ecx
        pop ecx
        push 3
        call public_6ad14b5
        UNREACHABLE_TRAP(0x6ad52a5)
    }
}
