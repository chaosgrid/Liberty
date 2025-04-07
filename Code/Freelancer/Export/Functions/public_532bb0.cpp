#include "Freelancer-PCH.h"

PROC_DECLARE(0x532bb0, internal_532bb0, public_532bb0);
extern "C" NAKED register_t __cdecl internal_532bb0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5de19c]
        mov dword ptr ds : [public_675534], eax
        ret 
        UNREACHABLE_TRAP(0x532bb0)
    }
}
