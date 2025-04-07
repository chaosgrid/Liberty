#include "Common-PCH.h"


#define public_62b447f _public_62b447f
#define public_62b4481 _public_62b4481
#define public_62b449b _public_62b449b
#define public_62b44ed _public_62b44ed

PROC_DECLARE(0x62b4440, internal_62b4440, public_62b4440);
extern "C" NAKED register_t __cdecl internal_62b4440()
{
    __asm
    {
        fld dword ptr ds : [public_6399408]
        fld dword ptr ss : [esp+0x14]
        fcomp 
        fnstsw ax
        test ah, 5
        jnp public_62b44ed
        fld dword ptr ss : [esp+0xC]
        fcomp dword ptr ds : [public_639e6b8]
        fnstsw ax
        test ah, 5
        jnp public_62b44ed
        fld dword ptr ss : [esp+0x10]
        fcomp 
        fnstsw ax
        test ah, 5
        jp public_62b447f
        fstp dword ptr ss : [esp+0x10]
        jmp public_62b4481
        public_62b447f : nop
        fstp st(0)
        public_62b4481 : nop
        fld dword ptr ss : [esp+0x14]
        fcomp dword ptr ds : [public_639e550]
        fnstsw ax
        test ah, 0x41
        jne public_62b449b
        mov eax, dword ptr ds : [public_639e550]
        mov dword ptr ss : [esp+0x14], eax
        public_62b449b : nop
        fld dword ptr ss : [esp+8]
        fdiv dword ptr ss : [esp+0xC]
        fmul dword ptr ss : [esp+4]
        fld dword ptr ds : [public_6399404]
        fdiv dword ptr ss : [esp+8]
        fmul dword ptr ss : [esp+0xC]
        fmul dword ptr ss : [esp+0x14]
        fldl2e 
        fmulp 
        fld st(0)
        frndint 
        fxch 
        fsub st, st(1)
        f2xm1 
        fld1 
        faddp 
        fscale 
        fstp st(1)
        fsubr qword ptr ds : [public_6399410]
        fld dword ptr ss : [esp+0x10]
        fsub st, st(2)
        fmul dword ptr ss : [esp+8]
        fmulp 
        fdiv dword ptr ss : [esp+0xC]
        fxch 
        fmul dword ptr ss : [esp+0x14]
        faddp 
        public_62b44ed : nop
        ret 0x14
        UNREACHABLE_TRAP(0x62b4440)
    }
}

#undef public_62b447f
#undef public_62b4481
#undef public_62b449b
#undef public_62b44ed
