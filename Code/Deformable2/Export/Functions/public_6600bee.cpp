#include "Deformable2-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6600bc2);
CLANG_FORWARD_PROC_SYMBOL(public_6600bee);

PROC_DECLARE(0x6600bee, internal_6600bee, public_6600bee);
extern "C" NAKED register_t __cdecl internal_6600bee()
{
    __asm
    {
        push dword ptr ss : [esp+4]
        call public_6600bc2
        neg eax
        sbb eax, eax
        pop ecx
        neg eax
        dec eax
        ret 
        UNREACHABLE_TRAP(0x6600bee)
    }
}
