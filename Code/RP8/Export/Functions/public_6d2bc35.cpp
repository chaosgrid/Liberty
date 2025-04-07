#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d2bc44);
CLANG_FORWARD_PROC_SYMBOL(public_6d2bcf7);

PROC_DECLARE(0x6d2bc35, internal_6d2bc35, public_6d2bc35);
extern "C" NAKED register_t __cdecl internal_6d2bc35()
{
    __asm
    {
        push ebp
        mov ebp, esp
        call public_6d2bc44
        call public_6d2bcf7
        pop ebp
        ret 
        UNREACHABLE_TRAP(0x6d2bc35)
    }
}
