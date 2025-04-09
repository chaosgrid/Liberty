#include "FreeLancer-PCH.h"

PROC_DECLARE(0x50c240, internal_50c240, public_50c240);
extern "C" NAKED register_t __cdecl internal_50c240()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5db354]
        mov dword ptr ds : [public_675088], eax
        ret 
        UNREACHABLE_TRAP(0x50c240)
    }
}
