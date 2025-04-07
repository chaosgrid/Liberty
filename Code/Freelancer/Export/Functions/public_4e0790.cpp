#include "Freelancer-PCH.h"

PROC_DECLARE(0x4e0790, internal_4e0790, public_4e0790);
extern "C" NAKED register_t __cdecl internal_4e0790()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5d8854]
        mov dword ptr ds : [public_674af4], eax
        ret 
        UNREACHABLE_TRAP(0x4e0790)
    }
}
