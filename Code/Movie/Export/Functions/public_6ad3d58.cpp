#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ad3d2c);
CLANG_FORWARD_PROC_SYMBOL(public_6ad3d58);
CLANG_FORWARD_PROC_SYMBOL(public_6ad7f5b);

PROC_DECLARE(0x6ad3d58, internal_6ad3d58, public_6ad3d58);
extern "C" NAKED register_t __cdecl internal_6ad3d58()
{
    __asm
    {
        push ebp
        mov ebp, esp
        sub esp, 0xC
        xor eax, eax
        push eax
        push eax
        push eax
        push eax
        push dword ptr ss : [ebp+0xC]
        lea eax, ss:[ebp+0xC]
        push eax
        lea eax, ss:[ebp-0xC]
        push eax
        call public_6ad7f5b
        push dword ptr ss : [ebp+8]
        lea eax, ss:[ebp-0xC]
        push eax
        call public_6ad3d2c
        add esp, 0x24
        leave 
        ret 
        UNREACHABLE_TRAP(0x6ad3d58)
    }
}
