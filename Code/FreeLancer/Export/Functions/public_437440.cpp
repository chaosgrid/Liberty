#include "FreeLancer-PCH.h"

PROC_DECLARE(0x437440, internal_437440, public_437440);
extern "C" NAKED register_t __cdecl internal_437440()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5caed0]
        mov dword ptr ds : [public_6686ec], eax
        ret 
        UNREACHABLE_TRAP(0x437440)
    }
}
