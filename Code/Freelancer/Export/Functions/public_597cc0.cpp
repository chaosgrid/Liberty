#include "Freelancer-PCH.h"

PROC_DECLARE(0x597cc0, internal_597cc0, public_597cc0);
extern "C" NAKED register_t __cdecl internal_597cc0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5e573c]
        mov dword ptr ds : [public_67da2c], eax
        ret 
        UNREACHABLE_TRAP(0x597cc0)
    }
}
