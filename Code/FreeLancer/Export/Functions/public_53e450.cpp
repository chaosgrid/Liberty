#include "Freelancer-PCH.h"

PROC_DECLARE(0x53e450, internal_53e450, public_53e450);
extern "C" NAKED register_t __cdecl internal_53e450()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5df53c]
        mov dword ptr ds : [public_678a00], eax
        ret 
        UNREACHABLE_TRAP(0x53e450)
    }
}
