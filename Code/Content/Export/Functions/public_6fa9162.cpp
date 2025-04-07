#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6fa9136);
CLANG_FORWARD_PROC_SYMBOL(public_6fa9162);

PROC_DECLARE(0x6fa9162, internal_6fa9162, public_6fa9162);
extern "C" NAKED register_t __cdecl internal_6fa9162()
{
    __asm
    {
        push dword ptr ss : [esp+4]
        call public_6fa9136
        neg eax
        sbb eax, eax
        pop ecx
        neg eax
        dec eax
        ret 
        UNREACHABLE_TRAP(0x6fa9162)
    }
}
