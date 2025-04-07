#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65d76d5);
CLANG_FORWARD_PROC_SYMBOL(public_65d7753);

PROC_DECLARE(0x65d7753, internal_65d7753, public_65d7753);
extern "C" NAKED register_t __cdecl internal_65d7753()
{
    __asm
    {
        push dword ptr ss : [esp+4]
        call public_65d76d5
        neg eax
        sbb eax, eax
        pop ecx
        neg eax
        dec eax
        ret 
        UNREACHABLE_TRAP(0x65d7753)
    }
}
