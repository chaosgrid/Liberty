#include "FreeLancer-PCH.h"

PROC_DECLARE(0x556270, internal_556270, public_556270);
extern "C" NAKED register_t __cdecl internal_556270()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5e1294]
        mov dword ptr ds : [public_6799b0], eax
        ret 
        UNREACHABLE_TRAP(0x556270)
    }
}
