#include "FreeLancer-PCH.h"

PROC_DECLARE(0x55dea0, internal_55dea0, public_55dea0);
extern "C" NAKED register_t __cdecl internal_55dea0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5e18ec]
        mov dword ptr ds : [public_679b08], eax
        ret 
        UNREACHABLE_TRAP(0x55dea0)
    }
}
