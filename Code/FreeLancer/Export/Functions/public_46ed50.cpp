#include "FreeLancer-PCH.h"

PROC_DECLARE(0x46ed50, internal_46ed50, public_46ed50);
extern "C" NAKED register_t __cdecl internal_46ed50()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5d008c]
        mov dword ptr ds : [public_66dafc], eax
        ret 
        UNREACHABLE_TRAP(0x46ed50)
    }
}
