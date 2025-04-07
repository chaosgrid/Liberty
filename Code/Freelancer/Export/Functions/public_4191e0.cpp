#include "Freelancer-PCH.h"

PROC_DECLARE(0x4191e0, internal_4191e0, public_4191e0);
extern "C" NAKED register_t __cdecl internal_4191e0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x18]
        ret 
        UNREACHABLE_TRAP(0x4191e0)
    }
}
