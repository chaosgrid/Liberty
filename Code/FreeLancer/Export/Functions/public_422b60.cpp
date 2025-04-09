#include "Freelancer-PCH.h"

PROC_DECLARE(0x422b60, internal_422b60, public_422b60);
extern "C" NAKED register_t __cdecl internal_422b60()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5c97e8]
        mov dword ptr ds : [public_6649b8], eax
        ret 
        UNREACHABLE_TRAP(0x422b60)
    }
}
