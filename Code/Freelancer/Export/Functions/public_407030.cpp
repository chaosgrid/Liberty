#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4023f0);

PROC_DECLARE(0x407030, internal_407030, public_407030);
extern "C" NAKED register_t __cdecl internal_407030()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        add ecx, 4
        push ecx
        push eax
        call public_4023f0
        add esp, 8
        ret 4
        UNREACHABLE_TRAP(0x407030)
    }
}
