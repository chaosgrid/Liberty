#include "FreeLancer-PCH.h"

PROC_DECLARE(0x410120, internal_410120, public_410120);
extern "C" NAKED register_t __cdecl internal_410120()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5c8910]
        mov dword ptr ds : [public_6164d0], eax
        ret 
        UNREACHABLE_TRAP(0x410120)
    }
}
