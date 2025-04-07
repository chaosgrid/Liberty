#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d404a2);

PROC_DECLARE(0x6d3df0a, internal_6d3df0a, public_6d3df0a);
extern "C" NAKED register_t __cdecl internal_6d3df0a()
{
    __asm
    {
        push ebp
        mov ebp, esp
        push 1
        call public_6d404a2
        fld dword ptr ss : [ebp+0xC]
        push dword ptr ss : [ebp+0x18]
        push dword ptr ss : [ebp+0x14]
        push dword ptr ss : [ebp+0x10]
        push ecx
        fstp dword ptr ss : [esp]
        push dword ptr ss : [ebp+8]
        call dword ptr ds : [public_6d6cae4]
        pop ebp
        ret 0x14
        UNREACHABLE_TRAP(0x6d3df0a)
    }
}
