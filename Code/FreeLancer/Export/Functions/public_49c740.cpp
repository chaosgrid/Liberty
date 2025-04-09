#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_42d680);
CLANG_FORWARD_PROC_SYMBOL(public_45a650);
CLANG_FORWARD_PROC_SYMBOL(public_49c740);
CLANG_FORWARD_PROC_SYMBOL(public_4c4670);
CLANG_FORWARD_PROC_SYMBOL(public_4c4da0);
CLANG_FORWARD_PROC_SYMBOL(public_4c5040);
CLANG_FORWARD_PROC_SYMBOL(public_5b73e0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e90);
CLANG_FORWARD_PROC_SYMBOL(public_5b7ec0);

#define public_49c762 _public_49c762
#define public_49c771 _public_49c771
#define public_49c84a _public_49c84a
#define public_49c867 _public_49c867
#define public_49c8a2 _public_49c8a2
#define public_49c8b4 _public_49c8b4
#define public_49c8b6 _public_49c8b6
#define public_49c8f3 _public_49c8f3
#define public_49c8f7 _public_49c8f7
#define public_49c907 _public_49c907
#define public_49c924 _public_49c924
#define public_49c95f _public_49c95f
#define public_49c980 _public_49c980
#define public_49c995 _public_49c995
#define public_49c99b _public_49c99b
#define public_49cbb4 _public_49cbb4
#define public_49cc0a _public_49cc0a
#define public_49cc2b _public_49cc2b
#define public_49cc31 _public_49cc31
#define public_49cc72 _public_49cc72
#define public_49cc94 _public_49cc94
#define public_49ccf1 _public_49ccf1
#define public_49cd13 _public_49cd13
#define public_49cd1b _public_49cd1b
#define public_49cd3a _public_49cd3a
#define public_49cd76 _public_49cd76
#define public_49cdb8 _public_49cdb8
#define public_49cde4 _public_49cde4
#define public_49cdf9 _public_49cdf9
#define public_49ce15 _public_49ce15
#define public_49ce2f _public_49ce2f
#define public_49ce57 _public_49ce57
#define public_49ce61 _public_49ce61
#define public_49ce7d _public_49ce7d
#define public_49cf1d _public_49cf1d
#define public_49cf63 _public_49cf63
#define public_49cfdb _public_49cfdb
#define public_49d058 _public_49d058
#define public_49d0d3 _public_49d0d3
#define public_49d11d _public_49d11d
#define public_49d131 _public_49d131
#define public_49d171 _public_49d171
#define public_49d1f7 _public_49d1f7
#define public_49d215 _public_49d215
#define public_49d304 _public_49d304
#define public_49d325 _public_49d325
#define public_49d347 _public_49d347
#define public_49d37b _public_49d37b
#define public_49d3f6 _public_49d3f6
#define public_49d473 _public_49d473
#define public_49d4ee _public_49d4ee
#define public_49d704 _public_49d704
#define public_49d74f _public_49d74f
#define public_49d7cf _public_49d7cf
#define public_49d87d _public_49d87d
#define public_49d881 _public_49d881
#define public_49d8b7 _public_49d8b7
#define public_49d963 _public_49d963
#define public_49d9b1 _public_49d9b1
#define public_49d9eb _public_49d9eb
#define public_49da57 _public_49da57
#define public_49daf0 _public_49daf0
#define public_49db76 _public_49db76
#define public_49dbeb _public_49dbeb
#define public_49dc06 _public_49dc06
#define public_49dc44 _public_49dc44
#define public_49dc75 _public_49dc75
#define public_49dc79 _public_49dc79
#define public_49dc8a _public_49dc8a
#define public_49dca1 _public_49dca1

