#include "Freelancer-PCH.h"


#define public_4191dc _public_4191dc

PROC_DECLARE(0x4191d0, internal_4191d0, public_4191d0);
extern "C" NAKED register_t __cdecl internal_4191d0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+8]
        test eax, eax
        jne public_4191dc
        mov eax, dword ptr ds : [public_5c7078]
        public_4191dc : nop
        ret 
        UNREACHABLE_TRAP(0x4191d0)
    }
}

#undef public_4191dc
