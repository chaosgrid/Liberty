#include "FreeLancer-PCH.h"

PROC_DECLARE(0x537490, internal_537490, public_537490);
extern "C" NAKED register_t __cdecl internal_537490()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5de690]
        mov dword ptr ds : [public_6789b8], eax
        ret 
        UNREACHABLE_TRAP(0x537490)
    }
}
