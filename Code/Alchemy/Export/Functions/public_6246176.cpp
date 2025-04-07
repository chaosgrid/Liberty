#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_624614a);
CLANG_FORWARD_PROC_SYMBOL(public_6246176);

PROC_DECLARE(0x6246176, internal_6246176, public_6246176);
extern "C" NAKED register_t __cdecl internal_6246176()
{
    __asm
    {
        push dword ptr ss : [esp+4]
        call public_624614a
        neg eax
        sbb eax, eax
        pop ecx
        neg eax
        dec eax
        ret 
        UNREACHABLE_TRAP(0x6246176)
    }
}
