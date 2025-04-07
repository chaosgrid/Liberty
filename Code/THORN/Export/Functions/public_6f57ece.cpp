#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f57ea2);
CLANG_FORWARD_PROC_SYMBOL(public_6f57ece);

PROC_DECLARE(0x6f57ece, internal_6f57ece, public_6f57ece);
extern "C" NAKED register_t __cdecl internal_6f57ece()
{
    __asm
    {
        push dword ptr ss : [esp+4]
        call public_6f57ea2
        neg eax
        sbb eax, eax
        pop ecx
        neg eax
        dec eax
        ret 
        UNREACHABLE_TRAP(0x6f57ece)
    }
}
