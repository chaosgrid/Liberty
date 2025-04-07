#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6391f72);
CLANG_FORWARD_PROC_SYMBOL(public_6391f9e);

PROC_DECLARE(0x6391f9e, internal_6391f9e, public_6391f9e);
extern "C" NAKED register_t __cdecl internal_6391f9e()
{
    __asm
    {
        push dword ptr ss : [esp+4]
        call public_6391f72
        neg eax
        sbb eax, eax
        pop ecx
        neg eax
        dec eax
        ret 
        UNREACHABLE_TRAP(0x6391f9e)
    }
}
