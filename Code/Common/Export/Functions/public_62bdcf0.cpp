#include "Common-PCH.h"


#define public_62bdd00 _public_62bdd00
#define public_62bdd20 _public_62bdd20
#define public_62bdd26 _public_62bdd26
#define public_62bdd2a _public_62bdd2a

PROC_DECLARE(0x62bdcf0, internal_62bdcf0, public_62bdcf0);
extern "C" NAKED register_t __cdecl internal_62bdcf0()
{
    __asm
    {
        mov edx, dword ptr ds : [ecx+0x2C]
        mov ecx, dword ptr ds : [edx]
        push ebx
        xor bl, bl
        cmp ecx, edx
        je public_62bdd26
        lea esp, ss:[esp]
        public_62bdd00 : nop
        fld dword ptr ds : [ecx+0x14]
        fcomp dword ptr ds : [public_6399408]
        fnstsw ax
        test ah, 0x41
        jp public_62bdd20
        fld dword ptr ds : [ecx+0x18]
        fcomp dword ptr ds : [public_639a1d0]
        fnstsw ax
        test ah, 1
        je public_62bdd2a
        public_62bdd20 : nop
        mov ecx, dword ptr ds : [ecx]
        cmp ecx, edx
        jne public_62bdd00
        public_62bdd26 : nop
        mov al, bl
        pop ebx
        ret 
        public_62bdd2a : nop
        mov al, 1
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x62bdcf0)
    }
}

#undef public_62bdd00
#undef public_62bdd20
#undef public_62bdd26
#undef public_62bdd2a
