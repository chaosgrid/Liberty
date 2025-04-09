#include "Freelancer-PCH.h"

PROC_DECLARE(0x48d6e0, internal_48d6e0, public_48d6e0);
extern "C" NAKED register_t __cdecl internal_48d6e0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5d2e30]
        mov dword ptr ds : [public_672090], eax
        ret 
        UNREACHABLE_TRAP(0x48d6e0)
    }
}
