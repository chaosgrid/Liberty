#include "Freelancer-PCH.h"


#define public_42a0b8 _public_42a0b8
#define public_42a0ba _public_42a0ba

PROC_DECLARE(0x42a0a0, internal_42a0a0, public_42a0a0);
extern "C" NAKED register_t __cdecl internal_42a0a0()
{
    __asm
    {
        mov al, byte ptr ds : [ecx+0x3C]
        xor dl, dl
        test al, al
        je public_42a0b8
        fld dword ptr ds : [ecx+0x1C]
        fcomp dword ptr ds : [ecx+0x34]
        fnstsw ax
        mov al, 1
        test ah, 0x41
        jnp public_42a0ba
        public_42a0b8 : nop
        mov al, dl
        public_42a0ba : nop
        ret 
        UNREACHABLE_TRAP(0x42a0a0)
    }
}

#undef public_42a0b8
#undef public_42a0ba
