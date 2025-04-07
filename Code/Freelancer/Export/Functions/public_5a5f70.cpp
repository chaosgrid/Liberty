#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4c4cf0);

PROC_DECLARE(0x5a5f70, internal_5a5f70, public_5a5f70);
extern "C" NAKED register_t __cdecl internal_5a5f70()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        push 0
        push eax
        call public_4c4cf0
        add esp, 8
        ret 8
        UNREACHABLE_TRAP(0x5a5f70)
    }
}
