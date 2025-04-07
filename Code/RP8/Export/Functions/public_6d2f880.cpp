#include "RP8-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d2f7cd);
CLANG_FORWARD_PROC_SYMBOL(public_6d2f880);

PROC_DECLARE(0x6d2f880, internal_6d2f880, public_6d2f880);
extern "C" NAKED register_t __cdecl internal_6d2f880()
{
    __asm
    {
        push ebp
        mov ebp, esp
        push 0
        push dword ptr ss : [ebp+0x18]
        push dword ptr ss : [ebp+0x14]
        push dword ptr ss : [ebp+0x10]
        push dword ptr ss : [ebp+0xC]
        push dword ptr ss : [ebp+8]
        call public_6d2f7cd
        add esp, 0x18
        pop ebp
        ret 0x14
        UNREACHABLE_TRAP(0x6d2f880)
    }
}
