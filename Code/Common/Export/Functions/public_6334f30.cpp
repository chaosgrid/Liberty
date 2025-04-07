#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_628b030);
CLANG_FORWARD_PROC_SYMBOL(public_6334f30);
CLANG_FORWARD_PROC_SYMBOL(public_6391cf0);

#define public_6334f78 _public_6334f78
#define public_6334fc5 _public_6334fc5
#define public_6335116 _public_6335116
#define public_6335123 _public_6335123
#define public_6335176 _public_6335176
#define public_63351d8 _public_63351d8
#define public_63351da _public_63351da
#define public_633520a _public_633520a
#define public_633524b _public_633524b
#define public_6335271 _public_6335271
#define public_63352e5 _public_63352e5
#define public_6335313 _public_6335313
#define public_6335339 _public_6335339
#define public_63353ad _public_63353ad
#define public_6335434 _public_6335434

PROC_DECLARE(0x6334f30, internal_6334f30, public_6334f30);
extern "C" NAKED register_t __cdecl internal_6334f30()
{
    __asm
    {
        sub esp, 0x38
        push esi
        mov esi, dword ptr ss : [esp+0x44]
        fld dword ptr ds : [esi+8]
        push edi
        mov edi, dword ptr ss : [esp+0x44]
        fsub dword ptr ds : [edi+0x2C]
        sub esp, 0xC
        lea ecx, ss:[esp+0x40]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ds : [esi+4]
        fsub dword ptr ds : [edi+0x28]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ds : [esi]
        fsub dword ptr ds : [edi+0x24]
        fstp dword ptr ss : [esp]
        call public_628b030
        mov eax, dword ptr ds : [public_658a9b0]
        test eax, eax
        jne public_6334f78
        call public_6391cf0
        mov dword ptr ds : [public_658a9b0], eax
        public_6334f78 : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x34]
        push edx
        push edi
        lea edx, ss:[esp+0x24]
        push edx
        push eax
        call dword ptr ds : [ecx+0x38]
        fld dword ptr ds : [esi+0x14]
        fsub dword ptr ds : [edi+0x2C]
        sub esp, 0xC
        lea ecx, ss:[esp+0x40]
        fstp dword ptr ss : [esp+8]
        fld dword ptr ds : [esi+0x10]
        fsub dword ptr ds : [edi+0x28]
        fstp dword ptr ss : [esp+4]
        fld dword ptr ds : [esi+0xC]
        fsub dword ptr ds : [edi+0x24]
        fstp dword ptr ss : [esp]
        call public_628b030
        mov eax, dword ptr ds : [public_658a9b0]
        test eax, eax
        jne public_6334fc5
        call public_6391cf0
        mov dword ptr ds : [public_658a9b0], eax
        public_6334fc5 : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x34]
        push edx
        push edi
        lea edx, ss:[esp+0x30]
        push edx
        push eax
        call dword ptr ds : [ecx+0x38]
        fld dword ptr ds : [edi+0x34]
        fmul qword ptr ds : [public_639df88]
        mov dword ptr ss : [esp+0x44], 0x40000000
        fstp dword ptr ss : [esp+8]
        fld dword ptr ss : [esp+0x28]
        fsub dword ptr ss : [esp+0x1C]
        fst dword ptr ss : [esp+0x14]
        fld dword ptr ss : [esp+0x30]
        fsub dword ptr ss : [esp+0x24]
        fst dword ptr ss : [esp+0x18]
        fld st(0)
        fmul st, st(1)
        fld st(2)
        fmul st, st(3)
        faddp 
        fstp dword ptr ss : [esp+0x48]
        fld dword ptr ss : [esp+0x24]
        fmul st, st(1)
        fld dword ptr ss : [esp+0x1C]
        fmul st, st(3)
        faddp 
        fadd st(0), st
        fstp st(2)
        fstp st(0)
        fld dword ptr ds : [edi+0x30]
        fld st(1)
        fmul st, st(2)
        fld dword ptr ss : [esp+0x24]
        fmul dword ptr ss : [esp+0x24]
        fld dword ptr ss : [esp+0x1C]
        fmul dword ptr ss : [esp+0x1C]
        faddp 
        fld st(2)
        fmul st, st(3)
        fsubp 
        fmul dword ptr ss : [esp+0x48]
        fmul dword ptr ds : [public_63a05c0]
        fsubp 
        fstp st(1)
        fcom dword ptr ds : [public_6399408]
        fnstsw ax
        test ah, 0x41
        jne public_6335176
        fsqrt 
        fld dword ptr ss : [esp+0x48]
        fadd st(0), st
        fld st(2)
        fchs 
        fsub st, st(2)
        fdiv st, st(1)
        fstp dword ptr ss : [esp+0xC]
        fxch 
        fsub st, st(2)
        fdiv st, st(1)
        fstp dword ptr ss : [esp+0x48]
        fstp st(0)
        fstp st(0)
        fld dword ptr ss : [esp+0xC]
        fcomp qword ptr ds : [public_639c430]
        fnstsw ax
        test ah, 1
        jne public_6335123
        fld dword ptr ss : [esp+0xC]
        fcomp dword ptr ds : [public_63a0498]
        fnstsw ax
        test ah, 0x41
        jp public_6335123
        fld dword ptr ss : [esp+0x2C]
        fsub dword ptr ss : [esp+0x20]
        fst dword ptr ss : [esp+0x10]
        fmul dword ptr ss : [esp+0xC]
        fadd dword ptr ss : [esp+0x20]
        fabs 
        fld dword ptr ss : [esp+8]
        fcompp 
        fnstsw ax
        test ah, 1
        jne public_6335123
        fld dword ptr ss : [esp+0x48]
        fcomp qword ptr ds : [public_639c430]
        fnstsw ax
        test ah, 1
        jne public_6335116
        fld dword ptr ss : [esp+0x48]
        fcomp dword ptr ss : [esp+0xC]
        fnstsw ax
        test ah, 0x41
        jp public_6335116
        fld dword ptr ss : [esp+0x10]
        fmul dword ptr ss : [esp+0x48]
        fadd dword ptr ss : [esp+0x20]
        fabs 
        fld dword ptr ss : [esp+8]
        fcompp 
        fnstsw ax
        test ah, 1
        jne public_6335116
        mov eax, dword ptr ss : [esp+0x48]
        mov dword ptr ss : [esp+0x44], eax
        jmp public_63351da
        public_6335116 : nop
        mov ecx, dword ptr ss : [esp+0xC]
        mov dword ptr ss : [esp+0x44], ecx
        jmp public_63351da
        public_6335123 : nop
        fld dword ptr ss : [esp+0x48]
        fcomp qword ptr ds : [public_639c430]
        fnstsw ax
        test ah, 1
        jne public_63351da
        fld dword ptr ss : [esp+0x48]
        fcomp dword ptr ds : [public_63a0498]
        fnstsw ax
        test ah, 0x41
        jp public_63351da
        fld dword ptr ss : [esp+0x2C]
        fsub dword ptr ss : [esp+0x20]
        fmul dword ptr ss : [esp+0x48]
        fadd dword ptr ss : [esp+0x20]
        fabs 
        fld dword ptr ss : [esp+8]
        fcompp 
        fnstsw ax
        test ah, 1
        jne public_63351da
        mov edx, dword ptr ss : [esp+0x48]
        mov dword ptr ss : [esp+0x44], edx
        jmp public_63351da
        public_6335176 : nop
        fcomp dword ptr ds : [public_6399408]
        fnstsw ax
        test ah, 0x44
        jp public_63351d8
        fchs 
        fld dword ptr ss : [esp+0x48]
        fadd st(0), st
        fdivp 
        fst dword ptr ss : [esp+0x48]
        fcomp qword ptr ds : [public_639c430]
        fnstsw ax
        test ah, 1
        jne public_63351da
        fld dword ptr ss : [esp+0x48]
        fcomp dword ptr ds : [public_63a0498]
        fnstsw ax
        test ah, 0x41
        jp public_63351da
        fld dword ptr ss : [esp+0x2C]
        fsub dword ptr ss : [esp+0x20]
        fmul dword ptr ss : [esp+0x48]
        fadd dword ptr ss : [esp+0x20]
        fabs 
        fld dword ptr ss : [esp+8]
        fcompp 
        fnstsw ax
        test ah, 1
        jne public_63351da
        mov eax, dword ptr ss : [esp+0x48]
        mov dword ptr ss : [esp+0x44], eax
        jmp public_63351da
        public_63351d8 : nop
        fstp st(0)
        public_63351da : nop
        fld dword ptr ds : [esi+0xC]
        mov eax, dword ptr ds : [public_658a9b0]
        test eax, eax
        fsub dword ptr ds : [esi]
        fstp dword ptr ss : [esp+0x34]
        fld dword ptr ds : [esi+0x10]
        fsub dword ptr ds : [esi+4]
        fstp dword ptr ss : [esp+0x38]
        fld dword ptr ds : [esi+0x14]
        fsub dword ptr ds : [esi+8]
        fstp dword ptr ss : [esp+0x3C]
        jne public_633520a
        call public_6391cf0
        mov dword ptr ds : [public_658a9b0], eax
        public_633520a : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x34]
        push edx
        push edi
        lea edx, ss:[esp+0x30]
        push edx
        push eax
        call dword ptr ds : [ecx+0x38]
        fld dword ptr ss : [esp+8]
        fchs 
        fsub dword ptr ss : [esp+0x20]
        fstp dword ptr ss : [esp+0x48]
        fld dword ptr ss : [esp+0x2C]
        fcomp dword ptr ds : [public_6399408]
        fnstsw ax
        test ah, 0x41
        jne public_633524b
        fld dword ptr ss : [esp+0x48]
        fcomp dword ptr ds : [public_6399408]
        fnstsw ax
        test ah, 0x41
        je public_6335271
        public_633524b : nop
        fld dword ptr ss : [esp+0x2C]
        fcomp dword ptr ds : [public_6399408]
        fnstsw ax
        test ah, 5
        jp public_63352e5
        fld dword ptr ss : [esp+0x48]
        fcomp dword ptr ds : [public_6399408]
        fnstsw ax
        test ah, 5
        jp public_63352e5
        public_6335271 : nop
        fld dword ptr ss : [esp+0x48]
        fdiv dword ptr ss : [esp+0x2C]
        fst dword ptr ss : [esp+0x48]
        fcomp dword ptr ds : [public_6399408]
        fnstsw ax
        test ah, 0x41
        jne public_63352e5
        fld dword ptr ss : [esp+0x48]
        fcomp dword ptr ss : [esp+0x44]
        fnstsw ax
        test ah, 5
        jp public_63352e5
        fld dword ptr ss : [esp+0x18]
        fld dword ptr ss : [esp+0x14]
        fmul dword ptr ss : [esp+0x48]
        fstp dword ptr ss : [esp+0x34]
        fmul dword ptr ss : [esp+0x48]
        fld dword ptr ss : [esp+0x1C]
        fadd dword ptr ss : [esp+0x34]
        fld dword ptr ss : [esp+0x24]
        fadd st, st(2)
        fld dword ptr ds : [edi+0x30]
        fld st(1)
        fmul st, st(2)
        fld st(3)
        fmul st, st(4)
        faddp 
        fld st(1)
        fmul st, st(2)
        fcompp 
        fstp st(0)
        fstp st(0)
        fnstsw ax
        fstp st(0)
        test ah, 0x41
        fstp st(0)
        jne public_63352e5
        mov eax, dword ptr ss : [esp+0x48]
        mov dword ptr ss : [esp+0x44], eax
        public_63352e5 : nop
        fld dword ptr ss : [esp+8]
        fsub dword ptr ss : [esp+0x20]
        fstp dword ptr ss : [esp+0x48]
        fld dword ptr ss : [esp+0x2C]
        fcomp dword ptr ds : [public_6399408]
        fnstsw ax
        test ah, 0x41
        jne public_6335313
        fld dword ptr ss : [esp+0x48]
        fcomp dword ptr ds : [public_6399408]
        fnstsw ax
        test ah, 0x41
        je public_6335339
        public_6335313 : nop
        fld dword ptr ss : [esp+0x2C]
        fcomp dword ptr ds : [public_6399408]
        fnstsw ax
        test ah, 5
        jp public_63353ad
        fld dword ptr ss : [esp+0x48]
        fcomp dword ptr ds : [public_6399408]
        fnstsw ax
        test ah, 5
        jp public_63353ad
        public_6335339 : nop
        fld dword ptr ss : [esp+0x48]
        fdiv dword ptr ss : [esp+0x2C]
        fst dword ptr ss : [esp+0x48]
        fcomp dword ptr ds : [public_6399408]
        fnstsw ax
        test ah, 0x41
        jne public_63353ad
        fld dword ptr ss : [esp+0x48]
        fcomp dword ptr ss : [esp+0x44]
        fnstsw ax
        test ah, 5
        jp public_63353ad
        fld dword ptr ss : [esp+0x18]
        fld dword ptr ss : [esp+0x14]
        fmul dword ptr ss : [esp+0x48]
        fstp dword ptr ss : [esp+0x34]
        fmul dword ptr ss : [esp+0x48]
        fld dword ptr ss : [esp+0x1C]
        fadd dword ptr ss : [esp+0x34]
        fld dword ptr ss : [esp+0x24]
        fadd st, st(2)
        fld dword ptr ds : [edi+0x30]
        fld st(1)
        fmul st, st(2)
        fld st(3)
        fmul st, st(4)
        faddp 
        fld st(1)
        fmul st, st(2)
        fcompp 
        fstp st(0)
        fstp st(0)
        fnstsw ax
        fstp st(0)
        test ah, 0x41
        fstp st(0)
        jne public_63353ad
        mov ecx, dword ptr ss : [esp+0x48]
        mov dword ptr ss : [esp+0x44], ecx
        public_63353ad : nop
        fld dword ptr ss : [esp+0x44]
        fcomp dword ptr ds : [public_6399408]
        fnstsw ax
        test ah, 1
        jne public_6335434
        fld dword ptr ss : [esp+0x44]
        fcomp qword ptr ds : [public_6399410]
        fnstsw ax
        test ah, 0x41
        jp public_6335434
        fld dword ptr ds : [esi+0xC]
        mov edx, dword ptr ss : [esp+0x4C]
        fsub dword ptr ds : [esi]
        pop edi
        fld dword ptr ds : [esi+0x10]
        fsub dword ptr ds : [esi+4]
        fld dword ptr ds : [esi+0x14]
        fsub dword ptr ds : [esi+8]
        fstp dword ptr ss : [esp+0x38]
        fxch 
        fmul dword ptr ss : [esp+0x40]
        fstp dword ptr ss : [esp+0x24]
        fmul dword ptr ss : [esp+0x40]
        fld dword ptr ss : [esp+0x38]
        fmul dword ptr ss : [esp+0x40]
        fld dword ptr ss : [esp+0x24]
        fadd dword ptr ds : [esi]
        fstp dword ptr ss : [esp+0x24]
        mov eax, dword ptr ss : [esp+0x24]
        fxch 
        fadd dword ptr ds : [esi+4]
        fstp dword ptr ss : [esp+0x28]
        mov ecx, dword ptr ss : [esp+0x28]
        fadd dword ptr ds : [esi+8]
        mov dword ptr ds : [edx], eax
        mov dword ptr ds : [edx+4], ecx
        pop esi
        fstp dword ptr ss : [esp+0x28]
        mov eax, dword ptr ss : [esp+0x28]
        mov dword ptr ds : [edx+8], eax
        mov al, 1
        add esp, 0x38
        ret 
        public_6335434 : nop
        pop edi
        xor al, al
        pop esi
        add esp, 0x38
        ret 
        UNREACHABLE_TRAP(0x6334f30)
    }
}

#undef public_6334f78
#undef public_6334fc5
#undef public_6335116
#undef public_6335123
#undef public_6335176
#undef public_63351d8
#undef public_63351da
#undef public_633520a
#undef public_633524b
#undef public_6335271
#undef public_63352e5
#undef public_6335313
#undef public_6335339
#undef public_63353ad
#undef public_6335434
