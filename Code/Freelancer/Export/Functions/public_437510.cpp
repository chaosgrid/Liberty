#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4c3e20);

PROC_DECLARE(0x437510, internal_437510, public_437510);
extern "C" NAKED register_t __cdecl internal_437510()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        push eax
        call public_4c3e20
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x437510)
    }
}
