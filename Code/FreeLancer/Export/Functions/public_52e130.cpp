#include "FreeLancer-PCH.h"

PROC_DECLARE(0x52e130, internal_52e130, public_52e130);
extern "C" NAKED register_t __cdecl internal_52e130()
{
    __asm
    {
        mov eax, 0x2000000
        ret 
        UNREACHABLE_TRAP(0x52e130)
    }
}
