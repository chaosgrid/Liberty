#include "Common-PCH.h"


#define public_62f7bb7 _public_62f7bb7
#define public_62f7bca _public_62f7bca
#define public_62f7bdd _public_62f7bdd

PROC_DECLARE(0x62f7ba0, internal_62f7ba0, public_62f7ba0);
extern "C" NAKED register_t __cdecl internal_62f7ba0()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+4]
        fld dword ptr ds : [edx+0xC]
        fcomp dword ptr ds : [ecx+0xC]
        fnstsw ax
        test ah, 0x44
        jnp public_62f7bb7
        mov eax, dword ptr ds : [edx+0xC]
        mov dword ptr ds : [ecx+0xC], eax
        public_62f7bb7 : nop
        fld dword ptr ds : [edx+0x10]
        fcomp dword ptr ds : [ecx+0x10]
        fnstsw ax
        test ah, 0x44
        jnp public_62f7bca
        mov eax, dword ptr ds : [edx+0x10]
        mov dword ptr ds : [ecx+0x10], eax
        public_62f7bca : nop
        fld dword ptr ds : [edx+8]
        fcomp dword ptr ds : [ecx+8]
        fnstsw ax
        test ah, 0x44
        jnp public_62f7bdd
        mov edx, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx+8], edx
        public_62f7bdd : nop
        ret 4
        UNREACHABLE_TRAP(0x62f7ba0)
    }
}

#undef public_62f7bb7
#undef public_62f7bca
#undef public_62f7bdd
