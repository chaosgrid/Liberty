#include "FreeLancer-PCH.h"

PROC_DECLARE(0x4c6110, internal_4c6110, public_4c6110);
extern "C" NAKED register_t __cdecl internal_4c6110()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5d6d30]
        mov dword ptr ds : [public_6733a0], eax
        ret 
        UNREACHABLE_TRAP(0x4c6110)
    }
}
