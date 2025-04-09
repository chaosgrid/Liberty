#include "Freelancer-PCH.h"

PROC_DECLARE(0x4da0d0, internal_4da0d0, public_4da0d0);
extern "C" NAKED register_t __cdecl internal_4da0d0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5d8478]
        mov dword ptr ds : [public_674a98], eax
        ret 
        UNREACHABLE_TRAP(0x4da0d0)
    }
}
