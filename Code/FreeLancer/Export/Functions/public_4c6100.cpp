#include "FreeLancer-PCH.h"

PROC_DECLARE(0x4c6100, internal_4c6100, public_4c6100);
extern "C" NAKED register_t __cdecl internal_4c6100()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5d6d2c]
        mov dword ptr ds : [public_6733a4], eax
        ret 
        UNREACHABLE_TRAP(0x4c6100)
    }
}
