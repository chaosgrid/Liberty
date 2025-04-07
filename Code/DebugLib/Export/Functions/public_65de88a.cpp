#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65d8f61);
CLANG_FORWARD_PROC_SYMBOL(public_65de88a);

PROC_DECLARE(0x65de88a, internal_65de88a, public_65de88a);
extern "C" NAKED register_t __cdecl internal_65de88a()
{
    __asm
    {
        call public_65d8f61
        add eax, 8
        ret 
        UNREACHABLE_TRAP(0x65de88a)
    }
}
