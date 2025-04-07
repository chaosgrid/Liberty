#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d2bd86);
CLANG_FORWARD_PROC_SYMBOL(public_6d2bdb4);

PROC_DECLARE(0x6d2bd77, internal_6d2bd77, public_6d2bd77);
extern "C" NAKED register_t __cdecl internal_6d2bd77()
{
    __asm
    {
        push ebp
        mov ebp, esp
        call public_6d2bd86
        call public_6d2bdb4
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x6d2bd77)
    }
}
