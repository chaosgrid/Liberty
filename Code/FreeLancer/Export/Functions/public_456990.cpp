#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_428be0);
CLANG_FORWARD_PROC_SYMBOL(public_456990);

PROC_DECLARE(0x456990, internal_456990, public_456990);
extern "C" NAKED register_t __cdecl internal_456990()
{
    __asm
    {
        push ecx
        lea eax, ss:[esp]
        push eax
        push 0
        push 0
        call public_428be0
        fld dword ptr ss : [esp+0xC]
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x456990)
    }
}
