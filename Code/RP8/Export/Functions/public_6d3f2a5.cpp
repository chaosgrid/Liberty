#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d3dde3);
CLANG_FORWARD_PROC_SYMBOL(public_6d3e2c6);

PROC_DECLARE(0x6d3f2a5, internal_6d3f2a5, public_6d3f2a5);
extern "C" NAKED register_t __cdecl internal_6d3f2a5()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x10
        fld dword ptr ss : [ebp+0x14]
        sub esp, 0xC
        fstp dword ptr ss : [esp+8]
        lea eax, ss:[ebp-0x10]
        fld dword ptr ss : [ebp+0x10]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [ebp+0xC]
        fstp dword ptr ss : [esp]
        push eax
        call public_6d3e2c6
        lea eax, ss:[ebp-0x10]
        push eax
        push dword ptr ss : [ebp+8]
        call public_6d3dde3
        mov eax, dword ptr ss : [ebp+8]
        leave 
        ret 0x10
        UNREACHABLE_TRAP(0x6d3f2a5)
    }
}
