#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ad1381);
CLANG_FORWARD_PROC_SYMBOL(public_6ad24de);

PROC_DECLARE(0x6ad24de, internal_6ad24de, public_6ad24de);
extern "C" NAKED register_t __cdecl internal_6ad24de()
{
    __asm
    {
        call public_6ad1381
        add eax, 8
        ret 
        UNREACHABLE_TRAP(0x6ad24de)
    }
}
