#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_550d40);
CLANG_FORWARD_PROC_SYMBOL(public_5b73e0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7ec0);

#define public_550d85 _public_550d85
#define public_550d8c _public_550d8c
#define public_550db4 _public_550db4
#define public_550dd0 _public_550dd0
#define public_550de1 _public_550de1
#define public_550e42 _public_550e42
#define public_550e80 _public_550e80
#define public_550e9f _public_550e9f
#define public_550f09 _public_550f09
#define public_550f0d _public_550f0d
#define public_550f1c _public_550f1c
#define public_550f30 _public_550f30
#define public_550f47 _public_550f47
#define public_550f63 _public_550f63
#define public_550f68 _public_550f68
#define public_550f6d _public_550f6d
#define public_550f8d _public_550f8d
#define public_550fa8 _public_550fa8
#define public_551088 _public_551088
#define public_5510db _public_5510db
#define public_5510e2 _public_5510e2
#define public_551189 _public_551189
#define public_55118b _public_55118b
#define public_5511cd _public_5511cd
#define public_551273 _public_551273
#define public_55130c _public_55130c
#define public_55134b _public_55134b
#define public_551385 _public_551385
#define public_55139c _public_55139c
#define public_5513a6 _public_5513a6

PROC_DECLARE(0x550d40, internal_550d40, public_550d40);
extern "C" NAKED register_t __cdecl internal_550d40()
{
    __asm
    {
        sub esp, 0xA4
        push edi
        mov edi, ecx
        mov al, byte ptr ds : [edi+0xEC]
        test al, al
        je public_5513a6
        fld dword ptr ss : [esp+0xB4]
        push ebx
        fdiv dword ptr ds : [edi+0x108]
        push ebp
        push esi
        mov esi, dword ptr ds : [edi+0xC]
        mov dword ptr ss : [esp+0x18], esi
        fimul dword ptr ss : [esp+0x18]
        call public_5b7ec0
        xor ebx, ebx
        cmp eax, ebx
        mov dword ptr ds : [edi+0x10], eax
        jge public_550d85
        mov dword ptr ds : [edi+0x10], ebx
        jmp public_550d8c
        public_550d85 : nop
        cmp eax, esi
        jle public_550d8c
        mov dword ptr ds : [edi+0x10], esi
        public_550d8c : nop
        mov eax, dword ptr ds : [edi+0x104]
        fld dword ptr ss : [esp+0xC0]
        mov dword ptr ss : [esp+0x14], eax
        fcomp dword ptr ss : [esp+0x14]
        fnstsw ax
        test ah, 0x41
        jne public_550db4
        mov dword ptr ds : [edi+0xE0], 0x3F800000
        jmp public_550de1
        public_550db4 : nop
        fld dword ptr ss : [esp+0xC0]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 0x41
        jp public_550dd0
        mov dword ptr ds : [edi+0xE0], ebx
        jmp public_550de1
        public_550dd0 : nop
        fld dword ptr ss : [esp+0xC0]
        fdiv dword ptr ss : [esp+0x14]
        fstp dword ptr ds : [edi+0xE0]
        public_550de1 : nop
        fld dword ptr ds : [edi+0xBC]
        mov ebp, dword ptr ss : [esp+0xB8]
        fadd dword ptr ds : [edi+0x100]
        push ebp
        mov dword ptr ss : [esp+0x34], 0
        mov dword ptr ss : [esp+0x38], 0
        fst dword ptr ds : [edi+0xB8]
        mov ecx, dword ptr ss : [ebp]
        fld dword ptr ds : [edi+0x100]
        fld st(0)
        fmul st, st(1)
        fmul dword ptr ds : [public_5e0e04]
        fstp dword ptr ss : [esp+0x1C]
        fstp st(0)
        fchs 
        fstp dword ptr ss : [esp+0x3C]
        call dword ptr ds : [ecx+0x10]
        mov esi, eax
        mov eax, dword ptr ds : [public_679860]
        cmp eax, ebx
        jne public_550e42
        call public_5b73e0
        mov dword ptr ds : [public_679860], eax
        public_550e42 : nop
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[esp+0x30]
        push ecx
        push esi
        lea ecx, ss:[esp+0x44]
        push ecx
        push eax
        call dword ptr ds : [edx+0x28]
        mov edx, dword ptr ss : [esp+0x3C]
        mov ecx, dword ptr ss : [esp+0x40]
        lea eax, ds:[edi+0xF4]
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ss : [esp+0x44]
        mov dword ptr ds : [eax+4], ecx
        mov ecx, dword ptr ds : [edi]
        mov dword ptr ds : [eax+8], edx
        mov eax, dword ptr ds : [edi+0xC]
        xor esi, esi
        cmp eax, ebx
        mov dword ptr ss : [esp+0x1C], ebx
        jle public_550f1c
        public_550e80 : nop
        fld dword ptr ds : [edi+0xE0]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 0x41
        jp public_550e9f
        mov eax, dword ptr ds : [ecx]
        mov byte ptr ds : [eax+0x50], 0
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ds : [edx+0x51], 1
        public_550e9f : nop
        mov edx, dword ptr ds : [ecx]
        mov al, byte ptr ds : [edx+0x50]
        test al, al
        je public_550f0d
        fld dword ptr ds : [edi+0xF4]
        mov eax, edx
        mov ebx, dword ptr ds : [eax]
        mov dword ptr ss : [esp+0x24], ebx
        fsub dword ptr ss : [esp+0x24]
        mov ebx, dword ptr ds : [eax+4]
        fld dword ptr ds : [edi+0xF8]
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0x28], ebx
        fsub dword ptr ss : [esp+0x28]
        fld dword ptr ds : [edi+0xFC]
        mov dword ptr ss : [esp+0x2C], eax
        fsub dword ptr ss : [esp+0x2C]
        fld st(0)
        fmul st, st(1)
        fld st(2)
        fmul st, st(3)
        faddp 
        fld st(3)
        fmul st, st(4)
        faddp 
        fcomp dword ptr ss : [esp+0x18]
        fstp st(0)
        fnstsw ax
        fstp st(0)
        test ah, 0x41
        fstp st(0)
        jne public_550f09
        mov byte ptr ds : [edx+0x50], 0
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ds : [edx+0x51], 1
        jmp public_550f0d
        public_550f09 : nop
        inc dword ptr ss : [esp+0x1C]
        public_550f0d : nop
        mov eax, dword ptr ds : [edi+0xC]
        inc esi
        add ecx, 4
        cmp esi, eax
        jl public_550e80
        public_550f1c : nop
        fld dword ptr ds : [edi+0xC8]
        fld st(0)
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x18]
        fstp st(0)
        lea esp, ss:[esp]
        public_550f30 : nop
        mov esi, dword ptr ds : [edi+0xC]
        mov edx, dword ptr ds : [edi]
        mov eax, 1
        xor ebx, ebx
        cmp esi, eax
        lea ecx, ds:[edx+4]
        mov dword ptr ss : [esp+0x20], eax
        jle public_550f8d
        public_550f47 : nop
        mov esi, dword ptr ds : [edx]
        mov ebp, dword ptr ds : [ecx]
        fld dword ptr ds : [esi+0x54]
        fcomp dword ptr ss : [ebp+0x54]
        mov eax, dword ptr ds : [public_6140b0]
        test eax, eax
        fnstsw ax
        je public_550f63
        test ah, 5
        jp public_550f6d
        jmp public_550f68
        public_550f63 : nop
        test ah, 0x41
        jne public_550f6d
        public_550f68 : nop
        mov dword ptr ds : [edx], ebp
        inc ebx
        mov dword ptr ds : [ecx], esi
        public_550f6d : nop
        mov eax, dword ptr ss : [esp+0x20]
        mov esi, dword ptr ds : [edi+0xC]
        inc eax
        mov edx, ecx
        add ecx, 4
        cmp eax, esi
        mov dword ptr ss : [esp+0x20], eax
        jl public_550f47
        test ebx, ebx
        mov ebp, dword ptr ss : [esp+0xB8]
        jg public_550f30
        public_550f8d : nop
        mov eax, dword ptr ds : [edi+0xC]
        test eax, eax
        mov esi, dword ptr ds : [edi]
        mov dword ptr ss : [esp+0x20], 0
        jle public_55139c
        mov ebx, dword ptr ds : [public_5c71dc]
        public_550fa8 : nop
        mov eax, dword ptr ds : [esi]
        mov cl, byte ptr ds : [eax+0x50]
        test cl, cl
        jne public_5510e2
        mov ecx, dword ptr ss : [esp+0x1C]
        cmp ecx, dword ptr ds : [edi+0x10]
        jge public_5510e2
        mov edx, dword ptr ds : [edi+0x100]
        lea eax, ss:[esp+0x78]
        push eax
        mov dword ptr ss : [esp+0x18], edx
        call dword ptr ds : [public_5c681c]
        fld dword ptr ss : [esp+0x18]
        fmul dword ptr ds : [eax]
        mov ecx, dword ptr ds : [esi]
        fld dword ptr ss : [esp+0x18]
        fmul dword ptr ds : [eax+4]
        fld dword ptr ss : [esp+0x18]
        fmul dword ptr ds : [eax+8]
        fstp dword ptr ss : [esp+0x78]
        fxch 
        fadd dword ptr ds : [edi+0xF4]
        fstp dword ptr ss : [esp+0x40]
        mov edx, dword ptr ss : [esp+0x40]
        fadd dword ptr ds : [edi+0xF8]
        fstp dword ptr ss : [esp+0x44]
        fld dword ptr ss : [esp+0x78]
        mov eax, dword ptr ss : [esp+0x44]
        fadd dword ptr ds : [edi+0xFC]
        mov dword ptr ds : [ecx], edx
        mov dword ptr ds : [ecx+4], eax
        fstp dword ptr ss : [esp+0x48]
        mov edx, dword ptr ss : [esp+0x48]
        mov dword ptr ds : [ecx+8], edx
        mov eax, dword ptr ds : [edi+0xB0]
        push eax
        lea ecx, ss:[esp+0x8C]
        push ecx
        call dword ptr ds : [public_5c69c4]
        fld dword ptr ss : [esp+0xCC]
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [eax]
        add edx, 0x44
        mov dword ptr ds : [edx], ecx
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [edx+4], ecx
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [edx+8], eax
        fcomp dword ptr ds : [edi+0x10C]
        add esp, 0xC
        fnstsw ax
        test ah, 1
        je public_551088
        mov ecx, dword ptr ds : [edi+0xC4]
        test ecx, ecx
        je public_5510e2
        mov eax, dword ptr ds : [esi]
        mov edx, dword ptr ds : [ecx]
        push eax
        call dword ptr ds : [edx]
        fcomp qword ptr ds : [public_5c8ba8]
        fnstsw ax
        test ah, 0x41
        jne public_5510e2
        public_551088 : nop
        inc dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ds : [esi]
        mov byte ptr ds : [ecx+0x50], 1
        mov ecx, dword ptr ss : [esp+0xC4]
        test ecx, ecx
        mov edx, dword ptr ds : [esi]
        mov byte ptr ds : [edx+0x51], 0
        je public_5510e2
        push 1
        lea eax, ss:[esp+0x4C]
        push eax
        mov eax, dword ptr ds : [esi]
        lea edx, ss:[esp+0x64]
        push edx
        push eax
        mov dword ptr ss : [esp+0x58], 0xBF800000
        call dword ptr ds : [public_5c6604]
        test al, al
        je public_5510db
        fld dword ptr ss : [esp+0x48]
        fcomp dword ptr ds : [public_5e0e00]
        fnstsw ax
        test ah, 0x41
        jne public_5510db
        mov ecx, dword ptr ds : [esi]
        mov byte ptr ds : [ecx+0x51], 1
        public_5510db : nop
        mov ebp, dword ptr ss : [esp+0xB8]
        public_5510e2 : nop
        mov ecx, dword ptr ds : [esi]
        mov al, byte ptr ds : [ecx+0x50]
        test al, al
        je public_551385
        mov al, byte ptr ds : [ecx+0x51]
        test al, al
        jne public_551385
        fld dword ptr ds : [edi+0xA0]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 0x41
        jne public_55134b
        fld dword ptr ds : [ecx+0x38]
        fcomp dword ptr ds : [public_5c7474]
        fld dword ptr ss : [esp+0xBC]
        fadd dword ptr ds : [ecx+0x38]
        fnstsw ax
        fstp dword ptr ds : [ecx+0x38]
        test ah, 1
        jne public_5511cd
        fld dword ptr ds : [edi+0xC8]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 0x41
        jne public_55118b
        mov edx, dword ptr ss : [ebp]
        push ebp
        call dword ptr ds : [edx+0xC]
        mov ecx, dword ptr ds : [esi]
        fld dword ptr ds : [ecx+0x20]
        add ecx, 0x20
        fsub dword ptr ds : [eax]
        fld dword ptr ds : [ecx+4]
        fsub dword ptr ds : [eax+4]
        fld dword ptr ds : [ecx+8]
        fsub dword ptr ds : [eax+8]
        fld st(0)
        fmul st, st(1)
        fld st(2)
        fmul st, st(3)
        faddp 
        fld st(3)
        fmul st, st(4)
        faddp 
        fstp st(3)
        fstp st(0)
        fstp st(0)
        fcom dword ptr ss : [esp+0x18]
        fnstsw ax
        test ah, 5
        jp public_551189
        fstp dword ptr ss : [esp+0x18]
        jmp public_55118b
        public_551189 : nop
        fstp st(0)
        public_55118b : nop
        mov eax, dword ptr ds : [esi]
        fld dword ptr ds : [eax+0x38]
        fcomp dword ptr ds : [edi+0xA0]
        fnstsw ax
        test ah, 0x41
        jne public_55130c
        call ebx
        mov ecx, dword ptr ds : [esi]
        mov dword ptr ss : [esp+0x10], eax
        fild dword ptr ss : [esp+0x10]
        fmul dword ptr ds : [public_5caeec]
        fmul qword ptr ds : [public_5db0b8]
        fsubr qword ptr ds : [public_5e0df8]
        fmul dword ptr ds : [edi+0x9C]
        fstp dword ptr ds : [ecx+0x38]
        jmp public_55130c
        public_5511cd : nop
        mov ecx, dword ptr ds : [esi]
        fld dword ptr ds : [ecx+0x38]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 1
        jne public_55130c
        mov eax, dword ptr ds : [ecx]
        lea edx, ds:[ecx+0x20]
        mov dword ptr ds : [edx], eax
        mov eax, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], eax
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [edx+8], ecx
        mov edx, dword ptr ss : [ebp]
        push ebp
        call dword ptr ds : [edx+0xC]
        mov ecx, dword ptr ds : [esi]
        fld dword ptr ds : [ecx+0x28]
        add ecx, 0x20
        fsub dword ptr ds : [eax+8]
        fld dword ptr ds : [ecx+4]
        fsub dword ptr ds : [eax+4]
        fld dword ptr ds : [ecx]
        lea ecx, ss:[esp+0x90]
        fsub dword ptr ds : [eax]
        lea eax, ss:[esp+0x50]
        push eax
        push ecx
        fstp dword ptr ss : [esp+0x58]
        fstp dword ptr ss : [esp+0x5C]
        fstp dword ptr ss : [esp+0x60]
        call dword ptr ds : [public_5c65b0]
        add esp, 8
        call ebx
        mov dword ptr ss : [esp+0x10], eax
        fild dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [public_679860]
        test eax, eax
        mov dword ptr ss : [esp+0x2C], 0
        fmul dword ptr ds : [public_5caeec]
        fmul qword ptr ds : [public_5c97f8]
        fld st(0)
        fcos 
        fstp dword ptr ss : [esp+0x24]
        fsin 
        fstp dword ptr ss : [esp+0x28]
        jne public_551273
        call public_5b73e0
        mov dword ptr ds : [public_679860], eax
        public_551273 : nop
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[esp+0x24]
        push ecx
        lea ecx, ss:[esp+0x94]
        push ecx
        lea ecx, ss:[esp+0x38]
        push ecx
        push eax
        call dword ptr ds : [edx+0x2C]
        mov edx, dword ptr ss : [esp+0x34]
        mov eax, dword ptr ss : [esp+0x30]
        mov ecx, dword ptr ss : [esp+0x38]
        mov dword ptr ss : [esp+0x28], edx
        mov edx, dword ptr ds : [esi]
        mov dword ptr ss : [esp+0x24], eax
        mov dword ptr ss : [esp+0x2C], ecx
        add edx, 0x2C
        mov dword ptr ds : [edx], eax
        mov eax, dword ptr ss : [esp+0x34]
        mov dword ptr ds : [edx+4], eax
        mov ecx, dword ptr ss : [esp+0x38]
        mov dword ptr ds : [edx+8], ecx
        mov eax, dword ptr ds : [esi]
        fld dword ptr ds : [eax+0x34]
        add eax, 0x2C
        fld dword ptr ds : [eax+4]
        fld dword ptr ds : [eax]
        fld st(0)
        fmul st, st(1)
        fld st(2)
        fmul st, st(3)
        faddp 
        fld st(3)
        fmul st, st(4)
        faddp 
        fsqrt 
        fstp st(3)
        fstp st(0)
        fstp st(0)
        fdivr dword ptr ds : [public_5d8464]
        fld st(0)
        fmul dword ptr ds : [eax]
        fstp dword ptr ds : [eax]
        fld st(0)
        fmul dword ptr ds : [eax+4]
        fstp dword ptr ds : [eax+4]
        fmul dword ptr ds : [eax+8]
        fstp dword ptr ds : [eax+8]
        call ebx
        mov edx, dword ptr ds : [esi]
        mov dword ptr ss : [esp+0x10], eax
        fild dword ptr ss : [esp+0x10]
        fmul dword ptr ds : [public_5caeec]
        fstp dword ptr ds : [edx+0x40]
        public_55130c : nop
        mov eax, dword ptr ds : [esi]
        fld dword ptr ds : [eax+0x38]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 1
        jne public_55134b
        call ebx
        mov dword ptr ss : [esp+0x10], eax
        fild dword ptr ss : [esp+0x10]
        fmul dword ptr ds : [public_5caeec]
        fstp dword ptr ss : [esp+0x4C]
        call ebx
        mov ecx, dword ptr ds : [esi]
        mov dword ptr ss : [esp+0x10], eax
        fild dword ptr ss : [esp+0x10]
        fmul dword ptr ss : [esp+0x4C]
        fmul dword ptr ds : [public_5caeec]
        fstp dword ptr ds : [ecx+0x3C]
        public_55134b : nop
        mov eax, dword ptr ds : [esi]
        fld dword ptr ss : [esp+0xBC]
        fmul dword ptr ds : [eax+0x44]
        fld dword ptr ss : [esp+0xBC]
        fmul dword ptr ds : [eax+0x48]
        fld dword ptr ss : [esp+0xBC]
        fmul dword ptr ds : [eax+0x4C]
        fstp dword ptr ss : [esp+0x68]
        fxch 
        fadd dword ptr ds : [eax]
        fstp dword ptr ds : [eax]
        fadd dword ptr ds : [eax+4]
        fstp dword ptr ds : [eax+4]
        fld dword ptr ss : [esp+0x68]
        fadd dword ptr ds : [eax+8]
        fstp dword ptr ds : [eax+8]
        public_551385 : nop
        mov eax, dword ptr ss : [esp+0x20]
        mov ecx, dword ptr ds : [edi+0xC]
        inc eax
        add esi, 4
        cmp eax, ecx
        mov dword ptr ss : [esp+0x20], eax
        jl public_550fa8
        public_55139c : nop
        mov edx, dword ptr ss : [esp+0x1C]
        pop esi
        pop ebp
        mov dword ptr ds : [edi+0x14], edx
        pop ebx
        public_5513a6 : nop
        pop edi
        add esp, 0xA4
        ret 0x10
        UNREACHABLE_TRAP(0x550d40)
    }
}

#undef public_550d85
#undef public_550d8c
#undef public_550db4
#undef public_550dd0
#undef public_550de1
#undef public_550e42
#undef public_550e80
#undef public_550e9f
#undef public_550f09
#undef public_550f0d
#undef public_550f1c
#undef public_550f30
#undef public_550f47
#undef public_550f63
#undef public_550f68
#undef public_550f6d
#undef public_550f8d
#undef public_550fa8
#undef public_551088
#undef public_5510db
#undef public_5510e2
#undef public_551189
#undef public_55118b
#undef public_5511cd
#undef public_551273
#undef public_55130c
#undef public_55134b
#undef public_551385
#undef public_55139c
#undef public_5513a6
