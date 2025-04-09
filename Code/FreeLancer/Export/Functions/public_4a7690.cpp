#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_41dda0);
CLANG_FORWARD_PROC_SYMBOL(public_42d6f0);
CLANG_FORWARD_PROC_SYMBOL(public_4a7690);

PROC_DECLARE(0x4a7690, internal_4a7690, public_4a7690);
extern "C" NAKED register_t __cdecl internal_4a7690()
{
    __asm
    {
        push 0
        call public_42d6f0
        mov eax, dword ptr ss : [esp+8]
        add esp, 4
        mov dword ptr ss : [esp+4], eax
        jmp public_41dda0
        UNREACHABLE_TRAP(0x4a7690)
    }
}
