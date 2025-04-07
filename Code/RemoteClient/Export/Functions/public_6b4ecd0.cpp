#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b4ecd0);
CLANG_FORWARD_PROC_SYMBOL(public_6b4ed50);

PROC_DECLARE(0x6b4ecd0, internal_6b4ecd0, public_6b4ecd0);
extern "C" NAKED register_t __cdecl internal_6b4ecd0()
{
    __asm
    {
        lea eax, ss:[esp+4]
        push eax
        mov ecx, offset public_6b73f1c
        call public_6b4ed50
        ret 
        UNREACHABLE_TRAP(0x6b4ecd0)
    }
}
