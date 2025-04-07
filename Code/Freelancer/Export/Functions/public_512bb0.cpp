#include "Freelancer-PCH.h"

PROC_DECLARE(0x512bb0, internal_512bb0, public_512bb0);
extern "C" NAKED register_t __cdecl internal_512bb0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5db6ec]
        mov dword ptr ds : [public_6751ac], eax
        ret 
        UNREACHABLE_TRAP(0x512bb0)
    }
}
