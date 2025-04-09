#include "FreeLancer-PCH.h"

PROC_DECLARE(0x471710, internal_471710, public_471710);
extern "C" NAKED register_t __cdecl internal_471710()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5d0330]
        mov dword ptr ds : [public_66db3c], eax
        ret 
        UNREACHABLE_TRAP(0x471710)
    }
}
