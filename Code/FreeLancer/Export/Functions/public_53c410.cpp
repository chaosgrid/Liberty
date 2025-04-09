#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_48d8a0);

PROC_DECLARE(0x53c410, internal_53c410, public_53c410);
extern "C" NAKED register_t __cdecl internal_53c410()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ss : [esp+8]
        push eax
        push ecx
        call public_48d8a0
        add esp, 8
        ret 0xC
        UNREACHABLE_TRAP(0x53c410)
    }
}
