#include "Freelancer-PCH.h"

PROC_DECLARE(0x4c9690, internal_4c9690, public_4c9690);
extern "C" NAKED register_t __cdecl internal_4c9690()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5d710c]
        mov dword ptr ds : [public_6748f0], eax
        ret 
        UNREACHABLE_TRAP(0x4c9690)
    }
}
