#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6335440);
CLANG_FORWARD_PROC_SYMBOL(public_6391cf0);

#define public_633547d _public_633547d
#define public_63354bf _public_63354bf
#define public_6335608 _public_6335608
#define public_6335615 _public_6335615
#define public_6335668 _public_6335668
#define public_63356c6 _public_63356c6
#define public_63356ca _public_63356ca
#define public_63357a5 _public_63357a5
#define public_63357b2 _public_63357b2
#define public_6335803 _public_6335803
#define public_6335863 _public_6335863
#define public_6335865 _public_6335865
#define public_6335895 _public_6335895
#define public_63358d6 _public_63358d6
#define public_6335900 _public_6335900
#define public_633598e _public_633598e
#define public_6335990 _public_6335990
#define public_63359be _public_63359be
#define public_63359e8 _public_63359e8
#define public_6335a76 _public_6335a76
#define public_6335a78 _public_6335a78
#define public_6335aff _public_6335aff

PROC_DECLARE(0x6335440, internal_6335440, public_6335440);
extern "C" NAKED register_t __cdecl internal_6335440()
{
    __asm
    {
        sub esp, 0x3C
        mov eax, dword ptr ds : [public_658a9b0]
        test eax, eax
        push esi
        mov esi, dword ptr ss : [esp+0x48]
        fld dword ptr ds : [esi]
        push edi
        mov edi, dword ptr ss : [esp+0x48]
        fsub dword ptr ds : [edi+0x24]
        fstp dword ptr ss : [esp+0x2C]
        fld dword ptr ds : [esi+4]
        fsub dword ptr ds : [edi+0x28]
        fstp dword ptr ss : [esp+0x30]
        fld dword ptr ds : [esi+8]
        fsub dword ptr ds : [edi+0x2C]
        fstp dword ptr ss : [esp+0x34]
        jne public_633547d
        call public_6391cf0
        mov dword ptr ds : [public_658a9b0], eax
        public_633547d : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x2C]
        push edx
        push edi
        lea edx, ss:[esp+0x28]
        push edx
        push eax
        call dword ptr ds : [ecx+0x38]
        fld dword ptr ds : [esi+0xC]
        fsub dword ptr ds : [edi+0x24]
        mov eax, dword ptr ds : [public_658a9b0]
        test eax, eax
        fstp dword ptr ss : [esp+0x38]
        fld dword ptr ds : [esi+0x10]
        fsub dword ptr ds : [edi+0x28]
        fstp dword ptr ss : [esp+0x3C]
        fld dword ptr ds : [esi+0x14]
        fsub dword ptr ds : [edi+0x2C]
        fstp dword ptr ss : [esp+0x40]
        jne public_63354bf
        call public_6391cf0
        mov dword ptr ds : [public_658a9b0], eax
        public_63354bf : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x38]
        push edx
        push edi
        lea edx, ss:[esp+0x34]
        push edx
        push eax
        call dword ptr ds : [ecx+0x38]
        fld dword ptr ds : [edi+0x38]
        fmul qword ptr ds : [public_639df88]
        mov dword ptr ss : [esp+0x48], 0x40000000
        fstp dword ptr ss : [esp+0x4C]
        fld dword ptr ss : [esp+0x2C]
        fsub dword ptr ss : [esp+0x20]
        fst dword ptr ss : [esp+0x18]
        fld dword ptr ss : [esp+0x34]
        fsub dword ptr ss : [esp+0x28]
        fst dword ptr ss : [esp+0x1C]
        fld st(0)
        fmul st, st(1)
        fld st(2)
        fmul st, st(3)
        faddp 
        fstp dword ptr ss : [esp+0xC]
        fld dword ptr ss : [esp+0x28]
        fmul st, st(1)
        fld dword ptr ss : [esp+0x20]
        fmul st, st(3)
        faddp 
        fadd st(0), st
        fstp st(2)
        fstp st(0)
        fld st(0)
        fmul st, st(1)
        fld dword ptr ss : [esp+0x28]
        fmul dword ptr ss : [esp+0x28]
        fld dword ptr ss : [esp+0x20]
        fmul dword ptr ss : [esp+0x20]
        faddp 
        fld dword ptr ds : [edi+0x30]
        fld st(0)
        fmulp 
        fsubr st, st(1)
        fmul dword ptr ss : [esp+0xC]
        fmul dword ptr ds : [public_63a05c0]
        fsubr st, st(2)
        fcom dword ptr ds : [public_6399408]
        fnstsw ax
        test ah, 0x41
        jne public_6335668
        fsqrt 
        fld dword ptr ss : [esp+0xC]
        fadd st(0), st
        fld st(4)
        fchs 
        fsub st, st(2)
        fdiv st, st(1)
        fstp dword ptr ss : [esp+0x10]
        fxch 
        fsub st, st(4)
        fdiv st, st(1)
        fstp dword ptr ss : [esp+8]
        fstp st(0)
        fld dword ptr ss : [esp+0x10]
        fcomp qword ptr ds : [public_639c430]
        fnstsw ax
        test ah, 1
        jne public_6335615
        fld dword ptr ss : [esp+0x10]
        fcomp dword ptr ds : [public_63a0498]
        fnstsw ax
        test ah, 0x41
        jp public_6335615
        fld dword ptr ss : [esp+0x30]
        fsub dword ptr ss : [esp+0x24]
        fst dword ptr ss : [esp+0x14]
        fmul dword ptr ss : [esp+0x10]
        fadd dword ptr ss : [esp+0x24]
        fabs 
        fld dword ptr ss : [esp+0x4C]
        fcompp 
        fnstsw ax
        test ah, 1
        jne public_6335615
        fld dword ptr ss : [esp+8]
        fcomp qword ptr ds : [public_639c430]
        fnstsw ax
        test ah, 1
        jne public_6335608
        fld dword ptr ss : [esp+8]
        fcomp dword ptr ss : [esp+0x10]
        fnstsw ax
        test ah, 0x41
        jp public_6335608
        fld dword ptr ss : [esp+0x14]
        fmul dword ptr ss : [esp+8]
        fadd dword ptr ss : [esp+0x24]
        fabs 
        fld dword ptr ss : [esp+0x4C]
        fcompp 
        fnstsw ax
        test ah, 1
        jne public_6335608
        mov eax, dword ptr ss : [esp+8]
        jmp public_63356c6
        public_6335608 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+0x48], ecx
        jmp public_63356ca
        public_6335615 : nop
        fld dword ptr ss : [esp+8]
        fcomp qword ptr ds : [public_639c430]
        fnstsw ax
        test ah, 1
        jne public_63356ca
        fld dword ptr ss : [esp+8]
        fcomp dword ptr ds : [public_63a0498]
        fnstsw ax
        test ah, 0x41
        jp public_63356ca
        fld dword ptr ss : [esp+0x30]
        fsub dword ptr ss : [esp+0x24]
        fmul dword ptr ss : [esp+8]
        fadd dword ptr ss : [esp+0x24]
        fabs 
        fld dword ptr ss : [esp+0x4C]
        fcompp 
        fnstsw ax
        test ah, 1
        jne public_63356ca
        mov edx, dword ptr ss : [esp+8]
        mov dword ptr ss : [esp+0x48], edx
        jmp public_63356ca
        public_6335668 : nop
        fcomp dword ptr ds : [public_6399408]
        fnstsw ax
        test ah, 0x44
        jp public_63356ca
        fld st(2)
        fchs 
        fld dword ptr ss : [esp+0xC]
        fadd st(0), st
        fdivp 
        fst dword ptr ss : [esp+0x14]
        fcomp qword ptr ds : [public_639c430]
        fnstsw ax
        test ah, 1
        jne public_63356ca
        fld dword ptr ss : [esp+0x14]
        fcomp dword ptr ds : [public_63a0498]
        fnstsw ax
        test ah, 0x41
        jp public_63356ca
        fld dword ptr ss : [esp+0x30]
        fsub dword ptr ss : [esp+0x24]
        fmul dword ptr ss : [esp+0x14]
        fadd dword ptr ss : [esp+0x24]
        fabs 
        fld dword ptr ss : [esp+0x4C]
        fcompp 
        fnstsw ax
        test ah, 1
        jne public_63356ca
        mov eax, dword ptr ss : [esp+0x14]
        public_63356c6 : nop
        mov dword ptr ss : [esp+0x48], eax
        public_63356ca : nop
        fld dword ptr ds : [edi+0x34]
        fld st(0)
        fmul st, st(1)
        fsubr st, st(2)
        fmul dword ptr ss : [esp+0xC]
        fmul dword ptr ds : [public_63a05c0]
        fsubp st(3), st
        fstp st(0)
        fstp st(0)
        fcom dword ptr ds : [public_6399408]
        fnstsw ax
        test ah, 0x41
        jne public_6335803
        fsqrt 
        fld dword ptr ss : [esp+0xC]
        fadd st(0), st
        fld st(2)
        fchs 
        fsub st, st(2)
        fdiv st, st(1)
        fstp dword ptr ss : [esp+0x10]
        fxch 
        fsub st, st(2)
        fdiv st, st(1)
        fstp dword ptr ss : [esp+8]
        fstp st(0)
        fstp st(0)
        fld dword ptr ss : [esp+0x10]
        fcomp qword ptr ds : [public_639c430]
        fnstsw ax
        test ah, 1
        jne public_63357b2
        fld dword ptr ss : [esp+0x10]
        fcomp dword ptr ss : [esp+0x48]
        fnstsw ax
        test ah, 0x41
        jp public_63357b2
        fld dword ptr ss : [esp+0x30]
        fsub dword ptr ss : [esp+0x24]
        fst dword ptr ss : [esp+0x14]
        fmul dword ptr ss : [esp+0x10]
        fadd dword ptr ss : [esp+0x24]
        fabs 
        fld dword ptr ss : [esp+0x4C]
        fcompp 
        fnstsw ax
        test ah, 1
        jne public_63357b2
        fld dword ptr ss : [esp+8]
        fcomp qword ptr ds : [public_639c430]
        fnstsw ax
        test ah, 1
        jne public_63357a5
        fld dword ptr ss : [esp+8]
        fcomp dword ptr ss : [esp+0x10]
        fnstsw ax
        test ah, 0x41
        jp public_63357a5
        fld dword ptr ss : [esp+0x14]
        fmul dword ptr ss : [esp+8]
        fadd dword ptr ss : [esp+0x24]
        fabs 
        fld dword ptr ss : [esp+0x4C]
        fcompp 
        fnstsw ax
        test ah, 1
        jne public_63357a5
        mov ecx, dword ptr ss : [esp+8]
        mov dword ptr ss : [esp+0x48], ecx
        jmp public_6335865
        public_63357a5 : nop
        mov edx, dword ptr ss : [esp+0x10]
        mov dword ptr ss : [esp+0x48], edx
        jmp public_6335865
        public_63357b2 : nop
        fld dword ptr ss : [esp+8]
        fcomp qword ptr ds : [public_639c430]
        fnstsw ax
        test ah, 1
        jne public_6335865
        fld dword ptr ss : [esp+8]
        fcomp dword ptr ss : [esp+0x48]
        fnstsw ax
        test ah, 0x41
        jp public_6335865
        fld dword ptr ss : [esp+0x30]
        fsub dword ptr ss : [esp+0x24]
        fmul dword ptr ss : [esp+8]
        fadd dword ptr ss : [esp+0x24]
        fabs 
        fld dword ptr ss : [esp+0x4C]
        fcompp 
        fnstsw ax
        test ah, 1
        jne public_6335865
        mov eax, dword ptr ss : [esp+8]
        mov dword ptr ss : [esp+0x48], eax
        jmp public_6335865
        public_6335803 : nop
        fcomp dword ptr ds : [public_6399408]
        fnstsw ax
        test ah, 0x44
        jp public_6335863
        fchs 
        fld dword ptr ss : [esp+0xC]
        fadd st(0), st
        fdivp 
        fst dword ptr ss : [esp+0x14]
        fcomp qword ptr ds : [public_639c430]
        fnstsw ax
        test ah, 1
        jne public_6335865
        fld dword ptr ss : [esp+0x14]
        fcomp dword ptr ss : [esp+0x48]
        fnstsw ax
        test ah, 0x41
        jp public_6335865
        fld dword ptr ss : [esp+0x30]
        fsub dword ptr ss : [esp+0x24]
        fmul dword ptr ss : [esp+0x14]
        fadd dword ptr ss : [esp+0x24]
        fabs 
        fld dword ptr ss : [esp+0x4C]
        fcompp 
        fnstsw ax
        test ah, 1
        jne public_6335865
        mov ecx, dword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp+0x48], ecx
        jmp public_6335865
        public_6335863 : nop
        fstp st(0)
        public_6335865 : nop
        fld dword ptr ds : [esi+0xC]
        mov eax, dword ptr ds : [public_658a9b0]
        test eax, eax
        fsub dword ptr ds : [esi]
        fstp dword ptr ss : [esp+0x38]
        fld dword ptr ds : [esi+0x10]
        fsub dword ptr ds : [esi+4]
        fstp dword ptr ss : [esp+0x3C]
        fld dword ptr ds : [esi+0x14]
        fsub dword ptr ds : [esi+8]
        fstp dword ptr ss : [esp+0x40]
        jne public_6335895
        call public_6391cf0
        mov dword ptr ds : [public_658a9b0], eax
        public_6335895 : nop
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[esp+0x38]
        push ecx
        push edi
        lea ecx, ss:[esp+0x34]
        push ecx
        push eax
        call dword ptr ds : [edx+0x38]
        fld dword ptr ss : [esp+0x4C]
        fchs 
        fsub dword ptr ss : [esp+0x24]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x30]
        fcomp dword ptr ds : [public_6399408]
        fnstsw ax
        test ah, 0x41
        jne public_63358d6
        fld dword ptr ss : [esp+8]
        fcomp dword ptr ds : [public_6399408]
        fnstsw ax
        test ah, 0x41
        je public_6335900
        public_63358d6 : nop
        fld dword ptr ss : [esp+0x30]
        fcomp dword ptr ds : [public_6399408]
        fnstsw ax
        test ah, 5
        jp public_6335990
        fld dword ptr ss : [esp+8]
        fcomp dword ptr ds : [public_6399408]
        fnstsw ax
        test ah, 5
        jp public_6335990
        public_6335900 : nop
        fld dword ptr ss : [esp+8]
        fdiv dword ptr ss : [esp+0x30]
        fst dword ptr ss : [esp+0x14]
        fcomp dword ptr ds : [public_6399408]
        fnstsw ax
        test ah, 0x41
        jne public_6335990
        fld dword ptr ss : [esp+0x14]
        fcomp dword ptr ss : [esp+0x48]
        fnstsw ax
        test ah, 5
        jp public_6335990
        fld dword ptr ss : [esp+0x1C]
        fld dword ptr ss : [esp+0x18]
        fmul dword ptr ss : [esp+0x14]
        fstp dword ptr ss : [esp+0x38]
        fmul dword ptr ss : [esp+0x14]
        fld dword ptr ss : [esp+0x20]
        fadd dword ptr ss : [esp+0x38]
        fld dword ptr ss : [esp+0x28]
        fadd st, st(2)
        fld st(0)
        fmul st, st(1)
        fld st(2)
        fmul st, st(3)
        faddp 
        fstp st(3)
        fstp st(0)
        fstp st(0)
        fld dword ptr ds : [edi+0x30]
        fld st(0)
        fmul st, st(1)
        fld st(2)
        fcompp 
        fnstsw ax
        fstp st(0)
        test ah, 5
        jp public_633598e
        fld dword ptr ds : [edi+0x34]
        fld st(0)
        fmul st, st(1)
        fxch 
        fxch st(2)
        fcompp 
        fnstsw ax
        fstp st(0)
        test ah, 0x41
        jne public_6335990
        mov edx, dword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp+0x48], edx
        jmp public_6335990
        public_633598e : nop
        fstp st(0)
        public_6335990 : nop
        fld dword ptr ss : [esp+0x4C]
        fsub dword ptr ss : [esp+0x24]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x30]
        fcomp dword ptr ds : [public_6399408]
        fnstsw ax
        test ah, 0x41
        jne public_63359be
        fld dword ptr ss : [esp+8]
        fcomp dword ptr ds : [public_6399408]
        fnstsw ax
        test ah, 0x41
        je public_63359e8
        public_63359be : nop
        fld dword ptr ss : [esp+0x30]
        fcomp dword ptr ds : [public_6399408]
        fnstsw ax
        test ah, 5
        jp public_6335a78
        fld dword ptr ss : [esp+8]
        fcomp dword ptr ds : [public_6399408]
        fnstsw ax
        test ah, 5
        jp public_6335a78
        public_63359e8 : nop
        fld dword ptr ss : [esp+8]
        fdiv dword ptr ss : [esp+0x30]
        fst dword ptr ss : [esp+0x4C]
        fcomp dword ptr ds : [public_6399408]
        fnstsw ax
        test ah, 0x41
        jne public_6335a78
        fld dword ptr ss : [esp+0x4C]
        fcomp dword ptr ss : [esp+0x48]
        fnstsw ax
        test ah, 5
        jp public_6335a78
        fld dword ptr ss : [esp+0x1C]
        fld dword ptr ss : [esp+0x18]
        fmul dword ptr ss : [esp+0x4C]
        fstp dword ptr ss : [esp+0x38]
        fmul dword ptr ss : [esp+0x4C]
        fld dword ptr ss : [esp+0x20]
        fadd dword ptr ss : [esp+0x38]
        fld dword ptr ss : [esp+0x28]
        fadd st, st(2)
        fld st(0)
        fmul st, st(1)
        fld st(2)
        fmul st, st(3)
        faddp 
        fstp st(3)
        fstp st(0)
        fstp st(0)
        fld dword ptr ds : [edi+0x30]
        fld st(0)
        fmul st, st(1)
        fld st(2)
        fcompp 
        fnstsw ax
        fstp st(0)
        test ah, 5
        jp public_6335a76
        fld dword ptr ds : [edi+0x34]
        fld st(0)
        fmul st, st(1)
        fxch 
        fxch st(2)
        fcompp 
        fnstsw ax
        fstp st(0)
        test ah, 0x41
        jne public_6335a78
        mov eax, dword ptr ss : [esp+0x4C]
        mov dword ptr ss : [esp+0x48], eax
        jmp public_6335a78
        public_6335a76 : nop
        fstp st(0)
        public_6335a78 : nop
        fld dword ptr ss : [esp+0x48]
        fcomp dword ptr ds : [public_6399408]
        fnstsw ax
        test ah, 1
        jne public_6335aff
        fld dword ptr ss : [esp+0x48]
        fcomp qword ptr ds : [public_6399410]
        fnstsw ax
        test ah, 0x41
        jp public_6335aff
        fld dword ptr ds : [esi+0xC]
        mov ecx, dword ptr ss : [esp+0x50]
        fsub dword ptr ds : [esi]
        pop edi
        fld dword ptr ds : [esi+0x10]
        fsub dword ptr ds : [esi+4]
        fld dword ptr ds : [esi+0x14]
        fsub dword ptr ds : [esi+8]
        fstp dword ptr ss : [esp+0x3C]
        fxch 
        fmul dword ptr ss : [esp+0x44]
        fstp dword ptr ss : [esp+0x28]
        fmul dword ptr ss : [esp+0x44]
        fld dword ptr ss : [esp+0x3C]
        fmul dword ptr ss : [esp+0x44]
        fld dword ptr ss : [esp+0x28]
        fadd dword ptr ds : [esi]
        fstp dword ptr ss : [esp+0x28]
        mov edx, dword ptr ss : [esp+0x28]
        fxch 
        fadd dword ptr ds : [esi+4]
        fstp dword ptr ss : [esp+0x2C]
        mov eax, dword ptr ss : [esp+0x2C]
        fadd dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx], edx
        mov dword ptr ds : [ecx+4], eax
        mov al, 1
        fstp dword ptr ss : [esp+0x30]
        mov edx, dword ptr ss : [esp+0x30]
        mov dword ptr ds : [ecx+8], edx
        pop esi
        add esp, 0x3C
        ret 
        public_6335aff : nop
        pop edi
        xor al, al
        pop esi
        add esp, 0x3C
        ret 
        UNREACHABLE_TRAP(0x6335440)
    }
}

#undef public_633547d
#undef public_63354bf
#undef public_6335608
#undef public_6335615
#undef public_6335668
#undef public_63356c6
#undef public_63356ca
#undef public_63357a5
#undef public_63357b2
#undef public_6335803
#undef public_6335863
#undef public_6335865
#undef public_6335895
#undef public_63358d6
#undef public_6335900
#undef public_633598e
#undef public_6335990
#undef public_63359be
#undef public_63359e8
#undef public_6335a76
#undef public_6335a78
#undef public_6335aff
