#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d404a2);

PROC_DECLARE(0x6d3e21c, internal_6d3e21c, public_6d3e21c);
extern "C" NAKED register_t __cdecl internal_6d3e21c()
{
    __asm
    {
        push 1
        call public_6d404a2
        fld dword ptr ss : [esp+0xC]
        push ecx
        fstp dword ptr ss : [esp]
        push dword ptr ss : [esp+0xC]
        push dword ptr ss : [esp+0xC]
        call dword ptr ds : [public_6d6cab4]
        ret 0xC
        UNREACHABLE_TRAP(0x6d3e21c)
    }
}
