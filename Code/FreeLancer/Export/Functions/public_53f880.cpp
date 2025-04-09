#include "Freelancer-PCH.h"

PROC_DECLARE(0x53f880, internal_53f880, public_53f880);
extern "C" NAKED register_t __cdecl internal_53f880()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5df88c]
        mov dword ptr ds : [public_678ad0], eax
        ret 
        UNREACHABLE_TRAP(0x53f880)
    }
}
