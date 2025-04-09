#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4d6d40);
CLANG_FORWARD_PROC_SYMBOL(public_54baf0);
CLANG_FORWARD_PROC_SYMBOL(public_5b73e0);

#define public_4d6d70 _public_4d6d70
#define public_4d6dfb _public_4d6dfb
#define public_4d6e59 _public_4d6e59
#define public_4d6e66 _public_4d6e66
#define public_4d6e87 _public_4d6e87
#define public_4d6e94 _public_4d6e94
#define public_4d6eba _public_4d6eba
#define public_4d6ec7 _public_4d6ec7
#define public_4d6ee8 _public_4d6ee8
#define public_4d6eee _public_4d6eee

PROC_DECLARE(0x4d6d40, internal_4d6d40, public_4d6d40);
extern "C" NAKED register_t __cdecl internal_4d6d40()
{
    __asm
    {
        sub esp, 0x3C
        push esi
        mov esi, ecx
        call public_54baf0
        test eax, eax
        je public_4d6eee
        mov edx, dword ptr ds : [eax]
        push edi
        mov ecx, eax
        call dword ptr ds : [edx+0x10]
        mov edi, eax
        mov eax, dword ptr ds : [public_674a0c]
        test eax, eax
        jne public_4d6d70
        call public_5b73e0
        mov dword ptr ds : [public_674a0c], eax
        public_4d6d70 : nop
        mov edx, dword ptr ss : [esp+0x48]
        mov ecx, dword ptr ds : [eax]
        push edx
        push edi
        lea edx, ss:[esp+0x10]
        push edx
        push eax
        call dword ptr ds : [ecx+0x3C]
        fld qword ptr ds : [public_5d8158]
        fcos 
        mov eax, dword ptr ss : [esp+8]
        mov ecx, dword ptr ss : [esp+0xC]
        mov edx, dword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+0x14], eax
        mov eax, dword ptr ds : [public_674a0c]
        test eax, eax
        mov dword ptr ss : [esp+0x18], ecx
        mov dword ptr ss : [esp+0x1C], edx
        mov dword ptr ss : [esp+0x28], 0
        mov dword ptr ss : [esp+0x34], 0
        mov dword ptr ss : [esp+0x38], 0
        mov dword ptr ss : [esp+0x3C], 0
        mov dword ptr ss : [esp+0x40], 0x3F800000
        pop edi
        fld qword ptr ds : [public_5d8158]
        fsin 
        fld st(1)
        fstp dword ptr ss : [esp+0x1C]
        fld st(0)
        fchs 
        fstp dword ptr ss : [esp+0x20]
        fstp dword ptr ss : [esp+0x28]
        fstp dword ptr ss : [esp+0x2C]
        jne public_4d6dfb
        call public_5b73e0
        mov dword ptr ds : [public_674a0c], eax
        public_4d6dfb : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x10]
        push edx
        lea edx, ss:[esp+0x20]
        push edx
        lea edx, ss:[esp+0xC]
        push edx
        push eax
        call dword ptr ds : [ecx+0x38]
        fld dword ptr ss : [esp+8]
        fcomp dword ptr ds : [public_5c7474]
        fld dword ptr ss : [esp+4]
        fnstsw ax
        fcomp dword ptr ds : [public_5c7474]
        fld dword ptr ds : [public_5d800c]
        test ah, 0x41
        fnstsw ax
        jne public_4d6e94
        test ah, 0x41
        jne public_4d6e66
        fadd dword ptr ds : [esi+0x38C]
        fst dword ptr ds : [esi+0x38C]
        fcom dword ptr ds : [public_5d8004]
        fnstsw ax
        test ah, 5
        jnp public_4d6e59
        fstp st(0)
        fld dword ptr ds : [public_5d8004]
        public_4d6e59 : nop
        fstp dword ptr ds : [esi+0x38C]
        pop esi
        add esp, 0x3C
        ret 4
        public_4d6e66 : nop
        fadd dword ptr ds : [esi+0x3E4]
        fst dword ptr ds : [esi+0x3E4]
        fcom dword ptr ds : [public_5d8004]
        fnstsw ax
        test ah, 5
        jnp public_4d6e87
        fstp st(0)
        fld dword ptr ds : [public_5d8004]
        public_4d6e87 : nop
        fstp dword ptr ds : [esi+0x3E4]
        pop esi
        add esp, 0x3C
        ret 4
        public_4d6e94 : nop
        test ah, 0x41
        jne public_4d6ec7
        fadd dword ptr ds : [esi+0x410]
        fst dword ptr ds : [esi+0x410]
        fcom dword ptr ds : [public_5d8004]
        fnstsw ax
        test ah, 5
        jnp public_4d6eba
        fstp st(0)
        fld dword ptr ds : [public_5d8004]
        public_4d6eba : nop
        fstp dword ptr ds : [esi+0x410]
        pop esi
        add esp, 0x3C
        ret 4
        public_4d6ec7 : nop
        fadd dword ptr ds : [esi+0x3B8]
        fst dword ptr ds : [esi+0x3B8]
        fcom dword ptr ds : [public_5d8004]
        fnstsw ax
        test ah, 5
        jnp public_4d6ee8
        fstp st(0)
        fld dword ptr ds : [public_5d8004]
        public_4d6ee8 : nop
        fstp dword ptr ds : [esi+0x3B8]
        public_4d6eee : nop
        pop esi
        add esp, 0x3C
        ret 4
        UNREACHABLE_TRAP(0x4d6d40)
    }
}

#undef public_4d6d70
#undef public_4d6dfb
#undef public_4d6e59
#undef public_4d6e66
#undef public_4d6e87
#undef public_4d6e94
#undef public_4d6eba
#undef public_4d6ec7
#undef public_4d6ee8
#undef public_4d6eee
