#include "Freelancer-PCH.h"

PROC_DECLARE(0x44d2b0, internal_44d2b0, public_44d2b0);
extern "C" NAKED register_t __cdecl internal_44d2b0()
{
    __asm
    {
        mov eax, dword ptr ds : [public_5cc078]
        mov dword ptr ds : [public_668ad4], eax
        ret 
        UNREACHABLE_TRAP(0x44d2b0)
    }
}
