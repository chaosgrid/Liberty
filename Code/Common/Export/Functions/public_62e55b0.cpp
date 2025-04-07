#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_62e55b0);
CLANG_FORWARD_PROC_SYMBOL(public_6391cf0);

#define public_62e55f5 _public_62e55f5
#define public_62e562b _public_62e562b
#define public_62e56cf _public_62e56cf
#define public_62e5715 _public_62e5715
#define public_62e5717 _public_62e5717
#define public_62e572c _public_62e572c
#define public_62e572e _public_62e572e
#define public_62e577c _public_62e577c
#define public_62e5780 _public_62e5780
#define public_62e57b6 _public_62e57b6
#define public_62e5812 _public_62e5812

PROC_DECLARE(0x62e55b0, internal_62e55b0, public_62e55b0);
extern "C" NAKED register_t __cdecl internal_62e55b0()
{
    __asm
    {
        sub esp, 0x4C
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x60]
        test esi, esi
        mov dword ptr ss : [esp+0x24], 0
        mov dword ptr ss : [esp+0x28], 0
        mov dword ptr ss : [esp+0x2C], 0
        jne public_62e55f5
        mov eax, dword ptr ss : [esp+0x58]
        mov edx, dword ptr ss : [esp+0x24]
        mov ecx, eax
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ss : [esp+0x28]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ss : [esp+0x2C]
        pop esi
        mov dword ptr ds : [ecx+8], edx
        pop ebp
        add esp, 0x4C
        ret 
        public_62e55f5 : nop
        mov eax, dword ptr ds : [esi]
        push edi
        lea ecx, ss:[esp+0x4C]
        push ecx
        lea edx, ss:[esp+0x10]
        push edx
        mov ecx, esi
        call dword ptr ds : [eax+0x2C]
        mov ebp, dword ptr ss : [esp+0x60]
        mov ecx, dword ptr ss : [ebp+0x84]
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x10]
        mov edi, eax
        mov eax, dword ptr ds : [public_63fca48]
        test eax, eax
        jne public_62e562b
        call public_6391cf0
        mov dword ptr ds : [public_63fca48], eax
        public_62e562b : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x4C]
        push edx
        push edi
        lea edx, ss:[esp+0x24]
        push edx
        push eax
        call dword ptr ds : [ecx+0x3C]
        fld dword ptr ss : [esp+0x1C]
        fmul dword ptr ss : [esp+0x1C]
        mov eax, dword ptr ss : [esp+0x1C]
        fld dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ss : [esp+0x20]
        fmul dword ptr ss : [esp+0x20]
        mov dword ptr ss : [esp+0x10], eax
        mov dword ptr ss : [esp+0x14], ecx
        mov ecx, 0x5F3759DF
        faddp 
        mov edx, dword ptr ss : [esp+0x24]
        fld dword ptr ss : [esp+0x24]
        mov dword ptr ss : [esp+0x18], edx
        fmul dword ptr ss : [esp+0x24]
        pop edi
        faddp 
        fst dword ptr ss : [esp+0x60]
        mov eax, dword ptr ss : [esp+0x60]
        sar eax, 1
        sub ecx, eax
        mov dword ptr ss : [esp+0x60], ecx
        fld dword ptr ss : [esp+0x60]
        fmul dword ptr ss : [esp+0x60]
        fmul st, st(1)
        fmul dword ptr ds : [public_639c13c]
        fsubr dword ptr ds : [public_639e6d0]
        fmul dword ptr ss : [esp+0x60]
        fmul st, st(1)
        fcomp qword ptr ds : [public_639f418]
        fnstsw ax
        fstp st(0)
        test ah, 5
        jp public_62e56cf
        mov eax, dword ptr ss : [esp+0x58]
        pop esi
        mov dword ptr ds : [eax], 0x3F800000
        mov dword ptr ds : [eax+4], 0
        mov dword ptr ds : [eax+8], 0
        pop ebp
        add esp, 0x4C
        ret 
        public_62e56cf : nop
        mov edx, dword ptr ds : [esi]
        lea eax, ss:[esp+0x30]
        push eax
        lea ecx, ss:[esp+0x40]
        push ecx
        mov ecx, esi
        call dword ptr ds : [edx+0x28]
        fld dword ptr ss : [esp+0x38]
        fsub dword ptr ss : [esp+0x44]
        fld dword ptr ss : [esp+0x30]
        fsub dword ptr ss : [esp+0x3C]
        faddp 
        fmul qword ptr ds : [public_639df88]
        fld dword ptr ss : [esp+0x34]
        fsub dword ptr ss : [esp+0x40]
        fld st(1)
        fdiv st, st(1)
        fcomp qword ptr ds : [public_639c420]
        fnstsw ax
        test ah, 0x41
        jne public_62e5715
        mov cl, 1
        jmp public_62e5717
        public_62e5715 : nop
        xor cl, cl
        public_62e5717 : nop
        fdiv st, st(1)
        fcomp dword ptr ds : [public_63a0498]
        fnstsw ax
        fstp st(0)
        test ah, 0x41
        jne public_62e572c
        mov al, 1
        jmp public_62e572e
        public_62e572c : nop
        xor al, al
        public_62e572e : nop
        test cl, cl
        je public_62e577c
        fld dword ptr ss : [esp+0x18]
        fmul dword ptr ds : [public_63a0788]
        fld dword ptr ss : [esp+0x14]
        fmul dword ptr ss : [esp+0x14]
        fld dword ptr ss : [esp+0x10]
        fmul dword ptr ss : [esp+0x10]
        faddp 
        fld st(1)
        fmul st, st(2)
        faddp 
        fsqrt 
        fdivr dword ptr ds : [public_639a1d0]
        fst dword ptr ss : [esp+0x60]
        fmulp 
        fld dword ptr ss : [esp+0x60]
        fmul dword ptr ss : [esp+0x10]
        fstp dword ptr ss : [esp+0x10]
        fld dword ptr ss : [esp+0x14]
        fmul dword ptr ss : [esp+0x60]
        fstp dword ptr ss : [esp+0x14]
        jmp public_62e5780
        public_62e577c : nop
        fld dword ptr ss : [esp+0xC]
        public_62e5780 : nop
        test al, al
        je public_62e57b6
        fld dword ptr ss : [esp+0x10]
        fmul dword ptr ds : [public_63a0788]
        fld dword ptr ss : [esp+0x14]
        fmul dword ptr ss : [esp+0x14]
        fld st(1)
        fmul st, st(2)
        faddp 
        fld st(2)
        fmul st, st(3)
        faddp 
        fsqrt 
        fdivr dword ptr ds : [public_639a1d0]
        fld st(0)
        fmulp st(3), st
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x10]
        fstp st(0)
        public_62e57b6 : nop
        fchs 
        mov ecx, dword ptr ss : [ebp+0x84]
        fld dword ptr ss : [esp+0x10]
        fchs 
        fld st(0)
        fmul st, st(1)
        fld st(2)
        fmul st, st(3)
        faddp 
        fsqrt 
        fdivr dword ptr ds : [public_639a1d0]
        fst dword ptr ss : [esp+0x60]
        fmul st, st(2)
        fstp dword ptr ss : [esp+0x24]
        fmul dword ptr ss : [esp+0x60]
        fstp dword ptr ss : [esp+0x28]
        fstp st(0)
        fld dword ptr ss : [esp+0x60]
        fmul dword ptr ds : [public_6399408]
        fstp dword ptr ss : [esp+0x2C]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x10]
        mov esi, eax
        mov eax, dword ptr ds : [public_63fca48]
        test eax, eax
        jne public_62e5812
        call public_6391cf0
        mov dword ptr ds : [public_63fca48], eax
        public_62e5812 : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x24]
        push edx
        push esi
        lea edx, ss:[esp+0x20]
        push edx
        push eax
        call dword ptr ds : [ecx+0x30]
        mov eax, dword ptr ss : [esp+0x58]
        mov edx, dword ptr ss : [esp+0x18]
        mov ecx, eax
        mov dword ptr ds : [ecx], edx
        mov edx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ss : [esp+0x20]
        pop esi
        mov dword ptr ds : [ecx+8], edx
        pop ebp
        add esp, 0x4C
        ret 
        UNREACHABLE_TRAP(0x62e55b0)
    }
}

#undef public_62e55f5
#undef public_62e562b
#undef public_62e56cf
#undef public_62e5715
#undef public_62e5717
#undef public_62e572c
#undef public_62e572e
#undef public_62e577c
#undef public_62e5780
#undef public_62e57b6
#undef public_62e5812
