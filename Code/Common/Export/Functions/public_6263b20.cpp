#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63128e0);

PROC_DECLARE(0x6263b20, internal_6263b20, public_6263b20);
extern "C" NAKED register_t __cdecl internal_6263b20()
{
    __asm
    {
        push ecx
        push 4
        lea eax, ss:[esp+4]
        push eax
        call public_63128e0
        fld dword ptr ss : [esp]
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x6263b20)
    }
}
