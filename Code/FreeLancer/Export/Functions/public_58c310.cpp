#include "Freelancer-PCH.h"

PROC_DECLARE(0x58c310, internal_58c310, public_58c310);
extern "C" NAKED register_t __cdecl internal_58c310()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5e50e4]
        mov dword ptr ds : [public_67d8d4], eax
        ret 
        UNREACHABLE_TRAP(0x58c310)
    }
}
