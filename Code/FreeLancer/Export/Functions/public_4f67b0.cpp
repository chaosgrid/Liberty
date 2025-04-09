#include "Freelancer-PCH.h"

PROC_DECLARE(0x4f67b0, internal_4f67b0, public_4f67b0);
extern "C" NAKED register_t __cdecl internal_4f67b0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5d98b0]
        mov dword ptr ds : [public_674c50], eax
        ret 
        UNREACHABLE_TRAP(0x4f67b0)
    }
}
