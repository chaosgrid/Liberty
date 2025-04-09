#include "FreeLancer-PCH.h"

PROC_DECLARE(0x53ab50, internal_53ab50, public_53ab50);
extern "C" NAKED register_t __cdecl internal_53ab50()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5dec1c]
        mov dword ptr ds : [public_6789ec], eax
        ret 
        UNREACHABLE_TRAP(0x53ab50)
    }
}
