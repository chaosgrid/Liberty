#include "FLMaterials-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_67008e6);
CLANG_FORWARD_PROC_SYMBOL(public_6700912);

PROC_DECLARE(0x6700912, internal_6700912, public_6700912);
extern "C" NAKED register_t __cdecl internal_6700912()
{
    __asm
    {
        push dword ptr ss : [esp+4]
        call public_67008e6
        neg eax
        sbb eax, eax
        pop ecx
        neg eax
        dec eax
        ret 
        UNREACHABLE_TRAP(0x6700912)
    }
}
