#include "Freelancer-PCH.h"

PROC_DECLARE(0x420d00, internal_420d00, public_420d00);
extern "C" NAKED register_t __cdecl internal_420d00()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5c968c]
        mov dword ptr ds : [public_616864], eax
        ret 
        UNREACHABLE_TRAP(0x420d00)
    }
}
