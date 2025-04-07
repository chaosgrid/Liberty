#include "Freelancer-PCH.h"

PROC_DECLARE(0x504940, internal_504940, public_504940);
extern "C" NAKED register_t __cdecl internal_504940()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5dacb0]
        mov dword ptr ds : [public_674ffc], eax
        ret 
        UNREACHABLE_TRAP(0x504940)
    }
}
