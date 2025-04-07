#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c09cdc);
CLANG_FORWARD_PROC_SYMBOL(public_6c09d08);

PROC_DECLARE(0x6c09d08, internal_6c09d08, public_6c09d08);
extern "C" NAKED register_t __cdecl internal_6c09d08()
{
    __asm
    {
        push dword ptr ss : [esp+4]
        call public_6c09cdc
        neg eax
        sbb eax, eax
        pop ecx
        neg eax
        dec eax
        ret 
        UNREACHABLE_TRAP(0x6c09d08)
    }
}
