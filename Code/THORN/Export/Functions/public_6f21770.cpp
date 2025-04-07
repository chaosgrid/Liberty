#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f21770);
CLANG_FORWARD_PROC_SYMBOL(public_6f22e70);
CLANG_FORWARD_PROC_SYMBOL(public_6f22e90);
CLANG_FORWARD_PROC_SYMBOL(public_6f235a0);
CLANG_FORWARD_PROC_SYMBOL(public_6f23e00);
CLANG_FORWARD_PROC_SYMBOL(public_6f24050);
CLANG_FORWARD_PROC_SYMBOL(public_6f24070);
CLANG_FORWARD_PROC_SYMBOL(public_6f24100);
CLANG_FORWARD_PROC_SYMBOL(public_6f24190);
CLANG_FORWARD_PROC_SYMBOL(public_6f24670);
CLANG_FORWARD_PROC_SYMBOL(public_6f24770);
CLANG_FORWARD_PROC_SYMBOL(public_6f248c0);
CLANG_FORWARD_PROC_SYMBOL(public_6f249c0);
CLANG_FORWARD_PROC_SYMBOL(public_6f57e90);

#define public_6f21884 _public_6f21884
#define public_6f21888 _public_6f21888
#define public_6f2188d _public_6f2188d
#define public_6f21902 _public_6f21902
#define public_6f21906 _public_6f21906
#define public_6f2190b _public_6f2190b
#define public_6f219b0 _public_6f219b0
#define public_6f219be _public_6f219be
#define public_6f21a59 _public_6f21a59
#define public_6f21a5d _public_6f21a5d
#define public_6f21a62 _public_6f21a62

