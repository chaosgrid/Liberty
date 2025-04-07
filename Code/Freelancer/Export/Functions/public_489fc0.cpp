#include "Freelancer-PCH.h"

PROC_DECLARE(0x489fc0, internal_489fc0, public_489fc0);
extern "C" NAKED register_t __cdecl internal_489fc0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5d24b0]
        mov dword ptr ds : [public_671fe8], eax
        ret 
        UNREACHABLE_TRAP(0x489fc0)
    }
}
