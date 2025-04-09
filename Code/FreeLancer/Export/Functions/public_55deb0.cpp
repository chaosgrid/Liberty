#include "FreeLancer-PCH.h"

PROC_DECLARE(0x55deb0, internal_55deb0, public_55deb0);
extern "C" NAKED register_t __cdecl internal_55deb0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5e18f0]
        mov dword ptr ds : [public_679b04], eax
        ret 
        UNREACHABLE_TRAP(0x55deb0)
    }
}
