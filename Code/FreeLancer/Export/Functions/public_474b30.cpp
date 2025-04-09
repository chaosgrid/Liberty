#include "Freelancer-PCH.h"

PROC_DECLARE(0x474b30, internal_474b30, public_474b30);
extern "C" NAKED register_t __cdecl internal_474b30()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5d09b8]
        mov dword ptr ds : [public_66dc4c], eax
        ret 
        UNREACHABLE_TRAP(0x474b30)
    }
}
