#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d30287);
CLANG_FORWARD_PROC_SYMBOL(public_6d3092a);

PROC_DECLARE(0x6d3092a, internal_6d3092a, public_6d3092a);
extern "C" NAKED register_t __cdecl internal_6d3092a()
{
    __asm
    {
        push dword ptr ss : [esp+0x10]
        xor ecx, ecx
        push 5
        push ecx
        push ecx
        push ecx
        or eax, 0xFFFFFFFF
        push eax
        push eax
        push 1
        push ecx
        push ecx
        push eax
        push 1
        push eax
        push eax
        push dword ptr ss : [esp+0x44]
        push dword ptr ss : [esp+0x44]
        push dword ptr ss : [esp+0x44]
        call public_6d30287
        add esp, 0x44
        ret 0x10
        UNREACHABLE_TRAP(0x6d3092a)
    }
}
