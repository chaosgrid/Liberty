#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4ba430);

PROC_DECLARE(0x53c430, internal_53c430, public_53c430);
extern "C" NAKED register_t __cdecl internal_53c430()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ss : [esp+8]
        push eax
        push ecx
        call public_4ba430
        add esp, 8
        ret 0xC
        UNREACHABLE_TRAP(0x53c430)
    }
}
