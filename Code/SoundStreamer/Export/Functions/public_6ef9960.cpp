#include "SoundStreamer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef9934);
CLANG_FORWARD_PROC_SYMBOL(public_6ef9960);
CLANG_FORWARD_PROC_SYMBOL(public_6efacd3);

PROC_DECLARE(0x6ef9960, internal_6ef9960, public_6ef9960);
extern "C" NAKED register_t __cdecl internal_6ef9960()
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
        call public_6efacd3
        push dword ptr ss : [ebp+8]
        lea eax, ss:[ebp-0xC]
        push eax
        call public_6ef9934
        add esp, 0x24
        leave 
        ret 
        UNREACHABLE_TRAP(0x6ef9960)
    }
}
