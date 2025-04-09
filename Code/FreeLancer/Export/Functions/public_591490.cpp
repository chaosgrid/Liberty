#include "FreeLancer-PCH.h"

PROC_DECLARE(0x591490, internal_591490, public_591490);
extern "C" NAKED register_t __cdecl internal_591490()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5e5324]
        mov dword ptr ds : [public_67d968], eax
        ret 
        UNREACHABLE_TRAP(0x591490)
    }
}
