#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ad157a);
CLANG_FORWARD_PROC_SYMBOL(public_6ad237a);

PROC_DECLARE(0x6ad157a, internal_6ad157a, public_6ad157a);
extern "C" NAKED register_t __cdecl internal_6ad157a()
{
    __asm
    {
        push 0xD
        call public_6ad237a
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x6ad157a)
    }
}
