#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63128e0);

PROC_DECLARE(0x6263ad0, internal_6263ad0, public_6263ad0);
extern "C" NAKED register_t __cdecl internal_6263ad0()
{
    __asm
    {
        push ecx
        push 2
        lea eax, ss:[esp+6]
        push eax
        call public_63128e0
        mov ax, word ptr ss : [esp+2]
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x6263ad0)
    }
}
