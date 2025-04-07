#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d404a2);

PROC_DECLARE(0x6d3e647, internal_6d3e647, public_6d3e647);
extern "C" NAKED register_t __cdecl internal_6d3e647()
{
    __asm
    {
        push 1
        call public_6d404a2
        fld dword ptr ss : [esp+0x10]
        push ecx
        fstp dword ptr ss : [esp]
        push dword ptr ss : [esp+0x10]
        push dword ptr ss : [esp+0x10]
        push dword ptr ss : [esp+0x10]
        call dword ptr ds : [public_6d6cacc]
        ret 0x10
        UNREACHABLE_TRAP(0x6d3e647)
    }
}
