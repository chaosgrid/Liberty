#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6284290);
CLANG_FORWARD_PROC_SYMBOL(public_62b3e40);
CLANG_FORWARD_PROC_SYMBOL(public_62bb610);

#define public_62b3e5e _public_62b3e5e
#define public_62b3e76 _public_62b3e76
#define public_62b3f37 _public_62b3f37
#define public_62b3f50 _public_62b3f50
#define public_62b3f54 _public_62b3f54
#define public_62b3fa2 _public_62b3fa2

PROC_DECLARE(0x62b3e40, internal_62b3e40, public_62b3e40);
extern "C" NAKED register_t __cdecl internal_62b3e40()
{
    __asm
    {
        sub esp, 0x18
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x54]
        test eax, eax
        push edi
        je public_62b3e5e
        lea eax, ss:[esp+0x14]
        push esi
        push eax
        call public_6284290
        add esp, 8
        jmp public_62b3e76
        public_62b3e5e : nop
        mov dword ptr ss : [esp+0x14], 0
        mov dword ptr ss : [esp+0x18], 0
        mov dword ptr ss : [esp+0x1C], 0
        public_62b3e76 : nop
        mov ecx, dword ptr ss : [esp+0x24]
        push ecx
        lea edi, ds:[esi+0x230]
        push 0
        mov ecx, edi
        call public_62bb610
        fdiv dword ptr ss : [esp+0x14]
        mov edx, dword ptr ss : [esp+0x28]
        push edx
        push 1
        mov ecx, edi
        fstp dword ptr ss : [esp+0x2C]
        call public_62bb610
        fld dword ptr ds : [esi+0x2C0]
        mov eax, dword ptr ds : [esi+0x88]
        fmul dword ptr ds : [eax+0x10C]
        fxch 
        mov ecx, dword ptr ss : [esp+0x30]
        fdiv dword ptr ss : [esp+0x18]
        mov edx, dword ptr ss : [esp+0x2C]
        pop edi
        mov dword ptr ss : [esp+8], ecx
        mov dword ptr ss : [esp+4], edx
        pop esi
        fld st(0)
        fmul st, st(1)
        fld dword ptr ss : [esp+0x1C]
        fmul dword ptr ss : [esp+0x1C]
        faddp 
        fsqrt 
        fstp dword ptr ss : [esp+8]
        fstp st(0)
        fld dword ptr ss : [esp+0x10]
        fmul dword ptr ss : [esp+0x10]
        fld dword ptr ss : [esp+0xC]
        fmul dword ptr ss : [esp+0xC]
        faddp 
        fsqrt 
        fstp dword ptr ss : [esp+0x20]
        fstp dword ptr ss : [esp+0x1C]
        fld dword ptr ds : [public_6399408]
        fld dword ptr ss : [esp+0x28]
        fcomp 
        fnstsw ax
        test ah, 5
        jnp public_62b3fa2
        fld dword ptr ss : [esp+0x1C]
        fcomp dword ptr ds : [public_639e6b8]
        fnstsw ax
        test ah, 5
        jnp public_62b3fa2
        fld dword ptr ss : [esp+0x24]
        fcomp 
        fnstsw ax
        test ah, 5
        jnp public_62b3f37
        fstp st(0)
        fld dword ptr ss : [esp]
        public_62b3f37 : nop
        fld dword ptr ss : [esp+0x28]
        fcomp dword ptr ds : [public_639e550]
        fnstsw ax
        test ah, 0x41
        jne public_62b3f50
        fld dword ptr ds : [public_639e550]
        jmp public_62b3f54
        public_62b3f50 : nop
        fld dword ptr ss : [esp+4]
        public_62b3f54 : nop
        fld dword ptr ss : [esp+8]
        fdiv dword ptr ss : [esp+0x1C]
        fmul dword ptr ss : [esp+0x20]
        fld dword ptr ds : [public_6399404]
        fdiv dword ptr ss : [esp+0x20]
        fmul st, st(2)
        fmul dword ptr ss : [esp+0x1C]
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
        fmul dword ptr ss : [esp+0x20]
        fmulp st(3), st
        fld dword ptr ss : [esp+0x1C]
        fdivp st(3), st
        fmul st, st(1)
        faddp st(2), st
        fstp st(0)
        public_62b3fa2 : nop
        add esp, 0x18
        ret 0x10
        UNREACHABLE_TRAP(0x62b3e40)
    }
}

#undef public_62b3e5e
#undef public_62b3e76
#undef public_62b3f37
#undef public_62b3f50
#undef public_62b3f54
#undef public_62b3fa2
