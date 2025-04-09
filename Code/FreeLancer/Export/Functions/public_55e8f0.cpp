#include "FreeLancer-PCH.h"

PROC_DECLARE(0x55e8f0, internal_55e8f0, public_55e8f0);
extern "C" NAKED register_t __cdecl internal_55e8f0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5e1910]
        mov dword ptr ds : [public_679b40], eax
        ret 
        UNREACHABLE_TRAP(0x55e8f0)
    }
}
