#include "Freelancer-PCH.h"

PROC_DECLARE(0x5b0150, internal_5b0150, public_5b0150);
extern "C" NAKED register_t __cdecl internal_5b0150()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5e6618]
        mov dword ptr ds : [public_67ec94], eax
        ret 
        UNREACHABLE_TRAP(0x5b0150)
    }
}
