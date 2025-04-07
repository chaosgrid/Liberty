#include "Freelancer-PCH.h"

PROC_DECLARE(0x504950, internal_504950, public_504950);
extern "C" NAKED register_t __cdecl internal_504950()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5dacb0]
        mov dword ptr ds : [public_674ff8], eax
        ret 
        UNREACHABLE_TRAP(0x504950)
    }
}
