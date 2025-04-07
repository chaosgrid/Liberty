#include "Freelancer-PCH.h"

PROC_DECLARE(0x449250, internal_449250, public_449250);
extern "C" NAKED register_t __cdecl internal_449250()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5cbe8c]
        mov dword ptr ds : [public_668ab4], eax
        ret 
        UNREACHABLE_TRAP(0x449250)
    }
}
