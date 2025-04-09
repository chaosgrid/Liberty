#include "Freelancer-PCH.h"

PROC_DECLARE(0x4d7560, internal_4d7560, public_4d7560);
extern "C" NAKED register_t __cdecl internal_4d7560()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5d827c]
        mov dword ptr ds : [public_674a48], eax
        ret 
        UNREACHABLE_TRAP(0x4d7560)
    }
}
