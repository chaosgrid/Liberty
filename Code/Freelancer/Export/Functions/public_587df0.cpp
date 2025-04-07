#include "Freelancer-PCH.h"

PROC_DECLARE(0x587df0, internal_587df0, public_587df0);
extern "C" NAKED register_t __cdecl internal_587df0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5e4d64]
        mov dword ptr ds : [public_67c534], eax
        ret 
        UNREACHABLE_TRAP(0x587df0)
    }
}
