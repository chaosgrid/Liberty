#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5b7e40);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e6c);

PROC_DECLARE(0x5b7e6c, internal_5b7e6c, public_5b7e6c);
extern "C" NAKED register_t __cdecl internal_5b7e6c()
{
    __asm
    {
        push dword ptr ss : [esp+4]
        call public_5b7e40
        neg eax
        sbb eax, eax
        pop ecx
        neg eax
        dec eax
        ret 
        UNREACHABLE_TRAP(0x5b7e6c)
    }
}
