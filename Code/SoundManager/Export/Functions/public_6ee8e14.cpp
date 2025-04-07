#include "SoundManager-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ee8de8);
CLANG_FORWARD_PROC_SYMBOL(public_6ee8e14);

PROC_DECLARE(0x6ee8e14, internal_6ee8e14, public_6ee8e14);
extern "C" NAKED register_t __cdecl internal_6ee8e14()
{
    __asm
    {
        push dword ptr ss : [esp+4]
        call public_6ee8de8
        neg eax
        sbb eax, eax
        pop ecx
        neg eax
        dec eax
        ret 
        UNREACHABLE_TRAP(0x6ee8e14)
    }
}
