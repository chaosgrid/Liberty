#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4d6f10);
CLANG_FORWARD_PROC_SYMBOL(public_4d7270);
CLANG_FORWARD_PROC_SYMBOL(public_54baf0);
CLANG_FORWARD_PROC_SYMBOL(public_5b73e0);

#define public_4d6f9e _public_4d6f9e
#define public_4d6fd7 _public_4d6fd7
#define public_4d7073 _public_4d7073
#define public_4d70a0 _public_4d70a0
#define public_4d70cd _public_4d70cd
#define public_4d70fa _public_4d70fa
#define public_4d7102 _public_4d7102
#define public_4d7104 _public_4d7104
#define public_4d7165 _public_4d7165
#define public_4d71c3 _public_4d71c3
#define public_4d71d4 _public_4d71d4
#define public_4d71f5 _public_4d71f5
#define public_4d7206 _public_4d7206
#define public_4d722c _public_4d722c
#define public_4d723d _public_4d723d
#define public_4d725e _public_4d725e
#define public_4d7264 _public_4d7264

PROC_DECLARE(0x4d6f10, internal_4d6f10, public_4d6f10);
extern "C" NAKED register_t __cdecl internal_4d6f10()
{
    __asm
    {
        sub esp, 0x88
        push ebx
        push esi
        mov ebx, ecx
        call public_54baf0
        mov esi, eax
        test esi, esi
        je public_4d7264
        mov eax, dword ptr ds : [esi]
        push edi
        lea ecx, ss:[esp+0x28]
        push ecx
        lea edx, ss:[esp+0x1C]
        push edx
        mov ecx, esi
        call dword ptr ds : [eax+0x2C]
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax+0xC]
        fld dword ptr ss : [esp+0x18]
        mov edx, dword ptr ss : [esp+0x2C]
        fchs 
        mov esi, eax
        mov eax, dword ptr ss : [esp+0x30]
        mov ecx, 9
        lea edi, ss:[esp+0x64]
        rep movsd
        mov ecx, dword ptr ss : [esp+0x28]
        mov dword ptr ss : [esp+0x90], eax
        mov eax, dword ptr ds : [public_674a0c]
        test eax, eax
        mov dword ptr ss : [esp+0x88], ecx
        fstp dword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp+0x8C], edx
        mov dword ptr ss : [esp+0xC], 0
        mov dword ptr ss : [esp+0x10], 0
        pop edi
        jne public_4d6f9e
        call public_5b73e0
        mov dword ptr ds : [public_674a0c], eax
        public_4d6f9e : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+8]
        push edx
        lea edx, ss:[esp+0x64]
        push edx
        lea edx, ss:[esp+0x5C]
        push edx
        push eax
        call dword ptr ds : [ecx+0x30]
        lea eax, ss:[esp+0x54]
        push eax
        lea ecx, ss:[esp+0x88]
        call public_4d7270
        mov eax, dword ptr ds : [public_674a0c]
        test eax, eax
        jne public_4d6fd7
        call public_5b73e0
        mov dword ptr ds : [public_674a0c], eax
        public_4d6fd7 : nop
        mov edx, dword ptr ss : [esp+0x94]
        mov ecx, dword ptr ds : [eax]
        push edx
        lea edx, ss:[esp+0x64]
        push edx
        lea edx, ss:[esp+0x10]
        push edx
        push eax
        call dword ptr ds : [ecx+0x3C]
        fld dword ptr ss : [esp+0x10]
        mov eax, dword ptr ss : [esp+8]
        fabs 
        fld dword ptr ss : [esp+8]
        mov ecx, dword ptr ss : [esp+0xC]
        mov edx, dword ptr ss : [esp+0x10]
        fabs 
        fld st(1)
        fcompp 
        mov dword ptr ss : [esp+0x18], eax
        mov dword ptr ss : [esp+0x1C], ecx
        mov dword ptr ss : [esp+0x20], edx
        fnstsw ax
        test ah, 0x41
        jne public_4d7102
        fld dword ptr ss : [esp+0xC]
        fabs 
        fxch 
        fcompp 
        fnstsw ax
        test ah, 0x41
        jne public_4d7104
        fld dword ptr ss : [esp+0x10]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 5
        jnp public_4d7264
        fld dword ptr ds : [public_5d8008]
        fadd dword ptr ds : [ebx+0x38C]
        fst dword ptr ds : [ebx+0x38C]
        fcom dword ptr ds : [public_5d8004]
        fnstsw ax
        test ah, 5
        jnp public_4d7073
        fstp st(0)
        fld dword ptr ds : [public_5d8004]
        public_4d7073 : nop
        fstp dword ptr ds : [ebx+0x38C]
        fld dword ptr ds : [public_5d8008]
        fadd dword ptr ds : [ebx+0x3B8]
        fst dword ptr ds : [ebx+0x3B8]
        fcom dword ptr ds : [public_5d8004]
        fnstsw ax
        test ah, 5
        jnp public_4d70a0
        fstp st(0)
        fld dword ptr ds : [public_5d8004]
        public_4d70a0 : nop
        fstp dword ptr ds : [ebx+0x3B8]
        fld dword ptr ds : [public_5d8008]
        fadd dword ptr ds : [ebx+0x3E4]
        fst dword ptr ds : [ebx+0x3E4]
        fcom dword ptr ds : [public_5d8004]
        fnstsw ax
        test ah, 5
        jnp public_4d70cd
        fstp st(0)
        fld dword ptr ds : [public_5d8004]
        public_4d70cd : nop
        fstp dword ptr ds : [ebx+0x3E4]
        fld dword ptr ds : [public_5d8008]
        fadd dword ptr ds : [ebx+0x410]
        fst dword ptr ds : [ebx+0x410]
        fcom dword ptr ds : [public_5d8004]
        fnstsw ax
        test ah, 5
        jnp public_4d70fa
        fstp st(0)
        fld dword ptr ds : [public_5d8004]
        public_4d70fa : nop
        fstp dword ptr ds : [ebx+0x410]
        jmp public_4d7104
        public_4d7102 : nop
        fstp st(0)
        public_4d7104 : nop
        fld qword ptr ds : [public_5d8158]
        mov eax, dword ptr ds : [public_674a0c]
        test eax, eax
        fcos 
        mov dword ptr ss : [esp+0x38], 0
        mov dword ptr ss : [esp+0x44], 0
        mov dword ptr ss : [esp+0x48], 0
        mov dword ptr ss : [esp+0x4C], 0
        mov dword ptr ss : [esp+0x50], 0x3F800000
        fld qword ptr ds : [public_5d8158]
        fsin 
        fld st(1)
        fstp dword ptr ss : [esp+0x30]
        fld st(0)
        fchs 
        fstp dword ptr ss : [esp+0x34]
        fstp dword ptr ss : [esp+0x3C]
        fstp dword ptr ss : [esp+0x40]
        jne public_4d7165
        call public_5b73e0
        mov dword ptr ds : [public_674a0c], eax
        public_4d7165 : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x18]
        push edx
        lea edx, ss:[esp+0x34]
        push edx
        lea edx, ss:[esp+0x10]
        push edx
        push eax
        call dword ptr ds : [ecx+0x38]
        fld dword ptr ss : [esp+0xC]
        fcomp dword ptr ds : [public_5c7474]
        fld dword ptr ss : [esp+8]
        fnstsw ax
        fcomp dword ptr ds : [public_5c7474]
        fld dword ptr ds : [public_5d800c]
        test ah, 0x41
        fnstsw ax
        jne public_4d7206
        test ah, 0x41
        jne public_4d71d4
        fadd dword ptr ds : [ebx+0x38C]
        fst dword ptr ds : [ebx+0x38C]
        fcom dword ptr ds : [public_5d8004]
        fnstsw ax
        test ah, 5
        jnp public_4d71c3
        fstp st(0)
        fld dword ptr ds : [public_5d8004]
        public_4d71c3 : nop
        pop esi
        fstp dword ptr ds : [ebx+0x38C]
        pop ebx
        add esp, 0x88
        ret 4
        public_4d71d4 : nop
        fadd dword ptr ds : [ebx+0x3E4]
        fst dword ptr ds : [ebx+0x3E4]
        fcom dword ptr ds : [public_5d8004]
        fnstsw ax
        test ah, 5
        jnp public_4d71f5
        fstp st(0)
        fld dword ptr ds : [public_5d8004]
        public_4d71f5 : nop
        pop esi
        fstp dword ptr ds : [ebx+0x3E4]
        pop ebx
        add esp, 0x88
        ret 4
        public_4d7206 : nop
        test ah, 0x41
        jne public_4d723d
        fadd dword ptr ds : [ebx+0x410]
        fst dword ptr ds : [ebx+0x410]
        fcom dword ptr ds : [public_5d8004]
        fnstsw ax
        test ah, 5
        jnp public_4d722c
        fstp st(0)
        fld dword ptr ds : [public_5d8004]
        public_4d722c : nop
        pop esi
        fstp dword ptr ds : [ebx+0x410]
        pop ebx
        add esp, 0x88
        ret 4
        public_4d723d : nop
        fadd dword ptr ds : [ebx+0x3B8]
        fst dword ptr ds : [ebx+0x3B8]
        fcom dword ptr ds : [public_5d8004]
        fnstsw ax
        test ah, 5
        jnp public_4d725e
        fstp st(0)
        fld dword ptr ds : [public_5d8004]
        public_4d725e : nop
        fstp dword ptr ds : [ebx+0x3B8]
        public_4d7264 : nop
        pop esi
        pop ebx
        add esp, 0x88
        ret 4
        UNREACHABLE_TRAP(0x4d6f10)
    }
}

#undef public_4d6f9e
#undef public_4d6fd7
#undef public_4d7073
#undef public_4d70a0
#undef public_4d70cd
#undef public_4d70fa
#undef public_4d7102
#undef public_4d7104
#undef public_4d7165
#undef public_4d71c3
#undef public_4d71d4
#undef public_4d71f5
#undef public_4d7206
#undef public_4d722c
#undef public_4d723d
#undef public_4d725e
#undef public_4d7264