PROC_DECLARE(0x49c740, internal_49c740, public_49c740);
extern "C" NAKED register_t __cdecl internal_49c740()
{
    __asm
    {
        ASM_EXPORTS_HEADER()
        mov eax, 0x1174
        call public_5b7e90
        push ebx
        push ebp
        push esi
        mov ebx, ecx
        mov eax, dword ptr ds : [ebx+0xB5C]
        push edi
        xor edi, edi
        cmp eax, edi
        jne public_49c762
        mov dword ptr ss : [esp+0x50], edi
        jmp public_49c771
        public_49c762 : nop
        mov ecx, dword ptr ds : [ebx+0xB60]
        sub ecx, eax
        sar ecx, 2
        mov dword ptr ss : [esp+0x50], ecx
        public_49c771 : nop
        mov ecx, dword ptr ds : [ebx+0x7E0]
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x18]
        mov esi, eax
        mov dword ptr ss : [esp+0x68], esi
        call public_4c5040
        fld dword ptr ds : [ebx+0x46C]
        fcomp dword ptr ds : [ebx+0xEF0]
        fnstsw ax
        test ah, 0x44
        jp public_49c99b
        fld dword ptr ds : [ebx+0x470]
        fcomp dword ptr ds : [ebx+0xEF4]
        fnstsw ax
        test ah, 0x44
        jp public_49c99b
        fld dword ptr ds : [ebx+0x474]
        fcomp dword ptr ds : [ebx+0xEF8]
        fnstsw ax
        test ah, 0x44
        jp public_49c99b
        fld dword ptr ds : [ebx+0xEFC]
        fcomp dword ptr ds : [ebx+0x3F8]
        fnstsw ax
        test ah, 0x44
        jp public_49c99b
        mov ecx, dword ptr ds : [ebx+0x7E0]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx]
        cmp dword ptr ds : [ebx+0xF00], eax
        jne public_49c99b
        mov eax, dword ptr ds : [ebx+0xF04]
        cmp eax, dword ptr ds : [public_6720a4]
        jne public_49c99b
        mov ecx, dword ptr ds : [ebx+0xF08]
        cmp ecx, dword ptr ds : [public_6720a0]
        jne public_49c99b
        call public_42d680
        fadd dword ptr ds : [ebx+0xF0C]
        fst dword ptr ds : [ebx+0xF0C]
        fcom dword ptr ds : [public_5d2ed0]
        fnstsw ax
        test ah, 5
        jp public_49c84a
        pop edi
        fstp st(0)
        pop esi
        pop ebp
        xor al, al
        pop ebx
        add esp, 0x1174
        ret 
        public_49c84a : nop
        fsub dword ptr ds : [public_5d2ed0]
        mov dword ptr ss : [esp+0x20], edi
        fstp dword ptr ds : [ebx+0xF0C]
        mov eax, dword ptr ds : [esi+4]
        mov ebp, dword ptr ds : [eax]
        cmp ebp, eax
        je public_49c907
        public_49c867 : nop
        lea esi, ss:[ebp+8]
        mov ecx, 0x303
        lea edi, ss:[esp+0x578]
        rep movsd
        mov esi, dword ptr ss : [esp+0x1180]
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0x64]
        mov ecx, dword ptr ds : [public_6720a0]
        cmp ecx, 1
        jne public_49c8a2
        test eax, eax
        je public_49c8f7
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax+0x70]
        test al, al
        jne public_49c8f7
        jmp public_49c8b6
        public_49c8a2 : nop
        cmp ecx, 2
        jne public_49c924
        test eax, eax
        je public_49c8f7
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0x70]
        test al, al
        public_49c8b4 : nop
        je public_49c8f7
        public_49c8b6 : nop
        mov al, byte ptr ds : [ebx+0x87E]
        test al, al
        jne public_49c8f3
        mov edx, dword ptr ds : [esi]
        push 0
        push 1
        lea eax, ss:[esp+0x1B]
        push eax
        mov ecx, esi
        mov byte ptr ss : [esp+0x1F], 0
        call dword ptr ds : [edx+4]
        push eax
        call public_4c4da0
        mov eax, dword ptr ds : [esi]
        add esp, 0x10
        mov ecx, esi
        call dword ptr ds : [eax+0x80]
        mov cl, byte ptr ss : [esp+0x13]
        or cl, al
        test cl, 1
        je public_49c8f7
        public_49c8f3 : nop
        inc dword ptr ss : [esp+0x20]
        public_49c8f7 : nop
        mov ecx, dword ptr ss : [esp+0x68]
        mov ebp, dword ptr ss : [ebp]
        cmp ebp, dword ptr ds : [ecx+4]
        jne public_49c867
        public_49c907 : nop
        mov eax, dword ptr ss : [esp+0x20]
        cmp eax, dword ptr ds : [ebx+0xF10]
        jne public_49c995
        pop edi
        pop esi
        pop ebp
        xor al, al
        pop ebx
        add esp, 0x1174
        ret 
        public_49c924 : nop
        cmp ecx, 5
        jne public_49c95f
        mov edx, dword ptr ds : [esi]
        push 0
        push 1
        lea eax, ss:[esp+0x1B]
        push eax
        mov ecx, esi
        mov byte ptr ss : [esp+0x1F], 0
        call dword ptr ds : [edx+4]
        push eax
        call public_4c4da0
        mov eax, dword ptr ds : [esi]
        add esp, 0x10
        mov ecx, esi
        call dword ptr ds : [eax+0x80]
        mov cl, byte ptr ss : [esp+0x13]
        or cl, al
        test cl, 4
        jmp public_49c8b4
        public_49c95f : nop
        test eax, eax
        je public_49c8f7
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+4]
        mov edx, dword ptr ss : [esp+0x50]
        xor ecx, ecx
        test edx, edx
        jle public_49c8f7
        mov edx, dword ptr ds : [ebx+0xB5C]
        mov edi, dword ptr ss : [esp+0x50]
        mov edi, edi
        public_49c980 : nop
        cmp dword ptr ds : [edx], eax
        je public_49c8b6
        inc ecx
        add edx, 4
        cmp ecx, edi
        jl public_49c980
        jmp public_49c8f7
        public_49c995 : nop
        mov dword ptr ds : [ebx+0xF10], eax
        public_49c99b : nop
        lea esi, ds:[ebx+0x46C]
        mov edx, esi
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [edx+8]
        mov dword ptr ds : [ebx+0xEF0], eax
        mov eax, dword ptr ds : [ebx+0x3F8]
        mov dword ptr ds : [ebx+0xEF4], ecx
        mov ecx, dword ptr ds : [ebx+0x7E0]
        mov dword ptr ds : [ebx+0xEF8], edx
        mov dword ptr ds : [ebx+0xEFC], eax
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx]
        mov edx, dword ptr ds : [ebx+0xEE0]
        mov dword ptr ds : [ebx+0xF00], eax
        mov eax, dword ptr ds : [public_6720a4]
        mov dword ptr ds : [ebx+0xF04], eax
        mov ecx, dword ptr ds : [public_6720a0]
        mov dword ptr ds : [ebx+0xF08], ecx
        xor eax, eax
        mov dword ptr ss : [esp+0x6C], edx
        mov dword ptr ds : [ebx+0xEE8], eax
        mov dword ptr ds : [ebx+0xEEC], eax
        lea eax, ds:[ebx+0x418]
        mov ecx, eax
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ss : [esp+0x24], edx
        fld dword ptr ss : [esp+0x24]
        fmul dword ptr ds : [public_5c75e0]
        mov edx, dword ptr ds : [ecx+4]
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+0x28], edx
        fld dword ptr ss : [esp+0x28]
        fmul dword ptr ds : [public_5c75e0]
        mov dword ptr ss : [esp+0x2C], ecx
        fld dword ptr ss : [esp+0x2C]
        mov edx, eax
        fmul dword ptr ds : [public_5c75e0]
        mov ecx, dword ptr ds : [edx]
        mov dword ptr ss : [esp+0x24], ecx
        mov ecx, dword ptr ds : [edx+4]
        fstp dword ptr ss : [esp+0x2C]
        mov edx, dword ptr ds : [edx+8]
        fxch 
        mov dword ptr ss : [esp+0x28], ecx
        fchs 
        mov ebp, dword ptr ds : [ebx+0xEE4]
        fstp dword ptr ss : [esp+0x14]
        mov ecx, dword ptr ss : [esp+0x14]
        fchs 
        mov dword ptr ss : [esp+0x3C], ecx
        fstp dword ptr ss : [esp+0x18]
        fld dword ptr ss : [esp+0x2C]
        mov dword ptr ss : [esp+0x2C], edx
        fchs 
        mov edx, dword ptr ss : [esp+0x18]
        fstp dword ptr ss : [esp+0x1C]
        fld dword ptr ss : [esp+0x24]
        mov ecx, dword ptr ss : [esp+0x1C]
        fmul dword ptr ds : [public_5c75e0]
        mov dword ptr ss : [esp+0x40], edx
        fld dword ptr ss : [esp+0x28]
        mov dword ptr ss : [esp+0x44], ecx
        fmul dword ptr ds : [public_5c75e0]
        fld dword ptr ss : [esp+0x2C]
        fmul dword ptr ds : [public_5c75e0]
        fstp dword ptr ss : [esp+0x2C]
        fld dword ptr ds : [ebx+0x3F8]
        fsub dword ptr ds : [public_5c75dc]
        fstp dword ptr ss : [esp+0x20]
        fxch 
        fmul dword ptr ss : [esp+0x20]
        fstp dword ptr ss : [esp+0x24]
        fmul dword ptr ss : [esp+0x20]
        fld dword ptr ss : [esp+0x2C]
        fmul dword ptr ss : [esp+0x20]
        fld dword ptr ss : [esp+0x14]
        fsub dword ptr ss : [esp+0x24]
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        mov dword ptr ss : [esp+0x24], edx
        fstp dword ptr ss : [esp+0x3C]
        mov edx, dword ptr ds : [esi+8]
        fld dword ptr ss : [esp+0x40]
        mov dword ptr ss : [esp+0x28], ecx
        fsub st, st(2)
        mov dword ptr ss : [esp+0x2C], edx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        fstp dword ptr ss : [esp+0x40]
        mov eax, dword ptr ds : [eax+8]
        fld dword ptr ss : [esp+0x44]
        mov dword ptr ss : [esp+0x44], eax
        fsub st, st(1)
        fstp st(2)
        fstp st(0)
        fld dword ptr ds : [ebx+0x3F8]
        fld dword ptr ss : [esp+0x24]
        fmul st, st(1)
        fld dword ptr ss : [esp+0x28]
        fmul st, st(2)
        fstp dword ptr ss : [esp+0x28]
        fld dword ptr ss : [esp+0x2C]
        fmul st, st(2)
        fstp dword ptr ss : [esp+0x2C]
        fadd dword ptr ss : [esp+0x3C]
        mov dword ptr ss : [esp+0x3C], ecx
        fstp dword ptr ss : [esp+0xCC]
        fstp st(0)
        fld dword ptr ss : [esp+0x28]
        fadd dword ptr ss : [esp+0x40]
        mov dword ptr ss : [esp+0x40], edx
        fstp dword ptr ss : [esp+0xD0]
        fld dword ptr ss : [esp+0x2C]
        fadd st, st(1)
        fstp dword ptr ss : [esp+0xD4]
        fstp st(0)
        fld dword ptr ds : [ebx+0x3F8]
        fld dword ptr ss : [esp+0x3C]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x3C]
        fld dword ptr ss : [esp+0x40]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x40]
        fld dword ptr ss : [esp+0x44]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x44]
        fstp st(0)
        call public_4c4670
        mov ecx, dword ptr ss : [esp+0x68]
        mov dword ptr ss : [esp+0xF4], eax
        mov eax, dword ptr ds : [ecx+4]
        mov ecx, dword ptr ds : [eax]
        cmp ecx, eax
        mov dword ptr ss : [esp+0x64], ecx
        je public_49dca1
        public_49cbb4 : nop
        mov edx, dword ptr ss : [esp+0x64]
        lea esi, ds:[edx+8]
        mov ecx, 0x303
        lea edi, ss:[esp+0x578]
        rep movsd
        mov ecx, dword ptr ss : [esp+0x1180]
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x64]
        mov ecx, eax
        mov eax, dword ptr ds : [public_6720a0]
        cmp eax, 1
        mov dword ptr ss : [esp+0x20], ecx
        jne public_49cc0a
        test ecx, ecx
        je public_49dc8a
        mov ecx, dword ptr ss : [esp+0x1180]
        mov edx, dword ptr ds : [ecx]
        call dword ptr ds : [edx+0x70]
        test al, al
        jne public_49dc8a
        mov esi, dword ptr ss : [esp+0x1180]
        jmp public_49cc31
        public_49cc0a : nop
        cmp eax, 2
        jne public_49cd76
        test ecx, ecx
        je public_49dc8a
        mov esi, dword ptr ss : [esp+0x1180]
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [eax+0x70]
        test al, al
        public_49cc2b : nop
        je public_49dc8a
        public_49cc31 : nop
        mov al, byte ptr ds : [ebx+0x87E]
        test al, al
        jne public_49cc72
        mov edx, dword ptr ds : [esi]
        push 0
        push 1
        lea eax, ss:[esp+0x1B]
        push eax
        mov ecx, esi
        mov byte ptr ss : [esp+0x1F], 0
        call dword ptr ds : [edx+4]
        push eax
        call public_4c4da0
        mov eax, dword ptr ds : [esi]
        add esp, 0x10
        mov ecx, esi
        call dword ptr ds : [eax+0x80]
        mov cl, byte ptr ss : [esp+0x13]
        or cl, al
        test cl, 1
        je public_49dc8a
        public_49cc72 : nop
        mov ecx, dword ptr ss : [esp+0x20]
        xor eax, eax
        test ecx, ecx
        mov dword ptr ss : [esp+0x34], 0
        mov dword ptr ss : [esp+0x48], 0
        mov dword ptr ss : [esp+0x30], eax
        jle public_49cd13
        public_49cc94 : nop
        mov edx, dword ptr ds : [esi]
        lea ecx, ss:[esp+0x70]
        push ecx
        lea ecx, ss:[esp+0xA8]
        push ecx
        push eax
        mov ecx, esi
        call dword ptr ds : [edx+0x68]
        test al, al
        je public_49ccf1
        lea edx, ss:[esp+0xC8]
        push edx
        lea eax, ss:[esp+0xA8]
        push eax
        lea ecx, ss:[esp+0xFC]
        push ecx
        call dword ptr ds : [public_5c63bc]
        add esp, 0xC
        test eax, eax
        jne public_49ccf1
        fld dword ptr ss : [esp+0xC8]
        fmul dword ptr ss : [esp+0x70]
        fadd dword ptr ss : [esp+0x34]
        fstp dword ptr ss : [esp+0x34]
        fld dword ptr ss : [esp+0x70]
        fadd dword ptr ss : [esp+0x48]
        fstp dword ptr ss : [esp+0x48]
        public_49ccf1 : nop
        mov eax, dword ptr ss : [esp+0x30]
        mov ecx, dword ptr ss : [esp+0x20]
        inc eax
        cmp eax, ecx
        mov dword ptr ss : [esp+0x30], eax
        jl public_49cc94
        fld dword ptr ss : [esp+0x48]
        fcomp dword ptr ds : [public_5c7474]
        fnstsw ax
        test ah, 0x44
        jp public_49cd1b
        public_49cd13 : nop
        mov dword ptr ss : [esp+0x48], 0x3F800000
        public_49cd1b : nop
        fld dword ptr ss : [esp+0x34]
        mov eax, dword ptr ds : [public_6720a0]
        cmp eax, 1
        fdiv dword ptr ss : [esp+0x48]
        fstp dword ptr ss : [esp+0x34]
        je public_49cd3a
        cmp eax, 2
        jne public_49ce2f
        public_49cd3a : nop
        mov eax, dword ptr ds : [public_6720a4]
        test eax, eax
        jne public_49cdf9
        fld dword ptr ss : [esp+0x34]
        fcomp dword ptr ds : [public_5d2e2c]
        fnstsw ax
        test ah, 0x41
        jne public_49dc8a
        fld dword ptr ss : [esp+0x34]
        fcomp dword ptr ds : [public_5d2e30]
        fnstsw ax
        test ah, 5
        jnp public_49ce2f
        jmp public_49dc8a
        public_49cd76 : nop
        cmp eax, 5
        jne public_49cdb8
        mov esi, dword ptr ss : [esp+0x1180]
        mov edx, dword ptr ds : [esi]
        push 0
        push 1
        lea ecx, ss:[esp+0x1B]
        push ecx
        mov ecx, esi
        mov byte ptr ss : [esp+0x1F], 0
        call dword ptr ds : [edx+4]
        push eax
        call public_4c4da0
        mov eax, dword ptr ds : [esi]
        add esp, 0x10
        mov ecx, esi
        call dword ptr ds : [eax+0x80]
        mov cl, byte ptr ss : [esp+0x13]
        or cl, al
        test cl, 4
        jmp public_49cc2b
        public_49cdb8 : nop
        test ecx, ecx
        je public_49dc8a
        mov esi, dword ptr ss : [esp+0x1180]
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+4]
        mov edi, eax
        mov eax, dword ptr ss : [esp+0x50]
        xor ecx, ecx
        test eax, eax
        jle public_49dc8a
        mov edx, dword ptr ds : [ebx+0xB5C]
        public_49cde4 : nop
        cmp dword ptr ds : [edx], edi
        je public_49cc31
        inc ecx
        add edx, 4
        cmp ecx, eax
        jl public_49cde4
        jmp public_49dc8a
        public_49cdf9 : nop
        cmp eax, 1
        jne public_49ce15
        fld dword ptr ss : [esp+0x34]
        fcomp dword ptr ds : [public_5d2e2c]
        fnstsw ax
        test ah, 0x41
        je public_49dc8a
        jmp public_49ce2f
        public_49ce15 : nop
        cmp eax, 2
        jne public_49ce2f
        fld dword ptr ss : [esp+0x34]
        fcomp dword ptr ds : [public_5d2e30]
        fnstsw ax
        test ah, 5
        jnp public_49dc8a
        public_49ce2f : nop
        mov edx, dword ptr ss : [esp+0x34]
        push edx
        lea eax, ss:[esp+0x3C]
        push eax
        call public_45a650
        mov eax, dword ptr ds : [public_6720a0]
        add esp, 8
        cmp eax, 5
        jne public_49ce57
        mov ecx, dword ptr ds : [public_679ba4]
        mov dword ptr ss : [esp+0x38], ecx
        jmp public_49ce61
        public_49ce57 : nop
        cmp eax, 2
        je public_49ce7d
        cmp eax, 1
        je public_49ce7d
        public_49ce61 : nop
        movzx edx, byte ptr ss : [esp+0x3B]
        mov dword ptr ss : [esp+0x5C], edx
        fild dword ptr ss : [esp+0x5C]
        fmul dword ptr ds : [public_5c75e0]
        call public_5b7ec0
        mov byte ptr ss : [esp+0x3B], al
        public_49ce7d : nop
        mov esi, dword ptr ss : [esp+0x1180]
        mov eax, dword ptr ds : [esi]
        lea ecx, ss:[esp+0x14]
        push ecx
        mov ecx, esi
        call dword ptr ds : [eax+0x28]
        fld dword ptr ds : [ebx+0xF48]
        fld dword ptr ss : [esp+0x14]
        mov ecx, esi
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x14]
        fld dword ptr ss : [esp+0x18]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x18]
        fmul dword ptr ss : [esp+0x1C]
        fstp dword ptr ss : [esp+0x1C]
        mov edx, dword ptr ds : [esi]
        call dword ptr ds : [edx+0xC]
        fld dword ptr ds : [ebx+0xF48]
        mov esi, eax
        mov ecx, 0xC
        lea edi, ss:[esp+0x74]
        rep movsd
        fld dword ptr ss : [esp+0x98]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x98]
        fld dword ptr ss : [esp+0xA0]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0xA0]
        mov ecx, dword ptr ss : [esp+0x1180]
        fstp st(0)
        mov dword ptr ss : [esp+0x9C], 0
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax+0x18]
        mov dword ptr ss : [esp+0xD8], eax
        dec eax
        cmp eax, 3
        ja public_49dc8a
