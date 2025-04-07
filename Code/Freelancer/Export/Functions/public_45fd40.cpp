#include "Freelancer-PCH.h"

PROC_DECLARE(0x45fd40, internal_45fd40, public_45fd40);
extern "C" NAKED register_t __cdecl internal_45fd40()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5cef18]
        mov dword ptr ds : [public_66d4ac], eax
        ret 
        UNREACHABLE_TRAP(0x45fd40)
    }
}
