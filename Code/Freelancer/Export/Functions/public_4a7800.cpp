#include "Freelancer-PCH.h"

PROC_DECLARE(0x4a7800, internal_4a7800, public_4a7800);
extern "C" NAKED register_t __cdecl internal_4a7800()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5d477c]
        mov dword ptr ds : [public_6721b0], eax
        ret 
        UNREACHABLE_TRAP(0x4a7800)
    }
}
