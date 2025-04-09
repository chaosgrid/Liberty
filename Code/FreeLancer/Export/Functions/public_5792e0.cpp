#include "Freelancer-PCH.h"

PROC_DECLARE(0x5792e0, internal_5792e0, public_5792e0);
extern "C" NAKED register_t __cdecl internal_5792e0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5e4558]
        mov dword ptr ds : [public_67c478], eax
        ret 
        UNREACHABLE_TRAP(0x5792e0)
    }
}
