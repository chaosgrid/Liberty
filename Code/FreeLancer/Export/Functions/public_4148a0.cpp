#include "Freelancer-PCH.h"

PROC_DECLARE(0x4148a0, internal_4148a0, public_4148a0);
extern "C" NAKED register_t __cdecl internal_4148a0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0xC]
        ret 
        UNREACHABLE_TRAP(0x4148a0)
    }
}
