#include "RendComp-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c2a9a0);
CLANG_FORWARD_PROC_SYMBOL(public_6c2a9b0);

PROC_DECLARE(0x6c2a9a0, internal_6c2a9a0, public_6c2a9a0);
extern "C" NAKED register_t __cdecl internal_6c2a9a0()
{
    __asm
    {
        call public_6c2a9b0
        xor ecx, ecx
        test eax, eax
        setge cl
        dec ecx
        mov eax, ecx
        ret 
        UNREACHABLE_TRAP(0x6c2a9a0)
    }
}
