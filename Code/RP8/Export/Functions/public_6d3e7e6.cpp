#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d404a2);

PROC_DECLARE(0x6d3e7e6, internal_6d3e7e6, public_6d3e7e6);
extern "C" NAKED register_t __cdecl internal_6d3e7e6()
{
    __asm
    {
        push ebp
        mov ebp, esp
        push 1
        call public_6d404a2
        fld dword ptr ss : [ebp+0x1C]
        push ecx
        push ecx
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [ebp+0x18]
        fstp dword ptr ss : [esp]
        push dword ptr ss : [ebp+0x14]
        push dword ptr ss : [ebp+0x10]
        push dword ptr ss : [ebp+0xC]
        push dword ptr ss : [ebp+8]
        call dword ptr ds : [public_6d6cad0]
        pop ebp
        ret 0x18
        UNREACHABLE_TRAP(0x6d3e7e6)
    }
}
