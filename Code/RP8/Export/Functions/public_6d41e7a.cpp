#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d41da6);
CLANG_FORWARD_PROC_SYMBOL(public_6d41e47);
CLANG_FORWARD_PROC_SYMBOL(public_6d41e7a);

PROC_DECLARE(0x6d41e7a, internal_6d41e7a, public_6d41e7a);
extern "C" NAKED register_t __cdecl internal_6d41e7a()
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
        call public_6d41e47
        UNREACHABLE_TRAP(0x6d41e7a)
    }
}
