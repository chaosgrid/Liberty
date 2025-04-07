#include "RendComp-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c34f08);
CLANG_FORWARD_PROC_SYMBOL(public_6c34f34);

PROC_DECLARE(0x6c34f34, internal_6c34f34, public_6c34f34);
extern "C" NAKED register_t __cdecl internal_6c34f34()
{
    __asm
    {
        push dword ptr ss : [esp+4]
        call public_6c34f08
        neg eax
        sbb eax, eax
        pop ecx
        neg eax
        dec eax
        ret 
        UNREACHABLE_TRAP(0x6c34f34)
    }
}
