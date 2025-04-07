#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65d7845);
CLANG_FORWARD_PROC_SYMBOL(public_65d8120);
CLANG_FORWARD_PROC_SYMBOL(public_65d9f75);

PROC_DECLARE(0x65d7845, internal_65d7845, public_65d7845);
extern "C" NAKED register_t __cdecl internal_65d7845()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0x20
        mov eax, dword ptr ss : [ebp+8]
        mov dword ptr ss : [ebp-0x14], 0x49
        push eax
        mov dword ptr ss : [ebp-0x18], eax
        mov dword ptr ss : [ebp-0x20], eax
        call public_65d8120
        mov dword ptr ss : [ebp-0x1C], eax
        lea eax, ss:[ebp+0x10]
        push eax
        lea eax, ss:[ebp-0x20]
        push dword ptr ss : [ebp+0xC]
        push eax
        call public_65d9f75
        add esp, 0x10
        leave 
        ret 
        UNREACHABLE_TRAP(0x65d7845)
    }
}
