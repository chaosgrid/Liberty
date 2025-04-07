#include "Freelancer-PCH.h"

PROC_DECLARE(0x53e910, internal_53e910, public_53e910);
extern "C" NAKED register_t __cdecl internal_53e910()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5df80c]
        mov dword ptr ds : [public_678a10], eax
        ret 
        UNREACHABLE_TRAP(0x53e910)
    }
}
