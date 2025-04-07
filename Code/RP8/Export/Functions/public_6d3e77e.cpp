#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d3e66b);

PROC_DECLARE(0x6d3e77e, internal_6d3e77e, public_6d3e77e);
extern "C" NAKED register_t __cdecl internal_6d3e77e()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x20
        fld dword ptr ss : [ebp+0x1C]
        push ecx
        fstp dword ptr ss : [esp]
        push dword ptr ss : [ebp+0x18]
        lea eax, ss:[ebp-0x20]
        push dword ptr ss : [ebp+0xC]
        push eax
        call public_6d3e66b
        fld dword ptr ss : [ebp+0x1C]
        push ecx
        fstp dword ptr ss : [esp]
        push dword ptr ss : [ebp+0x14]
        lea eax, ss:[ebp-0x10]
        push dword ptr ss : [ebp+0x10]
        push eax
        call public_6d3e66b
        fld1 
        fsub dword ptr ss : [ebp+0x1C]
        push ecx
        lea eax, ss:[ebp-0x10]
        fmul dword ptr ss : [ebp+0x1C]
        fadd st(0), st
        fstp dword ptr ss : [esp]
        push eax
        lea eax, ss:[ebp-0x20]
        push eax
        push dword ptr ss : [ebp+8]
        call public_6d3e66b
        mov eax, dword ptr ss : [ebp+8]
        leave 
        ret 0x18
        UNREACHABLE_TRAP(0x6d3e77e)
    }
}
