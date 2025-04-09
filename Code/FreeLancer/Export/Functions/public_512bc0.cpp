#include "Freelancer-PCH.h"

PROC_DECLARE(0x512bc0, internal_512bc0, public_512bc0);
extern "C" NAKED register_t __cdecl internal_512bc0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5db6ec]
        mov dword ptr ds : [public_6751a8], eax
        ret 
        UNREACHABLE_TRAP(0x512bc0)
    }
}