PROC_DECLARE(0x6f21770, internal_6f21770, public_6f21770);
extern "C" NAKED register_t __cdecl internal_6f21770()
{
    __asm
    {
        sub esp, 0x184
        push esi
        push edi
        mov edi, dword ptr ss : [esp+0x194]
        mov eax, dword ptr ds : [edi]
        lea ecx, ds:[edi+4]
        mov dword ptr ss : [esp+8], eax
        call public_6f22e70
        fld dword ptr ss : [esp+8]
        fmul dword ptr ss : [esp+8]
        lea ecx, ss:[esp+0x13C]
        push ecx
        mov ecx, edi
        faddp 
        fdivr dword ptr ds : [public_6f5a1b8]
        fstp dword ptr ss : [esp+0xC]
        call public_6f24070
        mov edx, dword ptr ss : [esp+8]
        push edx
        push eax
        lea eax, ss:[esp+0x90]
        push eax
        call public_6f24770
        mov esi, dword ptr ss : [esp+0x1A4]
        mov ecx, dword ptr ds : [esi]
        mov dword ptr ss : [esp+0x14], ecx
        add esp, 0xC
        lea ecx, ds:[esi+4]
        call public_6f22e70
        fld dword ptr ss : [esp+8]
        fmul dword ptr ss : [esp+8]
        lea edx, ss:[esp+0x16C]
        push edx
        mov ecx, esi
        faddp 
        fdivr dword ptr ds : [public_6f5a1b8]
        fstp dword ptr ss : [esp+0xC]
        call public_6f24070
        mov ecx, dword ptr ss : [esp+8]
        push ecx
        push eax
        lea edx, ss:[esp+0xC0]
        push edx
        call public_6f24770
        mov eax, dword ptr ss : [esp+0x19C]
        push eax
        lea ecx, ss:[esp+0x98]
        push ecx
        lea edx, ss:[esp+0x5C]
        push edx
        call public_6f249c0
        fld dword ptr ss : [esp+0x60]
        fabs 
        add esp, 0x18
        fcomp qword ptr ds : [public_6f5a1c0]
        fnstsw ax
        test ah, 5
        jp public_6f21888
        fld dword ptr ss : [esp+0x48]
        call public_6f57e90
        fld st(0)
        fsin 
        fcom dword ptr ds : [public_6f5a1ac]
        fnstsw ax
        test ah, 1
        jne public_6f21884
        fxch 
        push ecx
        fdiv st, st(1)
        lea eax, ss:[esp+0x50]
        lea ecx, ss:[esp+0xE4]
        fstp dword ptr ss : [esp]
        push eax
        push ecx
        fstp st(0)
        call public_6f235a0
        add esp, 0xC
        lea edx, ss:[esp+0xE0]
        push edx
        jmp public_6f2188d
        public_6f21884 : nop
        fstp st(0)
        fstp st(0)
        public_6f21888 : nop
        lea eax, ss:[esp+0x4C]
        push eax
        public_6f2188d : nop
        lea ecx, ss:[esp+0x30]
        call public_6f23e00
        push esi
        lea ecx, ss:[esp+0x8C]
        push ecx
        lea edx, ss:[esp+0x70]
        push edx
        call public_6f249c0
        fld dword ptr ss : [esp+0x74]
        fabs 
        add esp, 0xC
        fcomp qword ptr ds : [public_6f5a1c0]
        fnstsw ax
        test ah, 5
        jp public_6f21906
        fld dword ptr ss : [esp+0x68]
        call public_6f57e90
        fld st(0)
        fsin 
        fcom dword ptr ds : [public_6f5a1ac]
        fnstsw ax
        test ah, 1
        jne public_6f21902
        fxch 
        push ecx
        fdiv st, st(1)
        lea eax, ss:[esp+0x70]
        lea ecx, ss:[esp+0xCC]
        fstp dword ptr ss : [esp]
        push eax
        push ecx
        fstp st(0)
        call public_6f235a0
        add esp, 0xC
        lea edx, ss:[esp+0xC8]
        push edx
        jmp public_6f2190b
        public_6f21902 : nop
        fstp st(0)
        fstp st(0)
        public_6f21906 : nop
        lea eax, ss:[esp+0x6C]
        push eax
        public_6f2190b : nop
        lea ecx, ss:[esp+0x20]
        call public_6f23e00
        fld dword ptr ss : [esp+0x38]
        fadd dword ptr ss : [esp+0x28]
        sub esp, 0x10
        lea ecx, ss:[esp+0x12C]
        fstp dword ptr ss : [esp+0xC]
        fld dword ptr ss : [esp+0x44]
        fadd dword ptr ss : [esp+0x34]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x40]
        fadd dword ptr ss : [esp+0x30]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ss : [esp+0x3C]
        fadd dword ptr ss : [esp+0x2C]
        fstp dword ptr ss : [esp]
        call public_6f24050
        push 0xBE800000
        lea ecx, ss:[esp+0x120]
        push ecx
        lea edx, ss:[esp+0x14]
        push edx
        call public_6f24770
        add esp, 0xC
        lea ecx, ss:[esp+0x10]
        call public_6f22e90
        fst dword ptr ss : [esp+8]
        fsin 
        fcom dword ptr ds : [public_6f5a1ac]
        fnstsw ax
        test ah, 1
        jne public_6f219b0
        fdiv dword ptr ss : [esp+8]
        push ecx
        lea eax, ss:[esp+0x14]
        lea ecx, ss:[esp+0x40]
        fstp dword ptr ss : [esp]
        push eax
        push ecx
        call public_6f235a0
        mov edx, dword ptr ss : [esp+0x50]
        mov eax, dword ptr ss : [esp+0x4C]
        mov ecx, dword ptr ss : [esp+0x48]
        add esp, 0xC
        jmp public_6f219be
        public_6f219b0 : nop
        mov edx, dword ptr ss : [esp+0x18]
        fstp st(0)
        mov eax, dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ss : [esp+0x10]
        public_6f219be : nop
        fld dword ptr ss : [esp+8]
        push edx
        fcos 
        push eax
        push ecx
        push ecx
        lea ecx, ss:[esp+0xA8]
        fstp dword ptr ss : [esp]
        call public_6f24050
        lea edx, ss:[esp+0x98]
        push edx
        lea eax, ss:[esp+0x130]
        push edi
        push eax
        call public_6f249c0
        push edi
        lea ecx, ss:[esp+0xC8]
        push ecx
        lea edx, ss:[esp+0x6C]
        push edx
        call public_6f249c0
        fld dword ptr ss : [esp+0x70]
        fabs 
        add esp, 0x18
        fcomp qword ptr ds : [public_6f5a1c0]
        fnstsw ax
        test ah, 5
        jp public_6f21a5d
        fld dword ptr ss : [esp+0x58]
        call public_6f57e90
        fld st(0)
        fsin 
        fcom dword ptr ds : [public_6f5a1ac]
        fnstsw ax
        test ah, 1
        jne public_6f21a59
        fxch 
        push ecx
        fdiv st, st(1)
        lea eax, ss:[esp+0x60]
        lea ecx, ss:[esp+0xD8]
        fstp dword ptr ss : [esp]
        push eax
        push ecx
        fstp st(0)
        call public_6f235a0
        add esp, 0xC
        lea edx, ss:[esp+0xD4]
        push edx
        jmp public_6f21a62
        public_6f21a59 : nop
        fstp st(0)
        fstp st(0)
        public_6f21a5d : nop
        lea eax, ss:[esp+0x5C]
        push eax
        public_6f21a62 : nop
        lea ecx, ss:[esp+0xAC]
        call public_6f23e00
        mov ecx, dword ptr ss : [esp+0x19C]
        push ecx
        lea edx, ss:[esp+0xBC]
        push edx
        lea eax, ss:[esp+0xF4]
        push eax
        call public_6f249c0
        add esp, 0xC
        lea ecx, ss:[esp+0xA8]
        push ecx
        lea edx, ss:[esp+0x150]
        push edx
        lea ecx, ss:[esp+0xF4]
        call public_6f24190
        push eax
        lea eax, ss:[esp+0x164]
        push eax
        call public_6f24100
        push 0xBE800000
        push eax
        lea ecx, ss:[esp+0x110]
        push ecx
        call public_6f24770
        add esp, 0x18
        lea edx, ss:[esp+0x17C]
        push edx
        lea ecx, ss:[esp+0x100]
        call public_6f24670
        push eax
        lea eax, ss:[esp+0x110]
        push esi
        push eax
        call public_6f249c0
        mov ecx, dword ptr ss : [esp+0x1AC]
        push ecx
        push esi
        lea edx, ss:[esp+0x120]
        push edx
        lea eax, ss:[esp+0x144]
        push eax
        lea ecx, ss:[esp+0x94]
        push edi
        push ecx
        call public_6f248c0
        mov eax, dword ptr ss : [esp+0x9C]
        mov edx, dword ptr ss : [esp+0x1C8]
        mov ecx, dword ptr ss : [esp+0xA0]
        mov dword ptr ds : [edx], eax
        mov eax, dword ptr ss : [esp+0xA4]
        add esp, 0x24
        mov dword ptr ds : [edx+4], ecx
        mov ecx, dword ptr ss : [esp+0x84]
        mov dword ptr ds : [edx+8], eax
        pop edi
        mov dword ptr ds : [edx+0xC], ecx
        xor eax, eax
        pop esi
        add esp, 0x184
        ret 0x18
        UNREACHABLE_TRAP(0x6f21770)
    }
}

#undef public_6f21884
#undef public_6f21888
#undef public_6f2188d
#undef public_6f21902
#undef public_6f21906
#undef public_6f2190b
#undef public_6f219b0
#undef public_6f219be
#undef public_6f21a59
#undef public_6f21a5d
#undef public_6f21a62
