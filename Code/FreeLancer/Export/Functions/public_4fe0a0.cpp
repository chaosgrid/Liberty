#include "FreeLancer-PCH.h"

PROC_DECLARE(0x4fe0a0, internal_4fe0a0, public_4fe0a0);
extern "C" NAKED register_t __cdecl internal_4fe0a0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5da4c8]
        mov dword ptr ds : [public_674fac], eax
        ret 
        UNREACHABLE_TRAP(0x4fe0a0)
    }
}
