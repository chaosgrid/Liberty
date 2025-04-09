#include "Freelancer-PCH.h"

PROC_DECLARE(0x4e7fe0, internal_4e7fe0, public_4e7fe0);
extern "C" NAKED register_t __cdecl internal_4e7fe0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5d8ed8]
        mov dword ptr ds : [public_674b64], eax
        ret 
        UNREACHABLE_TRAP(0x4e7fe0)
    }
}
