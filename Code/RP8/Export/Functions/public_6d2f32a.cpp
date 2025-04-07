#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d2f2fe);
CLANG_FORWARD_PROC_SYMBOL(public_6d2f32a);

PROC_DECLARE(0x6d2f32a, internal_6d2f32a, public_6d2f32a);
extern "C" NAKED register_t __cdecl internal_6d2f32a()
{
    __asm
    {
        push dword ptr ss : [esp+4]
        call public_6d2f2fe
        neg eax
        sbb eax, eax
        pop ecx
        neg eax
        dec eax
        ret 
        UNREACHABLE_TRAP(0x6d2f32a)
    }
}
