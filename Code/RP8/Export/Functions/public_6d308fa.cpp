#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d30287);
CLANG_FORWARD_PROC_SYMBOL(public_6d308fa);

PROC_DECLARE(0x6d308fa, internal_6d308fa, public_6d308fa);
extern "C" NAKED register_t __cdecl internal_6d308fa()
{
    __asm
    {
        push dword ptr ss : [esp+0x10]
        xor ecx, ecx
        push 3
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
        UNREACHABLE_TRAP(0x6d308fa)
    }
}
