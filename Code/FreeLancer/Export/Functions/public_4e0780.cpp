#include "FreeLancer-PCH.h"

PROC_DECLARE(0x4e0780, internal_4e0780, public_4e0780);
extern "C" NAKED register_t __cdecl internal_4e0780()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5d8854]
        mov dword ptr ds : [public_674af8], eax
        ret 
        UNREACHABLE_TRAP(0x4e0780)
    }
}
