#include "Freelancer-PCH.h"

PROC_DECLARE(0x46ed40, internal_46ed40, public_46ed40);
extern "C" NAKED register_t __cdecl internal_46ed40()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5d008c]
        mov dword ptr ds : [public_66db00], eax
        ret 
        UNREACHABLE_TRAP(0x46ed40)
    }
}
