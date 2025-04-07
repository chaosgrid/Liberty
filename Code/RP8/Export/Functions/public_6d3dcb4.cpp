#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d404a2);

PROC_DECLARE(0x6d3dcb4, internal_6d3dcb4, public_6d3dcb4);
extern "C" NAKED register_t __cdecl internal_6d3dcb4()
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
        call dword ptr ds : [public_6d6cae8]
        ret 0xC
        UNREACHABLE_TRAP(0x6d3dcb4)
    }
}
