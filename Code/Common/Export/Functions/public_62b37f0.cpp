#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62b37f0);
CLANG_FORWARD_PROC_SYMBOL(public_62b42f0);
CLANG_FORWARD_PROC_SYMBOL(public_62b4540);

#define public_62b380f _public_62b380f
#define public_62b3828 _public_62b3828
#define public_62b3843 _public_62b3843
#define public_62b385c _public_62b385c
#define public_62b387e _public_62b387e
#define public_62b38ef _public_62b38ef

PROC_DECLARE(0x62b37f0, internal_62b37f0, public_62b37f0);
extern "C" NAKED register_t __cdecl internal_62b37f0()
{
    __asm
    {
        fld dword ptr ss : [esp+8]
        sub esp, 0xC
        fcomp dword ptr ds : [public_6399408]
        push esi
        mov esi, ecx
        fnstsw ax
        test ah, 5
        jp public_62b380f
        mov dword ptr ss : [esp+0x18], 0
        public_62b380f : nop
        fld dword ptr ss : [esp+0x1C]
        fcomp dword ptr ds : [public_6399408]
        fnstsw ax
        test ah, 5
        jp public_62b3828
        mov dword ptr ss : [esp+0x1C], 0
        public_62b3828 : nop
        fld dword ptr ss : [esp+0x14]
        fcomp dword ptr ds : [public_639a1d0]
        fnstsw ax
        test ah, 0x41
        jne public_62b3843
        mov dword ptr ss : [esp+0x14], 0x3F800000
        jmp public_62b385c
        public_62b3843 : nop
        fld dword ptr ss : [esp+0x14]
        fcomp dword ptr ds : [public_6399404]
        fnstsw ax
        test ah, 5
        jp public_62b385c
        mov dword ptr ss : [esp+0x14], 0xBF800000
        public_62b385c : nop
        fld dword ptr ss : [esp+0x18]
        fcomp dword ptr ds : [public_6399408]
        fnstsw ax
        test ah, 0x44
        jp public_62b387e
        fld dword ptr ss : [esp+0x14]
        fcomp dword ptr ds : [public_6399408]
        fnstsw ax
        test ah, 0x44
        jnp public_62b38ef
        public_62b387e : nop
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax+0x6C]
        fst dword ptr ss : [esp+0xC]
        fcomp qword ptr ds : [public_639e6b0]
        fnstsw ax
        test ah, 0x41
        jne public_62b38ef
        mov eax, dword ptr ss : [esp+0x20]
        lea ecx, ss:[esp+4]
        push ecx
        mov ecx, dword ptr ss : [esp+0x18]
        lea edx, ss:[esp+0xC]
        push edx
        push eax
        push ecx
        mov ecx, esi
        mov dword ptr ss : [esp+0x18], 0
        mov dword ptr ss : [esp+0x14], 0
        call public_62b4540
        fld dword ptr ss : [esp+8]
        fdiv dword ptr ss : [esp+0xC]
        mov edx, dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ss : [esp+4]
        push edx
        mov edx, dword ptr ss : [esp+0x10]
        push eax
        push ecx
        push edx
        push ecx
        mov ecx, esi
        fstp dword ptr ss : [esp]
        call public_62b42f0
        pop esi
        add esp, 0xC
        ret 0x10
        public_62b38ef : nop
        fld dword ptr ds : [public_6399408]
        pop esi
        add esp, 0xC
        ret 0x10
        UNREACHABLE_TRAP(0x62b37f0)
    }
}

#undef public_62b380f
#undef public_62b3828
#undef public_62b3843
#undef public_62b385c
#undef public_62b387e
#undef public_62b38ef
