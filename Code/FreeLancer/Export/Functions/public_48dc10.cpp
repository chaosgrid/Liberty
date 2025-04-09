#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4347e0);
CLANG_FORWARD_PROC_SYMBOL(public_48dc10);
CLANG_FORWARD_PROC_SYMBOL(public_4c4830);

#define public_48dc3a _public_48dc3a
#define public_48dc3e _public_48dc3e
#define public_48dc80 _public_48dc80
#define public_48dc99 _public_48dc99
#define public_48dca4 _public_48dca4
#define public_48dcbd _public_48dcbd

PROC_DECLARE(0x48dc10, internal_48dc10, public_48dc10);
extern "C" NAKED register_t __cdecl internal_48dc10()
{
    __asm
    {
        sub esp, 0xC8
        mov dword ptr ss : [esp], 0x3F800000
        call public_4c4830
        push eax
        call dword ptr ds : [public_5c6094]
        add esp, 4
        test eax, eax
        je public_48dc3a
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx+0x50]
        jmp public_48dc3e
        public_48dc3a : nop
        fld dword ptr ss : [esp]
        public_48dc3e : nop
        mov eax, dword ptr ss : [esp+0xCC]
        fld st(0)
        fmul dword ptr ds : [eax+8]
        mov ecx, dword ptr ds : [public_67eca8]
        push 0x40
        fadd dword ptr ds : [public_5d2ef4]
        fstp dword ptr ss : [esp+4]
        fmul dword ptr ds : [eax]
        lea eax, ss:[esp+0x4C]
        push eax
        push 0x54D
        push ecx
        fstp dword ptr ss : [esp+0x14]
        call public_4347e0
        fld dword ptr ds : [public_5d2ef0]
        add esp, 0x10
        xor ecx, ecx
        lea ecx, ds:[ecx]
        public_48dc80 : nop
        fld dword ptr ss : [esp]
        fcomp 
        fnstsw ax
        test ah, 5
        jnp public_48dc99
        fadd dword ptr ds : [public_5d2eec]
        inc ecx
        cmp ecx, 8
        jl public_48dc80
        public_48dc99 : nop
        fstp st(0)
        push esi
        fld dword ptr ds : [public_5d2ef0]
        xor esi, esi
        public_48dca4 : nop
        fld dword ptr ss : [esp+8]
        fcomp 
        fnstsw ax
        test ah, 5
        jnp public_48dcbd
        fadd dword ptr ds : [public_5d2eec]
        inc esi
        cmp esi, 8
        jl public_48dca4
        public_48dcbd : nop
        mov eax, dword ptr ds : [public_67eca8]
        fstp st(0)
        push 0x10
        lea edx, ss:[esp+0x30]
        push edx
        add ecx, 0x515
        push ecx
        push eax
        call public_4347e0
        mov edx, dword ptr ds : [public_67eca8]
        push 0x10
        lea ecx, ss:[esp+0x20]
        push ecx
        add esi, 0x506
        push esi
        push edx
        call public_4347e0
        lea eax, ss:[esp+0x2C]
        push eax
        mov eax, dword ptr ss : [esp+0xF8]
        lea ecx, ss:[esp+0x50]
        push ecx
        lea edx, ss:[esp+0x74]
        push edx
        push eax
        call dword ptr ds : [public_5c70ec]
        add esp, 0x30
        pop esi
        add esp, 0xC8
        ret 
        UNREACHABLE_TRAP(0x48dc10)
    }
}

#undef public_48dc3a
#undef public_48dc3e
#undef public_48dc80
#undef public_48dc99
#undef public_48dca4
#undef public_48dcbd
