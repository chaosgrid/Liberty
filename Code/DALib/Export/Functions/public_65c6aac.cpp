#include "DALib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65c6a80);
CLANG_FORWARD_PROC_SYMBOL(public_65c6aac);

PROC_DECLARE(0x65c6aac, internal_65c6aac, public_65c6aac);
extern "C" NAKED register_t __cdecl internal_65c6aac()
{
    __asm
    {
        push dword ptr ss : [esp+4]
        call public_65c6a80
        neg eax
        sbb eax, eax
        pop ecx
        neg eax
        dec eax
        ret 
        UNREACHABLE_TRAP(0x65c6aac)
    }
}
