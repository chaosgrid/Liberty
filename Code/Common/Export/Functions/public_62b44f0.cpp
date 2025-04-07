#include "Common-PCH.h"


#define public_62b452f _public_62b452f

PROC_DECLARE(0x62b44f0, internal_62b44f0, public_62b44f0);
extern "C" NAKED register_t __cdecl internal_62b44f0()
{
    __asm
    {
        fld dword ptr ds : [public_6399408]
        fld dword ptr ss : [esp+4]
        fcomp 
        fnstsw ax
        test ah, 0x41
        jnp public_62b452f
        fld dword ptr ss : [esp+0xC]
        fcomp dword ptr ds : [public_639e6b8]
        fnstsw ax
        test ah, 5
        jnp public_62b452f
        fld dword ptr ss : [esp+8]
        fcomp 
        fnstsw ax
        test ah, 5
        jnp public_62b452f
        fstp st(0)
        fld dword ptr ss : [esp+4]
        fdiv dword ptr ss : [esp+8]
        fmul dword ptr ss : [esp+0xC]
        public_62b452f : nop
        ret 0xC
        UNREACHABLE_TRAP(0x62b44f0)
    }
}

#undef public_62b452f
