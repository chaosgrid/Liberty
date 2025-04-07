#include "Freelancer-PCH.h"

PROC_DECLARE(0x4be5b0, internal_4be5b0, public_4be5b0);
extern "C" NAKED register_t __cdecl internal_4be5b0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5d6018]
        mov dword ptr ds : [public_6724a0], eax
        ret 
        UNREACHABLE_TRAP(0x4be5b0)
    }
}
