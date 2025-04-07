#include "Common-PCH.h"


#define public_6287262 _public_6287262

PROC_DECLARE(0x6287240, internal_6287240, public_6287240);
extern "C" NAKED register_t __cdecl internal_6287240()
{
    __asm
    {
        test byte ptr ds : [ecx+0xA0], 1
        je public_6287262
        fld dword ptr ds : [ecx+0x140]
        fcomp dword ptr ds : [public_639a1d0]
        fnstsw ax
        test ah, 1
        je public_6287262
        mov eax, 1
        ret 
        public_6287262 : nop
        xor eax, eax
        ret 
        UNREACHABLE_TRAP(0x6287240)
    }
}

#undef public_6287262
