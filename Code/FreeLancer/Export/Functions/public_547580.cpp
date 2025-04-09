#include "FreeLancer-PCH.h"

PROC_DECLARE(0x547580, internal_547580, public_547580);
extern "C" NAKED register_t __cdecl internal_547580()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5e0264]
        mov dword ptr ds : [public_678b84], eax
        ret 
        UNREACHABLE_TRAP(0x547580)
    }
}
