#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6acf398);
CLANG_FORWARD_PROC_SYMBOL(public_6ad0314);
CLANG_FORWARD_PROC_SYMBOL(public_6ad0364);

PROC_DECLARE(0x6acf380, internal_6acf380, public_6acf380);
extern "C" NAKED register_t __cdecl internal_6acf380()
{
    __asm
    {
        call public_6acf398
        call public_6ad0364
        mov dword ptr ds : [public_6ae0e90], eax
        call public_6ad0314
        fnclex 
        ret 
        UNREACHABLE_TRAP(0x6acf380)
    }
}
