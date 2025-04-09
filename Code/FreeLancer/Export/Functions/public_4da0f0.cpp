#include "Freelancer-PCH.h"

PROC_DECLARE(0x4da0f0, internal_4da0f0, public_4da0f0);
extern "C" NAKED register_t __cdecl internal_4da0f0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5d847c]
        mov dword ptr ds : [public_674a90], eax
        ret 
        UNREACHABLE_TRAP(0x4da0f0)
    }
}
