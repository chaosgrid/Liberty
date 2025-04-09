#include "Freelancer-PCH.h"

PROC_DECLARE(0x4a3f90, internal_4a3f90, public_4a3f90);
extern "C" NAKED register_t __cdecl internal_4a3f90()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5d3fa4]
        mov dword ptr ds : [public_672100], eax
        ret 
        UNREACHABLE_TRAP(0x4a3f90)
    }
}
