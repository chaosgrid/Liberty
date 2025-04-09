#include "Freelancer-PCH.h"

PROC_DECLARE(0x4e7ff0, internal_4e7ff0, public_4e7ff0);
extern "C" NAKED register_t __cdecl internal_4e7ff0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5d8edc]
        mov dword ptr ds : [public_674b60], eax
        ret 
        UNREACHABLE_TRAP(0x4e7ff0)
    }
}
