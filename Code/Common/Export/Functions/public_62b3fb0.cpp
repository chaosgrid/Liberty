#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6284290);
CLANG_FORWARD_PROC_SYMBOL(public_62b3fb0);
CLANG_FORWARD_PROC_SYMBOL(public_62bb610);

#define public_62b3fcd _public_62b3fcd
#define public_62b3fe5 _public_62b3fe5
#define public_62b4063 _public_62b4063
#define public_62b407c _public_62b407c
#define public_62b4080 _public_62b4080
#define public_62b40ce _public_62b40ce

PROC_DECLARE(0x62b3fb0, internal_62b3fb0, public_62b3fb0);
extern "C" NAKED register_t __cdecl internal_62b3fb0()
{
    __asm
    {
        sub esp, 0x18
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x54]
        test eax, eax
        je public_62b3fcd
        lea eax, ss:[esp+0x10]
        push esi
        push eax
        call public_6284290
        add esp, 8
        jmp public_62b3fe5
        public_62b3fcd : nop
        mov dword ptr ss : [esp+0x10], 0
        mov dword ptr ss : [esp+0x14], 0
        mov dword ptr ss : [esp+0x18], 0
        public_62b3fe5 : nop
        mov ecx, dword ptr ss : [esp+0x20]
        push ecx
        push 2
        lea ecx, ds:[esi+0x230]
        call public_62bb610
        fld dword ptr ds : [esi+0x2C0]
        mov edx, dword ptr ds : [esi+0x88]
        fmul dword ptr ds : [edx+0x110]
        fxch 
        mov eax, dword ptr ss : [esp+0x28]
        fdiv dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ss : [esp+0x24]
        mov dword ptr ss : [esp+8], eax
        mov dword ptr ss : [esp+4], ecx
        pop esi
        fstp dword ptr ss : [esp+8]
        fstp dword ptr ss : [esp+0x1C]
        fld dword ptr ds : [public_6399408]
        fld dword ptr ss : [esp+0x24]
        fcomp 
        fnstsw ax
        test ah, 5
        jnp public_62b40ce
        fld dword ptr ss : [esp+0x1C]
        fcomp dword ptr ds : [public_639e6b8]
        fnstsw ax
        test ah, 5
        jnp public_62b40ce
        fld dword ptr ss : [esp+0x20]
        fcomp 
        fnstsw ax
        test ah, 5
        jnp public_62b4063
        fstp st(0)
        fld dword ptr ss : [esp]
        public_62b4063 : nop
        fld dword ptr ss : [esp+0x24]
        fcomp dword ptr ds : [public_639e550]
        fnstsw ax
        test ah, 0x41
        jne public_62b407c
        fld dword ptr ds : [public_639e550]
        jmp public_62b4080
        public_62b407c : nop
        fld dword ptr ss : [esp+4]
        public_62b4080 : nop
        fld dword ptr ss : [esp+8]
        fdiv dword ptr ss : [esp+0x1C]
        fmul dword ptr ss : [esp+0x14]
        fld dword ptr ds : [public_6399404]
        fdiv dword ptr ss : [esp+0x14]
        fmul dword ptr ss : [esp+0x1C]
        fmul st, st(2)
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
        fxch st(3)
        fsub st, st(1)
        fmul dword ptr ss : [esp+0x14]
        fmulp st(3), st
        fld dword ptr ss : [esp+0x1C]
        fdivp st(3), st
        fmul st, st(1)
        faddp st(2), st
        fstp st(0)
        public_62b40ce : nop
        add esp, 0x18
        ret 0xC
        UNREACHABLE_TRAP(0x62b3fb0)
    }
}

#undef public_62b3fcd
#undef public_62b3fe5
#undef public_62b4063
#undef public_62b407c
#undef public_62b4080
#undef public_62b40ce
