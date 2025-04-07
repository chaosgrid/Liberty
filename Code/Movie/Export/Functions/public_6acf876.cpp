#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6acf7f8);
CLANG_FORWARD_PROC_SYMBOL(public_6acf876);

PROC_DECLARE(0x6acf876, internal_6acf876, public_6acf876);
extern "C" NAKED register_t __cdecl internal_6acf876()
{
    __asm
    {
        push dword ptr ss : [esp+4]
        call public_6acf7f8
        neg eax
        sbb eax, eax
        pop ecx
        neg eax
        dec eax
        ret 
        UNREACHABLE_TRAP(0x6acf876)
    }
}
