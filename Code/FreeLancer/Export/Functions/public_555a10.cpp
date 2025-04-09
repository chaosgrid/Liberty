#include "FreeLancer-PCH.h"

PROC_DECLARE(0x555a10, internal_555a10, public_555a10);
extern "C" NAKED register_t __cdecl internal_555a10()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5e1204]
        mov dword ptr ds : [public_679994], eax
        ret 
        UNREACHABLE_TRAP(0x555a10)
    }
}
