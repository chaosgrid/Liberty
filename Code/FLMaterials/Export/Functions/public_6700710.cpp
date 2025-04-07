#include "FLMaterials-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6700710);
CLANG_FORWARD_PROC_SYMBOL(public_6700a78);

PROC_DECLARE(0x6700710, internal_6700710, public_6700710);
extern "C" NAKED register_t __cdecl internal_6700710()
{
    __asm
    {
        push dword ptr ss : [esp+4]
        call public_6700a78
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x6700710)
    }
}
