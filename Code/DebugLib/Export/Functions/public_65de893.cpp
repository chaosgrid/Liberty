#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65d8f61);
CLANG_FORWARD_PROC_SYMBOL(public_65de893);

PROC_DECLARE(0x65de893, internal_65de893, public_65de893);
extern "C" NAKED register_t __cdecl internal_65de893()
{
    __asm
    {
        call public_65d8f61
        add eax, 0xC
        ret 
        UNREACHABLE_TRAP(0x65de893)
    }
}
