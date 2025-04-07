#include "SoundStreamer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef994a);
CLANG_FORWARD_PROC_SYMBOL(public_6ef998d);
CLANG_FORWARD_PROC_SYMBOL(public_6efacd3);

PROC_DECLARE(0x6ef998d, internal_6ef998d, public_6ef998d);
extern "C" NAKED register_t __cdecl internal_6ef998d()
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
        call public_6ef994a
        add esp, 0x24
        leave 
        ret 
        UNREACHABLE_TRAP(0x6ef998d)
    }
}
