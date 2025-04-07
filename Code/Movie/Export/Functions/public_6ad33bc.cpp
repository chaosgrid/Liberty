#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ad33c9);

PROC_DECLARE(0x6ad33bc, internal_6ad33bc, public_6ad33bc);
extern "C" NAKED register_t __cdecl internal_6ad33bc()
{
    __asm
    {
        test eax, 0x80000
        je public_6ad33c9
        mov eax, 7
        ret 
        UNREACHABLE_TRAP(0x6ad33bc)
    }
}
