#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d41da6);
CLANG_FORWARD_PROC_SYMBOL(public_6d41e65);
CLANG_FORWARD_PROC_SYMBOL(public_6d41e9f);

PROC_DECLARE(0x6d41e9f, internal_6d41e9f, public_6d41e9f);
extern "C" NAKED register_t __cdecl internal_6d41e9f()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x50
        push dword ptr ss : [ebp+0xC]
        lea ecx, ss:[ebp-0x50]
        push dword ptr ss : [ebp+8]
        call public_6d41da6
        lea eax, ss:[ebp-0x50]
        push eax
        push dword ptr ss : [ebp+8]
        call public_6d41e65
        add esp, 0x10
        leave 
        ret 
        UNREACHABLE_TRAP(0x6d41e9f)
    }
}
