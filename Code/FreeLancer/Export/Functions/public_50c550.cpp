#include "FreeLancer-PCH.h"

PROC_DECLARE(0x50c550, internal_50c550, public_50c550);
extern "C" NAKED register_t __cdecl internal_50c550()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5db530]
        mov dword ptr ds : [public_675190], eax
        ret 
        UNREACHABLE_TRAP(0x50c550)
    }
}
