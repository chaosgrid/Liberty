#include "Common-PCH.h"


#define public_62bdd60 _public_62bdd60
#define public_62bdd7c _public_62bdd7c
#define public_62bdd82 _public_62bdd82
#define public_62bdd88 _public_62bdd88

PROC_DECLARE(0x62bdd30, internal_62bdd30, public_62bdd30);
extern "C" NAKED register_t __cdecl internal_62bdd30()
{
    __asm
    {
        fld dword ptr ss : [esp+4]
        push ebx
        fcomp dword ptr ds : [public_6399408]
        xor bl, bl
        fnstsw ax
        test ah, 1
        jne public_62bdd82
        fld dword ptr ss : [esp+8]
        fcomp dword ptr ds : [public_639a1d0]
        fnstsw ax
        test ah, 0x41
        jp public_62bdd82
        mov edx, dword ptr ds : [ecx+0x2C]
        mov ecx, dword ptr ds : [edx]
        cmp ecx, edx
        je public_62bdd82
        mov edi, edi
        public_62bdd60 : nop
        fld dword ptr ds : [ecx+0x14]
        fcomp dword ptr ss : [esp+8]
        fnstsw ax
        test ah, 0x41
        jp public_62bdd7c
        fld dword ptr ss : [esp+8]
        fcomp dword ptr ds : [ecx+0x18]
        fnstsw ax
        test ah, 0x41
        jnp public_62bdd88
        public_62bdd7c : nop
        mov ecx, dword ptr ds : [ecx]
        cmp ecx, edx
        jne public_62bdd60
        public_62bdd82 : nop
        mov al, bl
        pop ebx
        ret 4
        public_62bdd88 : nop
        mov al, 1
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x62bdd30)
    }
}

#undef public_62bdd60
#undef public_62bdd7c
#undef public_62bdd82
#undef public_62bdd88
