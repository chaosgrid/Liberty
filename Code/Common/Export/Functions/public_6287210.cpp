#include "Common-PCH.h"


#define public_6287229 _public_6287229

PROC_DECLARE(0x6287210, internal_6287210, public_6287210);
extern "C" NAKED register_t __cdecl internal_6287210()
{
    __asm
    {
        fld dword ptr ds : [ecx+0x140]
        fcomp dword ptr ds : [public_639a1d0]
        fnstsw ax
        test ah, 1
        jne public_6287229
        mov eax, 1
        ret 
        public_6287229 : nop
        xor eax, eax
        ret 
        UNREACHABLE_TRAP(0x6287210)
    }
}

#undef public_6287229
