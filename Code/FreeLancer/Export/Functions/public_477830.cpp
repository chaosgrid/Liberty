#include "FreeLancer-PCH.h"

PROC_DECLARE(0x477830, internal_477830, public_477830);
extern "C" NAKED register_t __cdecl internal_477830()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5d0e20]
        mov dword ptr ds : [public_671cdc], eax
        ret 
        UNREACHABLE_TRAP(0x477830)
    }
}
