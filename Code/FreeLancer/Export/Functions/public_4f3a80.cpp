#include "FreeLancer-PCH.h"

PROC_DECLARE(0x4f3a80, internal_4f3a80, public_4f3a80);
extern "C" NAKED register_t __cdecl internal_4f3a80()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5d9680]
        mov dword ptr ds : [public_674bbc], eax
        ret 
        UNREACHABLE_TRAP(0x4f3a80)
    }
}
