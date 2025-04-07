#include "Freelancer-PCH.h"

PROC_DECLARE(0x48b2a0, internal_48b2a0, public_48b2a0);
extern "C" NAKED register_t __cdecl internal_48b2a0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5d2698]
        mov dword ptr ds : [public_672028], eax
        ret 
        UNREACHABLE_TRAP(0x48b2a0)
    }
}
