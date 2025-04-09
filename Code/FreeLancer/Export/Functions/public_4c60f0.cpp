#include "FreeLancer-PCH.h"

PROC_DECLARE(0x4c60f0, internal_4c60f0, public_4c60f0);
extern "C" NAKED register_t __cdecl internal_4c60f0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5d6d2c]
        mov dword ptr ds : [public_6733a8], eax
        ret 
        UNREACHABLE_TRAP(0x4c60f0)
    }
}
