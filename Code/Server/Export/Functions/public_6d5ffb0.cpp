#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d5ffb0);
CLANG_FORWARD_PROC_SYMBOL(public_6d60196);

PROC_DECLARE(0x6d5ffb0, internal_6d5ffb0, public_6d5ffb0);
extern "C" NAKED register_t __cdecl internal_6d5ffb0()
{
    __asm
    {
        push dword ptr ss : [esp+4]
        call public_6d60196
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x6d5ffb0)
    }
}
