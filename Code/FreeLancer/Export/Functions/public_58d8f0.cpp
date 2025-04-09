#include "Freelancer-PCH.h"


#define public_58d901 _public_58d901

PROC_DECLARE(0x58d8f0, internal_58d8f0, public_58d8f0);
extern "C" NAKED register_t __cdecl internal_58d8f0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x55C]
        test eax, eax
        jne public_58d901
        lea eax, ds:[ecx+0x40C]
        ret 
        public_58d901 : nop
        xor eax, eax
        ret 
        UNREACHABLE_TRAP(0x58d8f0)
    }
}

#undef public_58d901
