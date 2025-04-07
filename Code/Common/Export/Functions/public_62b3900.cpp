#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62b3900);
CLANG_FORWARD_PROC_SYMBOL(public_62b4540);

#define public_62b3934 _public_62b3934
#define public_62b394f _public_62b394f
#define public_62b3968 _public_62b3968
#define public_62b39e7 _public_62b39e7
#define public_62b3a07 _public_62b3a07
#define public_62b3a20 _public_62b3a20
#define public_62b3a39 _public_62b3a39
#define public_62b3a90 _public_62b3a90

PROC_DECLARE(0x62b3900, internal_62b3900, public_62b3900);
extern "C" NAKED register_t __cdecl internal_62b3900()
{
    __asm
    {
        fld dword ptr ss : [esp+0xC]
        sub esp, 0xC
        fcomp dword ptr ds : [public_6399408]
        push esi
        mov esi, ecx
        fnstsw ax
        test ah, 5
        jnp public_62b3a90
        fld dword ptr ss : [esp+0x18]
        fcomp dword ptr ds : [public_6399408]
        fnstsw ax
        test ah, 5
        jp public_62b3934
        mov dword ptr ss : [esp+0x18], 0
        public_62b3934 : nop
        fld dword ptr ss : [esp+0x14]
        fcomp dword ptr ds : [public_639a1d0]
        fnstsw ax
        test ah, 0x41
        jne public_62b394f
        mov dword ptr ss : [esp+0x14], 0x3F800000
        jmp public_62b3968
        public_62b394f : nop
        fld dword ptr ss : [esp+0x14]
        fcomp dword ptr ds : [public_6399404]
        fnstsw ax
        test ah, 5
        jp public_62b3968
        mov dword ptr ss : [esp+0x14], 0xBF800000
        public_62b3968 : nop
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax+0x6C]
        fst dword ptr ss : [esp+8]
        fcomp qword ptr ds : [public_639e6b0]
        fnstsw ax
        test ah, 0x41
        jne public_62b3a90
        mov eax, dword ptr ss : [esp+0x20]
        lea ecx, ss:[esp+4]
        push ecx
        mov ecx, dword ptr ss : [esp+0x18]
        lea edx, ss:[esp+0x10]
        push edx
        push eax
        push ecx
        mov ecx, esi
        mov dword ptr ss : [esp+0x1C], 0
        mov dword ptr ss : [esp+0x14], 0
        call public_62b4540
        fld dword ptr ss : [esp+0x1C]
        fld dword ptr ss : [esp+0xC]
        mov edx, dword ptr ss : [esp+0x18]
        fdiv dword ptr ss : [esp+8]
        mov dword ptr ss : [esp+0x14], edx
        fstp dword ptr ss : [esp+0x20]
        fld dword ptr ss : [esp+0x1C]
        fcomp dword ptr ds : [public_6399408]
        fnstsw ax
        test ah, 5
        jp public_62b39e7
        fstp st(0)
        pop esi
        fld dword ptr ds : [public_6399408]
        add esp, 0xC
        ret 0x10
        public_62b39e7 : nop
        fld dword ptr ss : [esp+4]
        fcomp dword ptr ds : [public_639e6b8]
        fnstsw ax
        test ah, 5
        jp public_62b3a07
        fstp st(0)
        pop esi
        fld dword ptr ds : [public_6399408]
        add esp, 0xC
        ret 0x10
        public_62b3a07 : nop
        fld dword ptr ss : [esp+0x18]
        fcomp dword ptr ds : [public_6399408]
        fnstsw ax
        test ah, 5
        jp public_62b3a20
        mov dword ptr ss : [esp+0x14], 0
        public_62b3a20 : nop
        fld dword ptr ss : [esp+0x1C]
        fcomp dword ptr ds : [public_639e550]
        fnstsw ax
        test ah, 0x41
        jne public_62b3a39
        fstp st(0)
        fld dword ptr ds : [public_639e550]
        public_62b3a39 : nop
        fld dword ptr ss : [esp+8]
        pop esi
        fdiv dword ptr ss : [esp]
        fmul dword ptr ss : [esp+0x1C]
        fld dword ptr ds : [public_6399404]
        fdiv dword ptr ss : [esp+4]
        fmul st, st(2)
        fmul dword ptr ss : [esp]
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
        fmul dword ptr ss : [esp+4]
        fmulp 
        fdiv dword ptr ss : [esp]
        fxch 
        fmul st, st(2)
        faddp 
        fstp st(1)
        add esp, 0xC
        ret 0x10
        public_62b3a90 : nop
        fld dword ptr ds : [public_6399408]
        pop esi
        add esp, 0xC
        ret 0x10
        UNREACHABLE_TRAP(0x62b3900)
    }
}

#undef public_62b3934
#undef public_62b394f
#undef public_62b3968
#undef public_62b39e7
#undef public_62b3a07
#undef public_62b3a20
#undef public_62b3a39
#undef public_62b3a90
