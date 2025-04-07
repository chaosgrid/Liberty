#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6312890);

PROC_DECLARE(0x6263ac0, internal_6263ac0, public_6263ac0);
extern "C" NAKED register_t __cdecl internal_6263ac0()
{
    __asm
    {
        push 2
        lea eax, ss:[esp+8]
        push eax
        call public_6312890
        ret 4
        UNREACHABLE_TRAP(0x6263ac0)
    }
}
