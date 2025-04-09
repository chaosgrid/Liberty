#include "Freelancer-PCH.h"

PROC_DECLARE(0x420ce0, internal_420ce0, public_420ce0);
extern "C" NAKED register_t __cdecl internal_420ce0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5c9688]
        mov dword ptr ds : [public_61686c], eax
        ret 
        UNREACHABLE_TRAP(0x420ce0)
    }
}
