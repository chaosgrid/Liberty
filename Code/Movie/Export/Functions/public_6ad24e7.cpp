#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ad1381);
CLANG_FORWARD_PROC_SYMBOL(public_6ad24e7);

PROC_DECLARE(0x6ad24e7, internal_6ad24e7, public_6ad24e7);
extern "C" NAKED register_t __cdecl internal_6ad24e7()
{
    __asm
    {
        call public_6ad1381
        add eax, 0xC
        ret 
        UNREACHABLE_TRAP(0x6ad24e7)
    }
}
