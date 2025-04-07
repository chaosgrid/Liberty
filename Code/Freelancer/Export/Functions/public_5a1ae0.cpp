#include "Freelancer-PCH.h"

PROC_DECLARE(0x5a1ae0, internal_5a1ae0, public_5a1ae0);
extern "C" NAKED register_t __cdecl internal_5a1ae0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5e5f90]
        mov dword ptr ds : [public_67dd58], eax
        ret 
        UNREACHABLE_TRAP(0x5a1ae0)
    }
}
