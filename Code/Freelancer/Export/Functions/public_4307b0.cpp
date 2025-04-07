#include "Freelancer-PCH.h"

PROC_DECLARE(0x4307b0, internal_4307b0, public_4307b0);
extern "C" NAKED register_t __cdecl internal_4307b0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5cab44]
        mov dword ptr ds : [public_667e2c], eax
        ret 
        UNREACHABLE_TRAP(0x4307b0)
    }
}
