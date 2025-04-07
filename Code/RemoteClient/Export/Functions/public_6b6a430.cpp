#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b6a404);
CLANG_FORWARD_PROC_SYMBOL(public_6b6a430);

PROC_DECLARE(0x6b6a430, internal_6b6a430, public_6b6a430);
extern "C" NAKED register_t __cdecl internal_6b6a430()
{
    __asm
    {
        push dword ptr ss : [esp+4]
        call public_6b6a404
        neg eax
        sbb eax, eax
        pop ecx
        neg eax
        dec eax
        ret 
        UNREACHABLE_TRAP(0x6b6a430)
    }
}
