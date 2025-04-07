#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6bec3b0);
CLANG_FORWARD_PROC_SYMBOL(public_6bec430);

PROC_DECLARE(0x6bec3b0, internal_6bec3b0, public_6bec3b0);
extern "C" NAKED register_t __cdecl internal_6bec3b0()
{
    __asm
    {
        lea eax, ss:[esp+4]
        push eax
        mov ecx, offset public_6c13ba4
        call public_6bec430
        ret 
        UNREACHABLE_TRAP(0x6bec3b0)
    }
}
