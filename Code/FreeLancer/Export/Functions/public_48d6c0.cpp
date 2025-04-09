#include "Freelancer-PCH.h"

PROC_DECLARE(0x48d6c0, internal_48d6c0, public_48d6c0);
extern "C" NAKED register_t __cdecl internal_48d6c0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5d2e2c]
        mov dword ptr ds : [public_672098], eax
        ret 
        UNREACHABLE_TRAP(0x48d6c0)
    }
}