/*FIXUP jmp dword ptr ds : [eax*4+public_49dcb0] @0x49cf16*/
  JMPTB cmp eax, 0
  JMPTB je public_49d11d
  JMPTB cmp eax, 1
  JMPTB je public_49d1f7
  JMPTB cmp eax, 2
  JMPTB je public_49cf1d
  JMPTB cmp eax, 3
  JMPTB je public_49d304
  JMPTB int 3
        public_49cf1d : nop
        fld dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [public_67209c]
        test eax, eax
        fmul dword ptr ds : [public_5c75e0]
        mov esi, 4
        mov dword ptr ss : [esp+0x20], esi
        fstp dword ptr ss : [esp+0x14]
        fld dword ptr ss : [esp+0x18]
        fmul dword ptr ds : [public_5c75e0]
        fstp dword ptr ss : [esp+0x18]
        fld dword ptr ss : [esp+0x1C]
        fmul dword ptr ds : [public_5c75e0]
        fstp dword ptr ss : [esp+0x1C]
        jne public_49cf63
        call public_5b73e0
        mov dword ptr ds : [public_67209c], eax
        public_49cf63 : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x14]
        push edx
        lea edx, ss:[esp+0x78]
        push edx
        lea edx, ss:[esp+0x220]
        push edx
        push eax
        call dword ptr ds : [ecx+0x28]
        fld dword ptr ss : [esp+0x14]
        mov eax, dword ptr ss : [esp+0x218]
        fchs 
        mov ecx, dword ptr ss : [esp+0x21C]
        mov edx, dword ptr ss : [esp+0x220]
        fstp dword ptr ss : [esp+0x110]
        fld dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+0x278], eax
        mov eax, dword ptr ds : [public_67209c]
        test eax, eax
        fstp dword ptr ss : [esp+0x114]
        fld dword ptr ss : [esp+0x1C]
        mov dword ptr ss : [esp+0x27C], ecx
        fstp dword ptr ss : [esp+0x118]
        mov dword ptr ss : [esp+0x280], edx
        jne public_49cfdb
        call public_5b73e0
        mov dword ptr ds : [public_67209c], eax
        public_49cfdb : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x110]
        push edx
        lea edx, ss:[esp+0x78]
        push edx
        lea edx, ss:[esp+0x1F0]
        push edx
        push eax
        call dword ptr ds : [ecx+0x28]
        fld dword ptr ss : [esp+0x14]
        mov eax, dword ptr ss : [esp+0x1E8]
        fchs 
        mov ecx, dword ptr ss : [esp+0x1EC]
        mov edx, dword ptr ss : [esp+0x1F0]
        fstp dword ptr ss : [esp+0x128]
        fld dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+0x284], eax
        mov eax, dword ptr ds : [public_67209c]
        test eax, eax
        fstp dword ptr ss : [esp+0x12C]
        fld dword ptr ss : [esp+0x1C]
        mov dword ptr ss : [esp+0x288], ecx
        fchs 
        mov dword ptr ss : [esp+0x28C], edx
        fstp dword ptr ss : [esp+0x130]
        jne public_49d058
        call public_5b73e0
        mov dword ptr ds : [public_67209c], eax
        public_49d058 : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x128]
        push edx
        lea edx, ss:[esp+0x78]
        push edx
        lea edx, ss:[esp+0x208]
        push edx
        push eax
        call dword ptr ds : [ecx+0x28]
        fld dword ptr ss : [esp+0x14]
        mov eax, dword ptr ss : [esp+0x200]
        mov ecx, dword ptr ss : [esp+0x204]
        mov edx, dword ptr ss : [esp+0x208]
        fstp dword ptr ss : [esp+0x140]
        fld dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+0x290], eax
        mov eax, dword ptr ds : [public_67209c]
        test eax, eax
        fstp dword ptr ss : [esp+0x144]
        fld dword ptr ss : [esp+0x1C]
        mov dword ptr ss : [esp+0x294], ecx
        fchs 
        mov dword ptr ss : [esp+0x298], edx
        fstp dword ptr ss : [esp+0x148]
        jne public_49d0d3
        call public_5b73e0
        mov dword ptr ds : [public_67209c], eax
        public_49d0d3 : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x140]
        push edx
        lea edx, ss:[esp+0x78]
        push edx
        lea edx, ss:[esp+0x214]
        push edx
        push eax
        call dword ptr ds : [ecx+0x28]
        mov eax, dword ptr ss : [esp+0x20C]
        mov ecx, dword ptr ss : [esp+0x210]
        mov edx, dword ptr ss : [esp+0x214]
        mov dword ptr ss : [esp+0x29C], eax
        mov dword ptr ss : [esp+0x2A0], ecx
        mov dword ptr ss : [esp+0x2A4], edx
        jmp public_49d881
        public_49d11d : nop
        mov dword ptr ss : [esp+0x58], 0
        lea esi, ss:[esp+0x278]
        mov edi, 0x10
        public_49d131 : nop
        fld dword ptr ss : [esp+0x58]
        mov eax, dword ptr ds : [public_67209c]
        test eax, eax
        fsin 
        mov dword ptr ss : [esp+0x15C], 0
        fmul dword ptr ss : [esp+0x14]
        fstp dword ptr ss : [esp+0x158]
        fld dword ptr ss : [esp+0x58]
        fcos 
        fmul dword ptr ss : [esp+0x14]
        fstp dword ptr ss : [esp+0x160]
        jne public_49d171
        call public_5b73e0
        mov dword ptr ds : [public_67209c], eax
        public_49d171 : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x158]
        push edx
        lea edx, ss:[esp+0x78]
        push edx
        lea edx, ss:[esp+0x1FC]
        push edx
        push eax
        call dword ptr ds : [ecx+0x28]
        fld dword ptr ss : [esp+0x58]
        mov ecx, dword ptr ss : [esp+0x1F4]
        fadd dword ptr ds : [public_5d3f00]
        mov edx, dword ptr ss : [esp+0x1F8]
        mov eax, esi
        mov dword ptr ds : [eax], ecx
        fstp dword ptr ss : [esp+0x58]
        mov ecx, dword ptr ss : [esp+0x1FC]
        mov dword ptr ds : [eax+4], edx
        add esi, 0xC
        dec edi
        mov dword ptr ds : [eax+8], ecx
        jne public_49d131
        mov edx, dword ptr ss : [esp+0x98]
        mov eax, dword ptr ss : [esp+0x9C]
        mov ecx, dword ptr ss : [esp+0xA0]
        mov dword ptr ss : [esp+0x338], edx
        mov dword ptr ss : [esp+0x33C], eax
        mov dword ptr ss : [esp+0x340], ecx
        mov esi, 0x11
        jmp public_49d87d
        public_49d1f7 : nop
        mov edi, dword ptr ss : [esp+0x1180]
        mov dword ptr ss : [esp+0x54], 0
        lea esi, ss:[esp+0x278]
        mov dword ptr ss : [esp+0x30], 0x10
        public_49d215 : nop
        fld dword ptr ss : [esp+0x54]
        mov edx, dword ptr ds : [edi]
        fsin 
        lea eax, ss:[esp+0x24]
        push eax
        mov ecx, edi
        mov dword ptr ss : [esp+0x2C], 0
        fstp dword ptr ss : [esp+0x28]
        fld dword ptr ss : [esp+0x58]
        fcos 
        fstp dword ptr ss : [esp+0x30]
        call dword ptr ds : [edx+0x40]
        fmul dword ptr ds : [ebx+0xF48]
        fld dword ptr ss : [esp+0x24]
        mov ecx, esi
        add esi, 0xC
        fmul st, st(1)
        fld dword ptr ss : [esp+0x28]
        fmul st, st(2)
        fstp dword ptr ss : [esp+0x28]
        fld dword ptr ss : [esp+0x2C]
        fmul st, st(2)
        fstp dword ptr ss : [esp+0x2C]
        fadd dword ptr ss : [esp+0x98]
        fstp dword ptr ss : [esp+0xE8]
        mov edx, dword ptr ss : [esp+0xE8]
        fstp st(0)
        mov dword ptr ds : [ecx], edx
        fld dword ptr ss : [esp+0x28]
        fadd dword ptr ss : [esp+0x9C]
        fstp dword ptr ss : [esp+0xEC]
        fld dword ptr ss : [esp+0x2C]
        mov eax, dword ptr ss : [esp+0xEC]
        fadd dword ptr ss : [esp+0xA0]
        mov dword ptr ds : [ecx+4], eax
        mov eax, dword ptr ss : [esp+0x30]
        dec eax
        fstp dword ptr ss : [esp+0xF0]
        fld dword ptr ss : [esp+0x54]
        mov edx, dword ptr ss : [esp+0xF0]
        fadd dword ptr ds : [public_5d3f00]
        mov dword ptr ds : [ecx+8], edx
        mov dword ptr ss : [esp+0x30], eax
        fstp dword ptr ss : [esp+0x54]
        jne public_49d215
        mov eax, dword ptr ss : [esp+0x98]
        mov ecx, dword ptr ss : [esp+0x9C]
        mov edx, dword ptr ss : [esp+0xA0]
        mov dword ptr ss : [esp+0x338], eax
        mov dword ptr ss : [esp+0x33C], ecx
        mov dword ptr ss : [esp+0x340], edx
        mov esi, 0x11
        jmp public_49d87d
        public_49d304 : nop
        fld dword ptr ss : [esp+0x18]
        mov al, byte ptr ds : [ebx+0x478]
        test al, al
        fmul dword ptr ds : [public_5c75e0]
        fstp dword ptr ss : [esp+0x18]
        jne public_49d325
        cmp dword ptr ds : [ebx+0x7D0], 2
        jne public_49d347
        public_49d325 : nop
        fld dword ptr ds : [ebx+0x3F8]
        fsub dword ptr ds : [public_5c75dc]
        fmul dword ptr ds : [public_5d3e98]
        fadd st(0), st
        fadd dword ptr ds : [public_5c75dc]
        fdivr dword ptr ss : [esp+0x14]
        fstp dword ptr ss : [esp+0x14]
        public_49d347 : nop
        fld dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [public_67209c]
        test eax, eax
        fstp dword ptr ss : [esp+0x170]
        fld dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+0x178], 0
        fstp dword ptr ss : [esp+0x174]
        jne public_49d37b
        call public_5b73e0
        mov dword ptr ds : [public_67209c], eax
        public_49d37b : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x170]
        push edx
        lea edx, ss:[esp+0x78]
        push edx
        lea edx, ss:[esp+0x22C]
        push edx
        push eax
        call dword ptr ds : [ecx+0x28]
        fld dword ptr ss : [esp+0x14]
        mov eax, dword ptr ss : [esp+0x224]
        fchs 
        mov ecx, dword ptr ss : [esp+0x228]
        mov edx, dword ptr ss : [esp+0x22C]
        fstp dword ptr ss : [esp+0x188]
        fld dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+0x278], eax
        mov eax, dword ptr ds : [public_67209c]
        test eax, eax
        fstp dword ptr ss : [esp+0x18C]
        mov dword ptr ss : [esp+0x27C], ecx
        mov dword ptr ss : [esp+0x280], edx
        mov dword ptr ss : [esp+0x190], 0
        jne public_49d3f6
        call public_5b73e0
        mov dword ptr ds : [public_67209c], eax
        public_49d3f6 : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x188]
        push edx
        lea edx, ss:[esp+0x78]
        push edx
        lea edx, ss:[esp+0x1B4]
        push edx
        push eax
        call dword ptr ds : [ecx+0x28]
        fld dword ptr ss : [esp+0x14]
        mov eax, dword ptr ss : [esp+0x1AC]
        fchs 
        mov ecx, dword ptr ss : [esp+0x1B0]
        mov edx, dword ptr ss : [esp+0x1B4]
        fstp dword ptr ss : [esp+0x1A0]
        fld dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+0x284], eax
        mov eax, dword ptr ds : [public_67209c]
        fchs 
        test eax, eax
        fstp dword ptr ss : [esp+0x1A4]
        mov dword ptr ss : [esp+0x288], ecx
        mov dword ptr ss : [esp+0x28C], edx
        mov dword ptr ss : [esp+0x1A8], 0
        jne public_49d473
        call public_5b73e0
        mov dword ptr ds : [public_67209c], eax
        public_49d473 : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x1A0]
        push edx
        lea edx, ss:[esp+0x78]
        push edx
        lea edx, ss:[esp+0x10C]
        push edx
        push eax
        call dword ptr ds : [ecx+0x28]
        fld dword ptr ss : [esp+0x14]
        mov eax, dword ptr ss : [esp+0x104]
        mov ecx, dword ptr ss : [esp+0x108]
        mov edx, dword ptr ss : [esp+0x10C]
        fstp dword ptr ss : [esp+0x11C]
        fld dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+0x290], eax
        mov eax, dword ptr ds : [public_67209c]
        fchs 
        test eax, eax
        fstp dword ptr ss : [esp+0x120]
        mov dword ptr ss : [esp+0x294], ecx
        mov dword ptr ss : [esp+0x298], edx
        mov dword ptr ss : [esp+0x124], 0
        jne public_49d4ee
        call public_5b73e0
        mov dword ptr ds : [public_67209c], eax
        public_49d4ee : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x11C]
        push edx
        lea edx, ss:[esp+0x78]
        push edx
        lea edx, ss:[esp+0x13C]
        push edx
        push eax
        call dword ptr ds : [ecx+0x28]
        fld dword ptr ss : [esp+0x78]
        fld dword ptr ss : [esp+0x84]
        mov eax, dword ptr ss : [esp+0x134]
        fld dword ptr ss : [esp+0x90]
        mov ecx, dword ptr ss : [esp+0x138]
        fstp dword ptr ss : [esp+0x274]
        fxch 
        mov edx, dword ptr ss : [esp+0x13C]
        fmul dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+0x29C], eax
        mov dword ptr ss : [esp+0x2A0], ecx
        mov dword ptr ss : [esp+0x2A4], edx
        fstp dword ptr ss : [esp+0x260]
        mov dword ptr ss : [esp+0x250], 0x3F800000
        fmul dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+0x240], 0x3F800000
        fld dword ptr ss : [esp+0x274]
        mov dword ptr ss : [esp+0x230], 0x3F800000
        fmul dword ptr ss : [esp+0x18]
        mov dword ptr ss : [esp+0x24C], 0
        fld dword ptr ss : [esp+0x260]
        mov dword ptr ss : [esp+0x248], 0
        fadd dword ptr ss : [esp+0x98]
        mov dword ptr ss : [esp+0x244], 0
        mov dword ptr ss : [esp+0x23C], 0
        mov dword ptr ss : [esp+0x238], 0
        fstp dword ptr ss : [esp+0xA8]
        fld st(1)
        mov eax, dword ptr ss : [esp+0xA8]
        fadd dword ptr ss : [esp+0x9C]
        mov dword ptr ss : [esp+0x234], 0
        mov dword ptr ss : [esp+0x1D8], 0x3F800000
        mov dword ptr ss : [esp+0x1C8], 0x3F800000
        fstp dword ptr ss : [esp+0xAC]
        fld dword ptr ss : [esp+0xA0]
        mov ecx, dword ptr ss : [esp+0xAC]
        fadd st, st(1)
        mov dword ptr ss : [esp+0x1B8], 0x3F800000
        mov dword ptr ss : [esp+0x1D4], 0
        mov dword ptr ss : [esp+0x1D0], 0
        fstp dword ptr ss : [esp+0xB0]
        fld dword ptr ss : [esp+0x98]
        mov edx, dword ptr ss : [esp+0xB0]
        fsub dword ptr ss : [esp+0x260]
        mov dword ptr ss : [esp+0x1CC], 0
        mov dword ptr ss : [esp+0x1C4], 0
        mov dword ptr ss : [esp+0x1C0], 0
        fstp dword ptr ss : [esp+0xBC]
        fld dword ptr ss : [esp+0x9C]
        mov dword ptr ss : [esp+0x1BC], 0
        fsub st, st(2)
        fstp dword ptr ss : [esp+0xC0]
        fld dword ptr ss : [esp+0xA0]
        fsub st, st(1)
        mov dword ptr ss : [esp+0x254], eax
        mov dword ptr ss : [esp+0x258], ecx
        mov dword ptr ss : [esp+0x25C], edx
        fstp dword ptr ss : [esp+0xC4]
        fstp st(0)
        fstp st(0)
        mov eax, dword ptr ss : [esp+0xBC]
        mov ecx, dword ptr ss : [esp+0xC0]
        mov edx, dword ptr ss : [esp+0xC4]
        mov dword ptr ss : [esp+0x1DC], eax
        mov dword ptr ss : [esp+0x1E0], ecx
        mov dword ptr ss : [esp+0x1E4], edx
        mov dword ptr ss : [esp+0x4C], 0
        lea esi, ss:[esp+0x374]
        mov edi, 0x10
        public_49d704 : nop
        fld dword ptr ss : [esp+0x4C]
        mov eax, dword ptr ds : [public_67209c]
        test eax, eax
        fsin 
        mov dword ptr ss : [esp+0x150], 0
        fst qword ptr ss : [esp+0xB4]
        fmul dword ptr ss : [esp+0x14]
        fstp dword ptr ss : [esp+0x14C]
        fld dword ptr ss : [esp+0x4C]
        fcos 
        fst qword ptr ss : [esp+0x5C]
        fmul dword ptr ss : [esp+0x14]
        fstp dword ptr ss : [esp+0x154]
        jne public_49d74f
        call public_5b73e0
        mov dword ptr ds : [public_67209c], eax
        public_49d74f : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0x14C]
        push edx
        lea edx, ss:[esp+0x234]
        push edx
        lea edx, ss:[esp+0x16C]
        push edx
        push eax
        call dword ptr ds : [ecx+0x28]
        fld dword ptr ss : [esp+0x14]
        fmul qword ptr ss : [esp+0xB4]
        mov ecx, dword ptr ss : [esp+0x164]
        mov edx, dword ptr ss : [esp+0x168]
        lea eax, ds:[esi-0xCC]
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ss : [esp+0x16C]
        fstp dword ptr ss : [esp+0x17C]
        fld dword ptr ss : [esp+0x14]
        mov dword ptr ds : [eax+4], edx
        fmul qword ptr ss : [esp+0x5C]
        mov dword ptr ds : [eax+8], ecx
        mov eax, dword ptr ds : [public_67209c]
        test eax, eax
        fstp dword ptr ss : [esp+0x184]
        mov dword ptr ss : [esp+0x180], 0
        jne public_49d7cf
        call public_5b73e0
        mov dword ptr ds : [public_67209c], eax
        public_49d7cf : nop
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[esp+0x17C]
        push ecx
        lea ecx, ss:[esp+0x1BC]
        push ecx
        lea ecx, ss:[esp+0x19C]
        push ecx
        push eax
        call dword ptr ds : [edx+0x28]
        fld dword ptr ss : [esp+0x4C]
        mov eax, dword ptr ss : [esp+0x194]
        fadd dword ptr ds : [public_5d3f00]
        mov ecx, dword ptr ss : [esp+0x198]
        mov edx, esi
        mov dword ptr ds : [edx], eax
        fstp dword ptr ss : [esp+0x4C]
        mov eax, dword ptr ss : [esp+0x19C]
        mov dword ptr ds : [edx+4], ecx
        add esi, 0xC
        dec edi
        mov dword ptr ds : [edx+8], eax
        jne public_49d704
        mov ecx, dword ptr ss : [esp+0x254]
        mov edx, dword ptr ss : [esp+0x258]
        mov eax, dword ptr ss : [esp+0x25C]
        mov dword ptr ss : [esp+0x368], ecx
        mov ecx, dword ptr ss : [esp+0x1DC]
        mov dword ptr ss : [esp+0x36C], edx
        mov edx, dword ptr ss : [esp+0x1E0]
        mov dword ptr ss : [esp+0x370], eax
        mov eax, dword ptr ss : [esp+0x1E4]
        mov dword ptr ss : [esp+0x434], ecx
        mov dword ptr ss : [esp+0x438], edx
        mov dword ptr ss : [esp+0x43C], eax
        mov esi, 0x26
        public_49d87d : nop
        mov dword ptr ss : [esp+0x20], esi
        public_49d881 : nop
        test esi, esi
        jle public_49d963
        fld dword ptr ds : [ebx+0x4A8]
        lea eax, ss:[esp+0x278]
        fld st(0)
        mov ecx, esi
        fadd st, st(1)
        fstp dword ptr ss : [esp+0x30]
        fld dword ptr ds : [ebx+0x4AC]
        fld st(0)
        fadd st, st(1)
        fstp dword ptr ss : [esp+0xB4]
        fxch 
        fstp dword ptr ss : [esp+0x5C]
        public_49d8b7 : nop
        fld dword ptr ss : [esp+0x5C]
        mov edx, dword ptr ss : [esp+0x3C]
        fadd dword ptr ds : [eax]
        mov dword ptr ss : [esp+0xF8], edx
        mov edx, dword ptr ss : [esp+0x40]
        mov dword ptr ss : [esp+0xFC], edx
        fdiv dword ptr ss : [esp+0x30]
        mov edx, dword ptr ss : [esp+0x44]
        mov dword ptr ss : [esp+0x100], edx
        mov edx, eax
        add eax, 0xC
        dec ecx
        fmul dword ptr ss : [esp+0x3C]
        fld st(1)
        fadd dword ptr ds : [eax-4]
        fdiv dword ptr ss : [esp+0xB4]
        fsubr qword ptr ds : [public_5c89b8]
        fmul dword ptr ss : [esp+0xFC]
        fld dword ptr ss : [esp+0xCC]
        fadd st, st(2)
        fstp dword ptr ss : [esp+0xDC]
        fld dword ptr ss : [esp+0xD0]
        mov edi, dword ptr ss : [esp+0xDC]
        fadd st, st(1)
        mov dword ptr ds : [edx], edi
        fstp dword ptr ss : [esp+0xE0]
        mov edi, dword ptr ss : [esp+0xE0]
        fstp st(0)
        mov dword ptr ds : [edx+4], edi
        fstp st(0)
        fld dword ptr ss : [esp+0x100]
        fadd dword ptr ss : [esp+0xD4]
        fstp dword ptr ss : [esp+0xE4]
        mov edi, dword ptr ss : [esp+0xE4]
        mov dword ptr ds : [edx+8], edi
        jne public_49d8b7
        fstp st(0)
        public_49d963 : nop
        movzx eax, byte ptr ss : [esp+0x3B]
        movzx ecx, byte ptr ss : [esp+0x38]
        movzx edx, byte ptr ss : [esp+0x39]
        shl eax, 8
        or eax, ecx
        movzx ecx, byte ptr ss : [esp+0x3A]
        shl eax, 8
        or eax, edx
        mov edx, dword ptr ds : [ebx+0xEE8]
        shl eax, 8
        add edx, esi
        or eax, ecx
        cmp edx, 0x1770
        jge public_49dca1
        test esi, esi
        jle public_49d9eb
        lea ecx, ss:[esp+0x278]
        mov dword ptr ss : [esp+0x30], ecx
        mov ecx, dword ptr ss : [esp+0x6C]
        mov dword ptr ss : [esp+0x5C], esi
        public_49d9b1 : nop
        mov edx, dword ptr ss : [esp+0x30]
        mov edi, dword ptr ds : [edx]
        mov esi, ecx
        mov dword ptr ds : [esi], edi
        mov edi, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [edx+8]
        mov dword ptr ds : [esi+4], edi
        mov dword ptr ds : [esi+8], edx
        mov esi, dword ptr ss : [esp+0x30]
        mov edx, dword ptr ss : [esp+0x5C]
        mov dword ptr ds : [ecx+0xC], eax
        add esi, 0xC
        add ecx, 0x10
        dec edx
        mov dword ptr ss : [esp+0x30], esi
        mov dword ptr ss : [esp+0x5C], edx
        jne public_49d9b1
        mov esi, dword ptr ss : [esp+0x20]
        mov dword ptr ss : [esp+0x6C], ecx
        public_49d9eb : nop
        cmp esi, 4
        jne public_49da57
        add dword ptr ds : [ebx+0xEEC], 6
        mov ax, word ptr ds : [ebx+0xEE8]
        mov word ptr ss : [ebp], ax
        mov cx, word ptr ds : [ebx+0xEE8]
        add ebp, 2
        inc cx
        mov word ptr ss : [ebp], cx
        mov dx, word ptr ds : [ebx+0xEE8]
        add ebp, 2
        add dx, 2
        mov word ptr ss : [ebp], dx
        mov ax, word ptr ds : [ebx+0xEE8]
        add ebp, 2
        mov word ptr ss : [ebp], ax
        mov cx, word ptr ds : [ebx+0xEE8]
        add ebp, 2
        add cx, 2
        mov word ptr ss : [ebp], cx
        mov dx, word ptr ds : [ebx+0xEE8]
        add ebp, 2
        add dx, 3
        jmp public_49dc75
        public_49da57 : nop
        cmp dword ptr ss : [esp+0xD8], 4
        jne public_49dbeb
        mov ecx, dword ptr ds : [ebx+0xEEC]
        mov ax, word ptr ds : [ebx+0xEE8]
        add ecx, 6
        mov dword ptr ds : [ebx+0xEEC], ecx
        mov word ptr ss : [ebp], ax
        mov cx, word ptr ds : [ebx+0xEE8]
        add ebp, 2
        inc cx
        mov word ptr ss : [ebp], cx
        mov dx, word ptr ds : [ebx+0xEE8]
        add ebp, 2
        add dx, 2
        mov word ptr ss : [ebp], dx
        mov ax, word ptr ds : [ebx+0xEE8]
        mov word ptr ss : [ebp+2], ax
        mov cx, word ptr ds : [ebx+0xEE8]
        add ebp, 2
        add ebp, 2
        add cx, 2
        mov word ptr ss : [ebp], cx
        mov dx, word ptr ds : [ebx+0xEE8]
        add ebp, 2
        add dx, 3
        mov word ptr ss : [ebp], dx
        mov eax, dword ptr ds : [ebx+0xEEC]
        mov ecx, 0x30
        add ebp, 2
        add eax, ecx
        mov dword ptr ds : [ebx+0xEEC], eax
        mov eax, 4
        mov edi, edi
        public_49daf0 : nop
        mov dx, word ptr ds : [ebx+0xEE8]
        add dx, ax
        mov word ptr ss : [ebp], dx
        xor edx, edx
        mov dx, word ptr ds : [ebx+0xEE8]
        add dx, ax
        add ebp, 2
        add ebp, 2
        add ebp, 2
        inc edx
        mov word ptr ss : [ebp-4], dx
        mov dx, word ptr ds : [ebx+0xEE8]
        add dx, 0x14
        mov word ptr ss : [ebp-2], dx
        inc eax
        cmp eax, 0x13
        jl public_49daf0
        mov ax, word ptr ds : [ebx+0xEE8]
        add ax, 0x13
        mov word ptr ss : [ebp], ax
        mov dx, word ptr ds : [ebx+0xEE8]
        add ebp, 2
        add dx, 4
        mov word ptr ss : [ebp], dx
        mov ax, word ptr ds : [ebx+0xEE8]
        add ax, 0x14
        add ebp, 2
        mov word ptr ss : [ebp], ax
        mov eax, dword ptr ds : [ebx+0xEEC]
        add ebp, 2
        add eax, ecx
        mov dword ptr ds : [ebx+0xEEC], eax
        mov eax, 0x15
        public_49db76 : nop
        mov cx, word ptr ds : [ebx+0xEE8]
        add cx, ax
        mov word ptr ss : [ebp], cx
        xor edx, edx
        mov dx, word ptr ds : [ebx+0xEE8]
        add dx, ax
        add ebp, 2
        add ebp, 2
        add ebp, 2
        inc edx
        mov word ptr ss : [ebp-4], dx
        mov cx, word ptr ds : [ebx+0xEE8]
        add cx, 0x25
        mov word ptr ss : [ebp-2], cx
        inc eax
        cmp eax, 0x24
        jl public_49db76
        mov dx, word ptr ds : [ebx+0xEE8]
        add dx, 0x24
        mov word ptr ss : [ebp], dx
        mov ax, word ptr ds : [ebx+0xEE8]
        add ebp, 2
        add ax, 0x15
        mov word ptr ss : [ebp], ax
        mov cx, word ptr ds : [ebx+0xEE8]
        add ebp, 2
        add cx, 0x25
        mov word ptr ss : [ebp], cx
        jmp public_49dc79
        public_49dbeb : nop
        mov edi, dword ptr ds : [ebx+0xEEC]
        lea edx, ds:[esi+esi*2-3]
        add edi, edx
        lea ecx, ds:[esi-2]
        xor eax, eax
        test ecx, ecx
        mov dword ptr ds : [ebx+0xEEC], edi
        jle public_49dc44
        public_49dc06 : nop
        mov dx, word ptr ds : [ebx+0xEE8]
        add dx, ax
        mov word ptr ss : [ebp], dx
        xor edx, edx
        mov dx, word ptr ds : [ebx+0xEE8]
        add dx, ax
        add ebp, 2
        add ebp, 2
        add ebp, 2
        inc edx
        mov word ptr ss : [ebp-4], dx
        xor edx, edx
        mov dx, word ptr ds : [ebx+0xEE8]
        add dx, si
        dec edx
        mov word ptr ss : [ebp-2], dx
        inc eax
        cmp eax, ecx
        jl public_49dc06
        public_49dc44 : nop
        xor eax, eax
        mov ax, word ptr ds : [ebx+0xEE8]
        add ax, si
        add ebp, 2
        xor edx, edx
        add ebp, 2
        sub eax, 2
        mov word ptr ss : [ebp-4], ax
        mov cx, word ptr ds : [ebx+0xEE8]
        mov word ptr ss : [ebp-2], cx
        mov dx, word ptr ds : [ebx+0xEE8]
        add dx, si
        dec edx
        public_49dc75 : nop
        mov word ptr ss : [ebp], dx
        public_49dc79 : nop
        mov eax, dword ptr ds : [ebx+0xEE8]
        add ebp, 2
        add eax, esi
        mov dword ptr ds : [ebx+0xEE8], eax
        public_49dc8a : nop
        mov eax, dword ptr ss : [esp+0x64]
        mov ecx, dword ptr ss : [esp+0x68]
        mov eax, dword ptr ds : [eax]
        cmp eax, dword ptr ds : [ecx+4]
        mov dword ptr ss : [esp+0x64], eax
        jne public_49cbb4
        public_49dca1 : nop
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        add esp, 0x1174
        ret 
        UNREACHABLE_TRAP(0x49c740)
        ASM_EXPORT_ENTRY_SINGLE(0x49d304, public_49d304)
    }
}

