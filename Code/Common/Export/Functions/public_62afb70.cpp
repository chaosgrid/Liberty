#include "Common-PCH.h"


#define public_62afb99 _public_62afb99

PROC_DECLARE(0x62afb70, internal_62afb70, public_62afb70);
extern "C" NAKED register_t __cdecl internal_62afb70()
{
    __asm
    {
        fld dword ptr ds : [ecx+0xEC]
        fcomp dword ptr ds : [public_6399408]
        fnstsw ax
        test ah, 5
        jnp public_62afb99
        fld dword ptr ds : [ecx+0xEC]
        fcomp dword ptr ds : [public_6399408]
        fnstsw ax
        test ah, 0x41
        je public_62afb99
        xor al, al
        ret 
        public_62afb99 : nop
        mov al, 1
        ret 
        UNREACHABLE_TRAP(0x62afb70)
    }
}

#undef public_62afb99
