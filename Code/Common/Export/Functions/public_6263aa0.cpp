#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63128e0);

PROC_DECLARE(0x6263aa0, internal_6263aa0, public_6263aa0);
extern "C" NAKED register_t __cdecl internal_6263aa0()
{
    __asm
    {
        push ecx
        push 1
        lea eax, ss:[esp+7]
        push eax
        call public_63128e0
        mov al, byte ptr ss : [esp+3]
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x6263aa0)
    }
}
