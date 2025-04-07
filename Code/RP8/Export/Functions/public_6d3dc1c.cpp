#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d404a2);

PROC_DECLARE(0x6d3dc1c, internal_6d3dc1c, public_6d3dc1c);
extern "C" NAKED register_t __cdecl internal_6d3dc1c()
{
    __asm
    {
        push 1
        call public_6d404a2
        fld dword ptr ss : [esp+8]
        push ecx
        fstp dword ptr ss : [esp]
        push dword ptr ss : [esp+8]
        call dword ptr ds : [public_6d6cac0]
        ret 8
        UNREACHABLE_TRAP(0x6d3dc1c)
    }
}
