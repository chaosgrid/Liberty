#include "Freelancer-PCH.h"

PROC_DECLARE(0x53f870, internal_53f870, public_53f870);
extern "C" NAKED register_t __cdecl internal_53f870()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5df888]
        mov dword ptr ds : [public_678ad4], eax
        ret 
        UNREACHABLE_TRAP(0x53f870)
    }
}
