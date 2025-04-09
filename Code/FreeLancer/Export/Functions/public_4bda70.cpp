#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_414570);
CLANG_FORWARD_PROC_SYMBOL(public_4145d0);
CLANG_FORWARD_PROC_SYMBOL(public_423b90);
CLANG_FORWARD_PROC_SYMBOL(public_4bda70);
CLANG_FORWARD_PROC_SYMBOL(public_4bdd40);
CLANG_FORWARD_PROC_SYMBOL(public_59da70);
CLANG_FORWARD_PROC_SYMBOL(public_5b73e0);

#define public_4bdac0 _public_4bdac0
#define public_4bdc6c _public_4bdc6c
#define public_4bdccf _public_4bdccf
#define public_4bdcee _public_4bdcee
#define public_4bdd1b _public_4bdd1b
#define public_4bdd1d _public_4bdd1d

PROC_DECLARE(0x4bda70, internal_4bda70, public_4bda70);
extern "C" NAKED register_t __cdecl internal_4bda70()
{
    __asm
    {
        fild dword ptr ds : [public_67dca8]
        sub esp, 0x60
        push ebx
        push esi
        push edi
        sub esp, 8
        fstp dword ptr ss : [esp+4]
        fild dword ptr ds : [public_67dca4]
        lea eax, ss:[esp+0x38]
        mov ebx, ecx
        mov ecx, offset public_67dbf8
        fstp dword ptr ss : [esp]
        push eax
        call public_4bdd40
        mov eax, dword ptr ds : [public_672448]
        test eax, eax
        mov ecx, 9
        mov esi, offset public_67dbfc
        lea edi, ss:[esp+0x48]
        rep movsd
        jne public_4bdac0
        call public_5b73e0
        mov dword ptr ds : [public_672448], eax
        public_4bdac0 : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x30]
        push edx
        lea edx, ss:[esp+0x4C]
        push edx
        lea edx, ss:[esp+0x44]
        push edx
        push eax
        call dword ptr ds : [ecx+0x2C]
        fild dword ptr ds : [public_67dcac]
        mov esi, offset public_67dbfc
        lea edi, ss:[esp+0x48]
        fsub dword ptr ds : [public_67dc60]
        fdiv dword ptr ds : [public_67dc70]
        fmul dword ptr ds : [public_67dc9c]
        fstp dword ptr ss : [esp+0xC]
        mov eax, dword ptr ss : [esp+0xC]
        fild dword ptr ds : [public_67dcb0]
        mov dword ptr ss : [esp+0x24], eax
        lea eax, ss:[esp+0x24]
        push eax
        fsub dword ptr ds : [public_67dc64]
        fdiv dword ptr ds : [public_67dc74]
        fmul dword ptr ds : [public_67dc9c]
        fstp dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ss : [esp+0x14]
        fld dword ptr ds : [public_67dc9c]
        mov dword ptr ss : [esp+0x2C], ecx
        fchs 
        mov ecx, 9
        fstp dword ptr ss : [esp+0x18]
        mov edx, dword ptr ss : [esp+0x18]
        rep movsd
        lea ecx, ss:[esp+0x4C]
        mov dword ptr ss : [esp+0x30], edx
        push ecx
        lea edx, ss:[esp+0x38]
        push edx
        call public_423b90
        lea eax, ss:[esp+0x24]
        push eax
        call public_59da70
        fld dword ptr ds : [public_5c7500]
        add esp, 0x10
        fdiv dword ptr ss : [esp+0x20]
        fld dword ptr ss : [esp+0x18]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0xC]
        fld dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ss : [esp+0xC]
        fmul st, st(1)
        mov dword ptr ss : [esp+0x18], ecx
        fstp dword ptr ss : [esp+0x10]
        mov edx, dword ptr ss : [esp+0x10]
        fmul dword ptr ss : [esp+0x20]
        mov dword ptr ss : [esp+0x1C], edx
        fstp dword ptr ss : [esp+0x14]
        fld dword ptr ds : [public_5c7500]
        mov eax, dword ptr ss : [esp+0x14]
        fdiv dword ptr ss : [esp+0x44]
        mov dword ptr ss : [esp+0x20], eax
        fld dword ptr ss : [esp+0x3C]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x3C]
        fstp st(0)
        fld dword ptr ds : [public_5c7500]
        fdiv dword ptr ss : [esp+0x38]
        fld dword ptr ss : [esp+0x30]
        fmul st, st(1)
        mov eax, dword ptr ss : [esp+0x70]
        fstp dword ptr ss : [esp+0x24]
        fld dword ptr ss : [esp+0x34]
        mov cl, byte ptr ds : [eax+0x60]
        test cl, cl
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x28]
        fstp st(0)
        je public_4bdc6c
        lea ecx, ds:[eax+0x48]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ss : [esp+0x18], edx
        fld dword ptr ss : [esp+0x18]
        fsub dword ptr ds : [eax+0x54]
        mov edx, dword ptr ds : [ecx+4]
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+0x1C], edx
        fld dword ptr ss : [esp+0x1C]
        fsub dword ptr ds : [eax+0x58]
        mov dword ptr ss : [esp+0x20], ecx
        fld dword ptr ds : [public_5c7500]
        fdiv dword ptr ss : [esp+0x20]
        fst dword ptr ss : [esp+0x70]
        fmul st, st(2)
        fstp dword ptr ss : [esp+0xC]
        fld dword ptr ss : [esp+0x70]
        mov edx, dword ptr ss : [esp+0xC]
        fmul st, st(1)
        mov dword ptr ss : [esp+0x18], edx
        fstp dword ptr ss : [esp+0x10]
        mov eax, dword ptr ss : [esp+0x10]
        fstp st(0)
        mov dword ptr ss : [esp+0x1C], eax
        fstp st(0)
        fld dword ptr ss : [esp+0x70]
        fmul dword ptr ss : [esp+0x20]
        fstp dword ptr ss : [esp+0x14]
        fld dword ptr ss : [esp+0xC]
        mov ecx, dword ptr ss : [esp+0x14]
        fadd dword ptr ds : [public_5d29b4]
        mov dword ptr ss : [esp+0x20], ecx
        fstp dword ptr ss : [esp+0x18]
        fld dword ptr ss : [esp+0x1C]
        fsub dword ptr ds : [public_5d011c]
        fstp dword ptr ss : [esp+0x1C]
        public_4bdc6c : nop
        mov edx, dword ptr ds : [ebx+0x68]
        push edx
        lea esi, ds:[ebx+0x7C]
        push 0x3EB33333
        mov ecx, esi
        call public_4145d0
        lea eax, ss:[esp+0xC]
        push eax
        mov ecx, esi
        call public_414570
        mov eax, dword ptr ds : [eax]
        add eax, 4
        mov dword ptr ss : [esp+0xC], eax
        mov dword ptr ss : [esp+0x10], 0
        fild qword ptr ss : [esp+0xC]
        fld dword ptr ds : [public_67dc9c]
        fdiv dword ptr ds : [public_67dc9c]
        fmul dword ptr ds : [public_67dc70]
        fdivp 
        fld dword ptr ss : [esp+0x18]
        fadd st, st(1)
        fcomp dword ptr ss : [esp+0x24]
        fnstsw ax
        test ah, 0x41
        jne public_4bdccf
        fld dword ptr ss : [esp+0x24]
        fsub st, st(1)
        fstp dword ptr ss : [esp+0x18]
        public_4bdccf : nop
        fstp st(0)
        fld dword ptr ss : [esp+0x18]
        fcomp dword ptr ss : [esp+0x3C]
        fnstsw ax
        test ah, 5
        jp public_4bdcee
        fld dword ptr ss : [esp+0x3C]
        fadd dword ptr ds : [public_5d29b4]
        fstp dword ptr ss : [esp+0x18]
        public_4bdcee : nop
        fld dword ptr ds : [ebx+0xF0]
        fmul dword ptr ds : [ebx+0xB0]
        fld dword ptr ss : [esp+0x1C]
        fadd st, st(1)
        fcomp dword ptr ss : [esp+0x28]
        fnstsw ax
        test ah, 5
        jp public_4bdd1b
        fmul dword ptr ds : [public_5ca220]
        fsubr dword ptr ss : [esp+0x1C]
        fstp dword ptr ss : [esp+0x1C]
        jmp public_4bdd1d
        public_4bdd1b : nop
        fstp st(0)
        public_4bdd1d : nop
        mov edx, dword ptr ds : [ebx]
        lea eax, ss:[esp+0x18]
        push eax
        mov ecx, ebx
        call dword ptr ds : [edx+0x14]
        pop edi
        pop esi
        pop ebx
        add esp, 0x60
        ret 4
        UNREACHABLE_TRAP(0x4bda70)
    }
}

#undef public_4bdac0
#undef public_4bdc6c
#undef public_4bdccf
#undef public_4bdcee
#undef public_4bdd1b
#undef public_4bdd1d
