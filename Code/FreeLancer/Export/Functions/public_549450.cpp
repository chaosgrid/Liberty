#include "FreeLancer-PCH.h"


#define public_549469 _public_549469

PROC_DECLARE(0x549450, internal_549450, public_549450);
extern "C" NAKED register_t __cdecl internal_549450()
{
    __asm
    {
        fld dword ptr ds : [ecx+0x144]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 0x44
        jp public_549469
        mov eax, 1
        ret 
        public_549469 : nop
        xor eax, eax
        ret 
        UNREACHABLE_TRAP(0x549450)
    }
}

#undef public_549469
