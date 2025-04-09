#include "Freelancer-PCH.h"

PROC_DECLARE(0x5a5950, internal_5a5950, public_5a5950);
extern "C" NAKED register_t __cdecl internal_5a5950()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5e63f4]
        mov dword ptr ds : [public_67e7a8], eax
        ret 
        UNREACHABLE_TRAP(0x5a5950)
    }
}
