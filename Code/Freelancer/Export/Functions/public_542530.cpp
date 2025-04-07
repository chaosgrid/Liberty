#include "Freelancer-PCH.h"

PROC_DECLARE(0x542530, internal_542530, public_542530);
extern "C" NAKED register_t __cdecl internal_542530()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5df8c4]
        mov dword ptr ds : [public_678afc], eax
        ret 
        UNREACHABLE_TRAP(0x542530)
    }
}
