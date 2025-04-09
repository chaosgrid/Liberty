#include "Freelancer-PCH.h"

PROC_DECLARE(0x4c3d00, internal_4c3d00, public_4c3d00);
extern "C" NAKED register_t __cdecl internal_4c3d00()
{
    __asm
    {
        xor eax, eax
        mov dword ptr ds : [public_6728e4], eax
        mov dword ptr ds : [public_6728e8], eax
        mov dword ptr ds : [public_6728ec], eax
        mov dword ptr ds : [public_6728f0], eax
        mov dword ptr ds : [public_672914], eax
        ret 
        UNREACHABLE_TRAP(0x4c3d00)
    }
}