#undef public_49c762
#undef public_49c771
#undef public_49c84a
#undef public_49c867
#undef public_49c8a2
#undef public_49c8b4
#undef public_49c8b6
#undef public_49c8f3
#undef public_49c8f7
#undef public_49c907
#undef public_49c924
#undef public_49c95f
#undef public_49c980
#undef public_49c995
#undef public_49c99b
#undef public_49cbb4
#undef public_49cc0a
#undef public_49cc2b
#undef public_49cc31
#undef public_49cc72
#undef public_49cc94
#undef public_49ccf1
#undef public_49cd13
#undef public_49cd1b
#undef public_49cd3a
#undef public_49cd76
#undef public_49cdb8
#undef public_49cde4
#undef public_49cdf9
#undef public_49ce15
#undef public_49ce2f
#undef public_49ce57
#undef public_49ce61
#undef public_49ce7d
#undef public_49cf1d
#undef public_49cf63
#undef public_49cfdb
#undef public_49d058
#undef public_49d0d3
#undef public_49d11d
#undef public_49d131
#undef public_49d171
#undef public_49d1f7
#undef public_49d215
#undef public_49d304
#undef public_49d325
#undef public_49d347
#undef public_49d37b
#undef public_49d3f6
#undef public_49d473
#undef public_49d4ee
#undef public_49d704
#undef public_49d74f
#undef public_49d7cf
#undef public_49d87d
#undef public_49d881
#undef public_49d8b7
#undef public_49d963
#undef public_49d9b1
#undef public_49d9eb
#undef public_49da57
#undef public_49daf0
#undef public_49db76
#undef public_49dbeb
#undef public_49dc06
#undef public_49dc44
#undef public_49dc75
#undef public_49dc79
#undef public_49dc8a
#undef public_49dca1

#pragma init_seg(compiler)
extern "C" void const* const public_49d304 = __AsmFindLabelExport(&internal_49c740, 0x49d304);
