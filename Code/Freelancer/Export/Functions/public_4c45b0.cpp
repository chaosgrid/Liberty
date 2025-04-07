#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4c45b0);

PROC_DECLARE(0x4c45b0, internal_4c45b0, public_4c45b0);
extern "C" NAKED register_t __cdecl internal_4c45b0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push eax
        mov ecx, offset public_672960
        call dword ptr ds : [public_5c6370]
        ret 
        UNREACHABLE_TRAP(0x4c45b0)
    }
}
