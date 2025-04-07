#include "Freelancer-PCH.h"

PROC_DECLARE(0x4510d0, internal_4510d0, public_4510d0);
extern "C" NAKED register_t __cdecl internal_4510d0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5cce20]
        mov dword ptr ds : [public_66d114], eax
        ret 
        UNREACHABLE_TRAP(0x4510d0)
    }
}
