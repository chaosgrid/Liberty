#include "Freelancer-PCH.h"

PROC_DECLARE(0x4fd8f0, internal_4fd8f0, public_4fd8f0);
extern "C" NAKED register_t __cdecl internal_4fd8f0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5da3f0]
        mov dword ptr ds : [public_674f84], eax
        ret 
        UNREACHABLE_TRAP(0x4fd8f0)
    }
}
