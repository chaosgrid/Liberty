#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b8088);
CLANG_FORWARD_PROC_SYMBOL(public_5b820a);

PROC_DECLARE(0x5b820a, internal_5b820a, public_5b820a);
extern "C" NAKED register_t __cdecl internal_5b820a()
{
    __asm
    {
        push 0x30000
        push 0x10000
        call public_5b8088
        pop ecx
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x5b820a)
    }
}
