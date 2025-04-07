#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d404a2);

PROC_DECLARE(0x6d3db85, internal_6d3db85, public_6d3db85);
extern "C" NAKED register_t __cdecl internal_6d3db85()
{
    __asm
    {
        push 1
        call public_6d404a2
        fld dword ptr ss : [esp+8]
        push ecx
        fstp dword ptr ss : [esp]
        push dword ptr ss : [esp+8]
        call dword ptr ds : [public_6d6cabc]
        ret 8
        UNREACHABLE_TRAP(0x6d3db85)
    }
}
