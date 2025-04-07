#include "Freelancer-PCH.h"

PROC_DECLARE(0x4a6ac0, internal_4a6ac0, public_4a6ac0);
extern "C" NAKED register_t __cdecl internal_4a6ac0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5d4608]
        mov dword ptr ds : [public_672170], eax
        ret 
        UNREACHABLE_TRAP(0x4a6ac0)
    }
}
