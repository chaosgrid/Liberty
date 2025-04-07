#include "FLServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4193e4);
CLANG_FORWARD_PROC_SYMBOL(public_419410);

PROC_DECLARE(0x419410, internal_419410, public_419410);
extern "C" NAKED register_t __cdecl internal_419410()
{
    __asm
    {
        push dword ptr ss : [esp+4]
        call public_4193e4
        neg eax
        sbb eax, eax
        pop ecx
        neg eax
        dec eax
        ret 
        UNREACHABLE_TRAP(0x419410)
    }
}
