#include "Freelancer-PCH.h"

PROC_DECLARE(0x4a9250, internal_4a9250, public_4a9250);
extern "C" NAKED register_t __cdecl internal_4a9250()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5d49e0]
        mov dword ptr ds : [public_672200], eax
        ret 
        UNREACHABLE_TRAP(0x4a9250)
    }
}
