#include "Freelancer-PCH.h"

PROC_DECLARE(0x4fd900, internal_4fd900, public_4fd900);
extern "C" NAKED register_t __cdecl internal_4fd900()
{
    __asm
    {
        mov dword ptr ds : [public_674f80], 0
        ret 
        UNREACHABLE_TRAP(0x4fd900)
    }
}
