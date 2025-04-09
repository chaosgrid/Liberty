#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_42d680);
CLANG_FORWARD_PROC_SYMBOL(public_49b600);
CLANG_FORWARD_PROC_SYMBOL(public_4c4da0);
CLANG_FORWARD_PROC_SYMBOL(public_5b73e0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7ec0);

#define public_49b61c _public_49b61c
#define public_49b627 _public_49b627
#define public_49b6d0 _public_49b6d0
#define public_49b6e4 _public_49b6e4
#define public_49b738 _public_49b738
#define public_49b73c _public_49b73c
#define public_49b745 _public_49b745
#define public_49b75e _public_49b75e
#define public_49b76a _public_49b76a
#define public_49b957 _public_49b957
#define public_49b9bf _public_49b9bf
#define public_49b9d2 _public_49b9d2
#define public_49b9e0 _public_49b9e0
#define public_49b9ef _public_49b9ef
#define public_49b9fe _public_49b9fe
#define public_49ba0d _public_49ba0d
#define public_49ba1c _public_49ba1c
#define public_49ba2b _public_49ba2b
#define public_49ba3a _public_49ba3a
#define public_49baa5 _public_49baa5
#define public_49babe _public_49babe
#define public_49badb _public_49badb
#define public_49bb1e _public_49bb1e
#define public_49bb27 _public_49bb27
#define public_49bb60 _public_49bb60
#define public_49bb6e _public_49bb6e
#define public_49bbd4 _public_49bbd4
#define public_49bc40 _public_49bc40
#define public_49bce5 _public_49bce5
#define public_49bdc1 _public_49bdc1
#define public_49be5c _public_49be5c
#define public_49be70 _public_49be70
#define public_49beb0 _public_49beb0
#define public_49bf42 _public_49bf42
#define public_49bfc6 _public_49bfc6
#define public_49bfd4 _public_49bfd4
#define public_49c010 _public_49c010
#define public_49c0f2 _public_49c0f2
#define public_49c196 _public_49c196
#define public_49c237 _public_49c237
#define public_49c24c _public_49c24c

PROC_DECLARE(0x49b600, internal_49b600, public_49b600);
extern "C" NAKED register_t __cdecl internal_49b600()
{
    __asm
    {
        sub esp, 0x2C0
        push ebx
        push ebp
        mov ebp, ecx
        mov eax, dword ptr ss : [ebp+0xB90]
        xor ebx, ebx
        cmp eax, ebx
        push esi
        push edi
        jne public_49b61c
        xor esi, esi
        jmp public_49b627
        public_49b61c : nop
        mov esi, dword ptr ss : [ebp+0xB94]
        sub esi, eax
        sar esi, 2
        public_49b627 : nop
        fld dword ptr ss : [ebp+0x46C]
        lea edi, ss:[ebp+0x46C]
        fcomp dword ptr ss : [ebp+0xECC]
        mov dword ptr ss : [esp+0x50], esi
        fnstsw ax
        test ah, 0x44
        jp public_49b76a
        fld dword ptr ss : [ebp+0x470]
        fcomp dword ptr ss : [ebp+0xED0]
        fnstsw ax
        test ah, 0x44
        jp public_49b76a
        fld dword ptr ss : [ebp+0x474]
        fcomp dword ptr ss : [ebp+0xED4]
        fnstsw ax
        test ah, 0x44
        jp public_49b76a
        fld dword ptr ss : [ebp+0xED8]
        fcomp dword ptr ss : [ebp+0x3F8]
        fnstsw ax
        test ah, 0x44
        jp public_49b76a
        mov ecx, dword ptr ss : [ebp+0x7E0]
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax]
        cmp dword ptr ss : [ebp+0xEDC], eax
        jne public_49b76a
        call public_42d680
        fadd dword ptr ss : [ebp+0xEC0]
        fst dword ptr ss : [ebp+0xEC0]
        fcom dword ptr ds : [public_5d2ecc]
        fnstsw ax
        test ah, 5
        jp public_49b6d0
        pop edi
        fstp st(0)
        pop esi
        pop ebp
        xor al, al
        pop ebx
        add esp, 0x2C0
        ret 
        public_49b6d0 : nop
        cmp esi, ebx
        fsub dword ptr ds : [public_5d2ecc]
        mov dword ptr ss : [esp+0x18], ebx
        fstp dword ptr ss : [ebp+0xEC0]
        jle public_49b745
        public_49b6e4 : nop
        mov ecx, dword ptr ss : [ebp+0xB90]
        mov esi, dword ptr ds : [ecx+ebx*4]
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0x1C]
        test eax, 0x3FFC0
        je public_49b73c
        mov al, byte ptr ss : [ebp+0x87E]
        test al, al
        jne public_49b738
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
        je public_49b73c
        public_49b738 : nop
        inc dword ptr ss : [esp+0x18]
        public_49b73c : nop
        mov eax, dword ptr ss : [esp+0x50]
        inc ebx
        cmp ebx, eax
        jl public_49b6e4
        public_49b745 : nop
        mov eax, dword ptr ss : [esp+0x18]
        cmp eax, dword ptr ss : [ebp+0xEC4]
        jne public_49b75e
        pop edi
        pop esi
        pop ebp
        xor al, al
        pop ebx
        add esp, 0x2C0
        ret 
        public_49b75e : nop
        mov esi, dword ptr ss : [esp+0x50]
        mov dword ptr ss : [ebp+0xEC4], eax
        xor ebx, ebx
        public_49b76a : nop
        mov ecx, edi
        mov edx, dword ptr ds : [ecx]
        mov eax, dword ptr ds : [ecx+4]
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ss : [ebp+0xECC], edx
        mov edx, dword ptr ss : [ebp+0x3F8]
        mov dword ptr ss : [ebp+0xED0], eax
        mov dword ptr ss : [ebp+0xED4], ecx
        mov ecx, dword ptr ss : [ebp+0x7E0]
        mov dword ptr ss : [ebp+0xED8], edx
        mov eax, dword ptr ds : [ecx]
        call dword ptr ds : [eax]
        mov dword ptr ss : [ebp+0xEDC], eax
        lea eax, ss:[ebp+0x418]
        mov ecx, eax
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ss : [esp+0x44], edx
        fld dword ptr ss : [esp+0x44]
        fmul dword ptr ds : [public_5c75e0]
        mov edx, dword ptr ds : [ecx+4]
        mov ecx, dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+0x48], edx
        fld dword ptr ss : [esp+0x48]
        fmul dword ptr ds : [public_5c75e0]
        mov dword ptr ss : [esp+0x4C], ecx
        fld dword ptr ss : [esp+0x4C]
        mov edx, eax
        fmul dword ptr ds : [public_5c75e0]
        mov ecx, dword ptr ds : [edx]
        mov dword ptr ss : [esp+0x1C], ecx
        mov ecx, dword ptr ds : [edx+4]
        fstp dword ptr ss : [esp+0x4C]
        mov edx, dword ptr ds : [edx+8]
        fxch 
        mov dword ptr ss : [esp+0x20], ecx
        fchs 
        mov dword ptr ss : [esp+0x24], edx
        fstp dword ptr ss : [esp+0x28]
        mov ecx, dword ptr ss : [esp+0x28]
        fchs 
        mov dword ptr ss : [esp+0x38], ecx
        fstp dword ptr ss : [esp+0x2C]
        fld dword ptr ss : [esp+0x4C]
        mov edx, dword ptr ss : [esp+0x2C]
        fchs 
        mov dword ptr ss : [esp+0x3C], edx
        fstp dword ptr ss : [esp+0x30]
        fld dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ss : [esp+0x30]
        fmul dword ptr ds : [public_5c75e0]
        mov dword ptr ss : [esp+0x40], ecx
        fld dword ptr ss : [esp+0x20]
        mov dword ptr ss : [ebp+0xD74], ebx
        fmul dword ptr ds : [public_5c75e0]
        mov dword ptr ss : [ebp+0xEBC], ebx
        fld dword ptr ss : [esp+0x24]
        fmul dword ptr ds : [public_5c75e0]
        fstp dword ptr ss : [esp+0x24]
        fld dword ptr ss : [ebp+0x3F8]
        fsub dword ptr ds : [public_5c75dc]
        fstp dword ptr ss : [esp+0x18]
        fxch 
        fmul dword ptr ss : [esp+0x18]
        fstp dword ptr ss : [esp+0x1C]
        fmul dword ptr ss : [esp+0x18]
        fld dword ptr ss : [esp+0x24]
        fmul dword ptr ss : [esp+0x18]
        fld dword ptr ss : [esp+0x28]
        fsub dword ptr ss : [esp+0x1C]
        fstp dword ptr ss : [esp+0x38]
        fld dword ptr ss : [esp+0x3C]
        fsub st, st(2)
        fstp dword ptr ss : [esp+0x3C]
        fld dword ptr ss : [esp+0x40]
        fsub st, st(1)
        fstp st(2)
        fstp st(0)
        cmp esi, ebx
        fld dword ptr ss : [ebp+0x3F8]
        mov edx, dword ptr ds : [edi]
        mov ecx, dword ptr ds : [edi+4]
        mov dword ptr ss : [esp+0x1C], edx
        fld dword ptr ss : [esp+0x1C]
        fmul st, st(1)
        mov edx, dword ptr ds : [edi+8]
        mov dword ptr ss : [esp+0x20], ecx
        fld dword ptr ss : [esp+0x20]
        fmul st, st(2)
        mov dword ptr ss : [esp+0x24], edx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        fstp dword ptr ss : [esp+0x20]
        mov eax, dword ptr ds : [eax+8]
        fld dword ptr ss : [esp+0x24]
        mov dword ptr ss : [esp+0x40], eax
        fmul st, st(2)
        mov dword ptr ss : [esp+0x5C], 0xFFFFFFFF
        mov dword ptr ss : [ebp+0xEB8], ebx
        mov dword ptr ss : [esp+0x58], ebx
        fstp dword ptr ss : [esp+0x24]
        fadd dword ptr ss : [esp+0x38]
        mov dword ptr ss : [esp+0x38], ecx
        mov ecx, dword ptr ss : [ebp+0xD6C]
        mov dword ptr ss : [esp+0x60], ecx
        fstp dword ptr ss : [esp+0x88]
        fstp st(0)
        fld dword ptr ss : [esp+0x20]
        fadd dword ptr ss : [esp+0x3C]
        mov dword ptr ss : [esp+0x3C], edx
        fstp dword ptr ss : [esp+0x8C]
        fld dword ptr ss : [esp+0x24]
        fadd st, st(1)
        fstp dword ptr ss : [esp+0x90]
        fstp st(0)
        fld dword ptr ss : [ebp+0x3F8]
        fld dword ptr ss : [esp+0x38]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x38]
        fld dword ptr ss : [esp+0x3C]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x3C]
        fld dword ptr ss : [esp+0x40]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x40]
        fstp st(0)
        jle public_49c24c
        public_49b957 : nop
        mov edx, dword ptr ss : [ebp+0xB90]
        mov eax, dword ptr ss : [esp+0x58]
        mov ebx, dword ptr ds : [edx+eax*4]
        mov edx, dword ptr ds : [ebx]
        mov ecx, ebx
        call dword ptr ds : [edx+0x1C]
        test eax, 0x3FFC0
        mov dword ptr ss : [esp+0x34], eax
        je public_49c237
        mov cl, byte ptr ss : [ebp+0x87E]
        test cl, cl
        jne public_49b9bf
        mov edx, dword ptr ds : [ebx]
        push 0
        push 1
        lea eax, ss:[esp+0x1B]
        push eax
        mov ecx, ebx
        mov byte ptr ss : [esp+0x1F], 0
        call dword ptr ds : [edx+4]
        push eax
        call public_4c4da0
        mov eax, dword ptr ds : [ebx]
        add esp, 0x10
        mov ecx, ebx
        call dword ptr ds : [eax+0x80]
        mov cl, byte ptr ss : [esp+0x13]
        or cl, al
        test cl, 1
        je public_49c237
        mov eax, dword ptr ss : [esp+0x34]
        public_49b9bf : nop
        or esi, 0xFFFFFFFF
        test al, 0x40
        mov byte ptr ss : [esp+0x13], 0
        je public_49b9d2
        xor esi, esi
        jmp public_49badb
        public_49b9d2 : nop
        test al, al
        jns public_49b9e0
        mov esi, 1
        jmp public_49badb
        public_49b9e0 : nop
        test ah, 1
        je public_49b9ef
        mov esi, 5
        jmp public_49badb
        public_49b9ef : nop
        test ah, 2
        je public_49b9fe
        mov esi, 6
        jmp public_49badb
        public_49b9fe : nop
        test ah, 4
        je public_49ba0d
        mov esi, 7
        jmp public_49badb
        public_49ba0d : nop
        test ah, 8
        je public_49ba1c
        mov esi, 8
        jmp public_49badb
        public_49ba1c : nop
        test ah, 0x10
        je public_49ba2b
        mov esi, 3
        jmp public_49badb
        public_49ba2b : nop
        test ah, 0x20
        je public_49ba3a
        mov esi, 4
        jmp public_49badb
        public_49ba3a : nop
        test ah, ah
        jns public_49badb
        mov edx, dword ptr ds : [ebx]
        mov ecx, ebx
        mov esi, 2
        call dword ptr ds : [edx+0x24]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0x28], ecx
        fld dword ptr ss : [esp+0x28]
        fmul dword ptr ds : [public_5ca220]
        mov dword ptr ss : [esp+0x2C], edx
        mov dword ptr ss : [esp+0x30], eax
        fstp dword ptr ss : [esp+0x28]
        fld dword ptr ss : [esp+0x2C]
        fmul dword ptr ds : [public_5ca220]
        fstp dword ptr ss : [esp+0x2C]
        fld dword ptr ss : [esp+0x30]
        fmul dword ptr ds : [public_5ca220]
        fstp dword ptr ss : [esp+0x30]
        fld dword ptr ss : [esp+0x28]
        fcomp dword ptr ds : [public_5c75dc]
        fnstsw ax
        test ah, 0x41
        jne public_49baa5
        mov dword ptr ss : [esp+0x28], 0x3F800000
        public_49baa5 : nop
        fld dword ptr ss : [esp+0x2C]
        fcomp dword ptr ds : [public_5c75dc]
        fnstsw ax
        test ah, 0x41
        jne public_49babe
        mov dword ptr ss : [esp+0x2C], 0x3F800000
        public_49babe : nop
        fld dword ptr ss : [esp+0x30]
        fcomp dword ptr ds : [public_5c75dc]
        fnstsw ax
        test ah, 0x41
        mov eax, dword ptr ss : [esp+0x34]
        jne public_49badb
        mov dword ptr ss : [esp+0x30], 0x3F800000
        public_49badb : nop
        test eax, 0x30000
        je public_49bb1e
        mov dword ptr ss : [esp+0x64], 0
        mov ecx, dword ptr ss : [esp+0x64]
        mov dword ptr ss : [esp+0x68], 0
        mov edx, dword ptr ss : [esp+0x68]
        mov dword ptr ss : [esp+0x6C], 0
        mov eax, dword ptr ss : [esp+0x6C]
        mov esi, 2
        mov dword ptr ss : [esp+0x28], ecx
        mov dword ptr ss : [esp+0x2C], edx
        mov dword ptr ss : [esp+0x30], eax
        mov byte ptr ss : [esp+0x13], 1
        jmp public_49bb27
        public_49bb1e : nop
        cmp esi, 0xFFFFFFFF
        je public_49c237
        public_49bb27 : nop
        mov eax, dword ptr ss : [ebp+esi*4+0xB68]
        test eax, eax
        je public_49c237
        mov al, byte ptr ss : [ebp+0x478]
        test al, al
        mov edi, 0xFF
        je public_49bb60
        fld dword ptr ds : [public_5d3f0c]
        fdiv dword ptr ss : [ebp+0x3F8]
        fadd dword ptr ds : [public_5d3f08]
        call public_5b7ec0
        mov edi, eax
        jmp public_49bb6e
        public_49bb60 : nop
        cmp dword ptr ss : [ebp+0x7D0], 2
        jne public_49bb6e
        mov edi, 0x56
        public_49bb6e : nop
        cmp esi, dword ptr ss : [esp+0x5C]
        je public_49bbd4
        mov ecx, dword ptr ss : [ebp+0xEB8]
        mov edx, dword ptr ss : [ebp+0xD74]
        mov dword ptr ss : [ebp+ecx*4+0xD78], edx
        mov eax, dword ptr ss : [ebp+0xEB8]
        mov dword ptr ss : [ebp+eax*4+0xE78], esi
        mov ecx, dword ptr ss : [ebp+0xEB8]
        xor eax, eax
        mov dword ptr ss : [ebp+ecx*4+0xDB8], eax
        mov edx, dword ptr ss : [ebp+0xEB8]
        mov ecx, dword ptr ss : [ebp+0xEBC]
        mov dword ptr ss : [ebp+edx*4+0xDF8], ecx
        mov edx, dword ptr ss : [ebp+0xEB8]
        mov dword ptr ss : [ebp+edx*4+0xE38], eax
        mov eax, dword ptr ss : [ebp+0xEB8]
        inc eax
        mov dword ptr ss : [esp+0x5C], esi
        mov dword ptr ss : [ebp+0xEB8], eax
        public_49bbd4 : nop
        mov eax, edi
        shl eax, 0x18
        or eax, 0xFFFFFF
        cmp esi, 2
        mov dword ptr ss : [esp+0x34], eax
        jne public_49bc40
        fld dword ptr ss : [esp+0x28]
        fmul dword ptr ds : [public_5c75d8]
        call public_5b7ec0
        fld dword ptr ss : [esp+0x2C]
        fmul dword ptr ds : [public_5c75d8]
        mov esi, eax
        and esi, 0xFF
        shl edi, 8
        or esi, edi
        shl esi, 8
        call public_5b7ec0
        fld dword ptr ss : [esp+0x30]
        fmul dword ptr ds : [public_5c75d8]
        and eax, 0xFF
        or esi, eax
        shl esi, 8
        call public_5b7ec0
        and eax, 0xFF
        or esi, eax
        mov dword ptr ss : [esp+0x34], esi
        lea esp, ss:[esp]
        public_49bc40 : nop
        mov eax, dword ptr ds : [ebx]
        lea ecx, ss:[esp+0x44]
        push ecx
        mov ecx, ebx
        call dword ptr ds : [eax+0x28]
        fld dword ptr ss : [ebp+0xF48]
        fld dword ptr ss : [esp+0x44]
        mov ecx, ebx
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x44]
        fld dword ptr ss : [esp+0x48]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x48]
        fld dword ptr ss : [esp+0x4C]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0x4C]
        mov edx, dword ptr ds : [ebx]
        fstp st(0)
        call dword ptr ds : [edx+0xC]
        fld dword ptr ss : [ebp+0xF48]
        mov esi, eax
        mov ecx, 0xC
        lea edi, ss:[esp+0xA8]
        rep movsd
        fld dword ptr ss : [esp+0xCC]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0xCC]
        fld dword ptr ss : [esp+0xD4]
        fmul st, st(1)
        fstp dword ptr ss : [esp+0xD4]
        mov dword ptr ss : [esp+0xD0], 0
        fstp st(0)
        mov eax, dword ptr ds : [ebx]
        mov ecx, ebx
        call dword ptr ds : [eax+0x18]
        dec eax
        je public_49be5c
        dec eax
        jne public_49c237
        mov dword ptr ss : [esp+0x54], 0
        lea esi, ss:[esp+0xF0]
        mov edi, 0x20
        public_49bce5 : nop
        fld dword ptr ss : [esp+0x54]
        mov edx, dword ptr ds : [ebx]
        fsin 
        lea eax, ss:[esp+0x1C]
        push eax
        mov ecx, ebx
        mov dword ptr ss : [esp+0x24], 0
        fstp dword ptr ss : [esp+0x20]
        fld dword ptr ss : [esp+0x58]
        fcos 
        fstp dword ptr ss : [esp+0x28]
        call dword ptr ds : [edx+0x40]
        fmul dword ptr ss : [ebp+0xF48]
        fld dword ptr ss : [esp+0x1C]
        mov ecx, esi
        fmul st, st(1)
        fld dword ptr ss : [esp+0x20]
        fmul st, st(2)
        fstp dword ptr ss : [esp+0x20]
        fld dword ptr ss : [esp+0x24]
        fmul st, st(2)
        fstp dword ptr ss : [esp+0x24]
        fadd dword ptr ss : [esp+0xCC]
        fstp dword ptr ss : [esp+0x7C]
        mov edx, dword ptr ss : [esp+0x7C]
        fstp st(0)
        mov dword ptr ds : [ecx], edx
        fld dword ptr ss : [esp+0x20]
        fadd dword ptr ss : [esp+0xD0]
        fstp dword ptr ss : [esp+0x80]
        fld dword ptr ss : [esp+0x24]
        mov eax, dword ptr ss : [esp+0x80]
        fadd dword ptr ss : [esp+0xD4]
        mov dword ptr ds : [ecx+4], eax
        mov al, byte ptr ss : [esp+0x13]
        test al, al
        fstp dword ptr ss : [esp+0x84]
        mov edx, dword ptr ss : [esp+0x84]
        mov dword ptr ds : [ecx+8], edx
        jne public_49bdc1
        fld dword ptr ds : [esi]
        call public_5b7ec0
        mov ecx, eax
        and ecx, 0xFF
        sub ecx, 0x80
        shl ecx, 5
        mov dword ptr ss : [esp+0x14], ecx
        fild dword ptr ss : [esp+0x14]
        sar eax, 3
        and eax, 0x1FE0
        sub eax, 0x1000
        fadd dword ptr ds : [esi]
        mov dword ptr ss : [esp+0x14], eax
        fstp dword ptr ds : [esi]
        fild dword ptr ss : [esp+0x14]
        fadd dword ptr ds : [esi+4]
        fstp dword ptr ds : [esi+4]
        public_49bdc1 : nop
        fld dword ptr ss : [esp+0x54]
        add esi, 0xC
        dec edi
        fadd dword ptr ds : [public_5d3f04]
        fstp dword ptr ss : [esp+0x54]
        jne public_49bce5
        mov eax, dword ptr ss : [esp+0xD0]
        mov edx, dword ptr ss : [esp+0xCC]
        mov ecx, dword ptr ss : [esp+0xD4]
        mov dword ptr ss : [esp+0x274], eax
        mov al, byte ptr ss : [esp+0x13]
        test al, al
        mov dword ptr ss : [esp+0x270], edx
        mov dword ptr ss : [esp+0x278], ecx
        jne public_49bfd4
        fld dword ptr ss : [esp+0xCC]
        call public_5b7ec0
        mov edx, eax
        and edx, 0xFF
        sub edx, 0x80
        shl edx, 5
        mov dword ptr ss : [esp+0x14], edx
        fild dword ptr ss : [esp+0x14]
        sar eax, 3
        and eax, 0x1FE0
        sub eax, 0x1000
        fadd dword ptr ss : [esp+0xCC]
        mov dword ptr ss : [esp+0x14], eax
        fstp dword ptr ss : [esp+0x270]
        fild dword ptr ss : [esp+0x14]
        jmp public_49bfc6
        public_49be5c : nop
        mov dword ptr ss : [esp+0x18], 0
        lea esi, ss:[esp+0xF0]
        mov edi, 0x20
        public_49be70 : nop
        fld dword ptr ss : [esp+0x18]
        mov eax, dword ptr ds : [public_67209c]
        test eax, eax
        fsin 
        mov dword ptr ss : [esp+0xE8], 0
        fmul dword ptr ss : [esp+0x44]
        fstp dword ptr ss : [esp+0xE4]
        fld dword ptr ss : [esp+0x18]
        fcos 
        fmul dword ptr ss : [esp+0x44]
        fstp dword ptr ss : [esp+0xEC]
        jne public_49beb0
        call public_5b73e0
        mov dword ptr ds : [public_67209c], eax
        public_49beb0 : nop
        mov ecx, dword ptr ds : [eax]
        lea edx, ss:[esp+0xE4]
        push edx
        lea edx, ss:[esp+0xAC]
        push edx
        lea edx, ss:[esp+0xE0]
        push edx
        push eax
        call dword ptr ds : [ecx+0x28]
        fld dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ss : [esp+0xD8]
        fadd dword ptr ds : [public_5d3f04]
        mov edx, dword ptr ss : [esp+0xDC]
        mov eax, esi
        mov dword ptr ds : [eax], ecx
        fstp dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ss : [esp+0xE0]
        mov dword ptr ds : [eax+4], edx
        mov dword ptr ds : [eax+8], ecx
        mov al, byte ptr ss : [esp+0x13]
        test al, al
        jne public_49bf42
        fld dword ptr ds : [esi]
        call public_5b7ec0
        mov edx, eax
        and edx, 0xFF
        sub edx, 0x80
        shl edx, 5
        mov dword ptr ss : [esp+0x14], edx
        fild dword ptr ss : [esp+0x14]
        sar eax, 3
        and eax, 0x1FE0
        sub eax, 0x1000
        fadd dword ptr ds : [esi]
        mov dword ptr ss : [esp+0x14], eax
        fstp dword ptr ds : [esi]
        fild dword ptr ss : [esp+0x14]
        fadd dword ptr ds : [esi+4]
        fstp dword ptr ds : [esi+4]
        public_49bf42 : nop
        add esi, 0xC
        dec edi
        jne public_49be70
        mov eax, dword ptr ss : [esp+0xCC]
        mov ecx, dword ptr ss : [esp+0xD0]
        mov edx, dword ptr ss : [esp+0xD4]
        mov dword ptr ss : [esp+0x270], eax
        mov al, byte ptr ss : [esp+0x13]
        test al, al
        mov dword ptr ss : [esp+0x274], ecx
        mov dword ptr ss : [esp+0x278], edx
        jne public_49bfd4
        fld dword ptr ss : [esp+0xCC]
        call public_5b7ec0
        mov ecx, eax
        and ecx, 0xFF
        sub ecx, 0x80
        shl ecx, 5
        mov dword ptr ss : [esp+0x14], ecx
        fild dword ptr ss : [esp+0x14]
        sar eax, 3
        and eax, 0x1FE0
        sub eax, 0x1000
        fadd dword ptr ss : [esp+0xCC]
        mov dword ptr ss : [esp+0x14], eax
        fstp dword ptr ss : [esp+0x270]
        fild dword ptr ss : [esp+0x14]
        public_49bfc6 : nop
        fadd dword ptr ss : [esp+0x274]
        fstp dword ptr ss : [esp+0x274]
        public_49bfd4 : nop
        fld dword ptr ss : [ebp+0x4A8]
        mov edx, dword ptr ss : [esp+0x3C]
        mov esi, dword ptr ss : [esp+0x40]
        fld st(0)
        fadd st, st(1)
        lea eax, ss:[esp+0xF0]
        mov ecx, 0x21
        fstp dword ptr ss : [esp+0x94]
        fld dword ptr ss : [ebp+0x4AC]
        fld st(0)
        fadd st, st(1)
        fstp dword ptr ss : [esp+0x98]
        fxch 
        fstp dword ptr ss : [esp+0x14]
        public_49c010 : nop
        fld dword ptr ss : [esp+0x14]
        mov edi, dword ptr ss : [esp+0x38]
        fadd dword ptr ds : [eax]
        mov dword ptr ss : [esp+0xA0], edx
        mov dword ptr ss : [esp+0x9C], edi
        mov dword ptr ss : [esp+0xA4], esi
        fdiv dword ptr ss : [esp+0x94]
        mov edi, eax
        add eax, 0xC
        dec ecx
        fmul dword ptr ss : [esp+0x38]
        fld st(1)
        fadd dword ptr ds : [eax-4]
        fdiv dword ptr ss : [esp+0x98]
        fsubr qword ptr ds : [public_5c89b8]
        fmul dword ptr ss : [esp+0xA0]
        fld dword ptr ss : [esp+0x88]
        fadd st, st(2)
        fstp dword ptr ss : [esp+0x70]
        fld dword ptr ss : [esp+0x8C]
        mov ebx, dword ptr ss : [esp+0x70]
        fadd st, st(1)
        mov dword ptr ds : [edi], ebx
        fstp dword ptr ss : [esp+0x74]
        mov ebx, dword ptr ss : [esp+0x74]
        fstp st(0)
        mov dword ptr ds : [edi+4], ebx
        fstp st(0)
        fld dword ptr ss : [esp+0xA4]
        fadd dword ptr ss : [esp+0x90]
        fstp dword ptr ss : [esp+0x78]
        mov ebx, dword ptr ss : [esp+0x78]
        mov dword ptr ds : [edi+8], ebx
        jne public_49c010
        mov ecx, dword ptr ss : [ebp+0xD74]
        fstp st(0)
        mov eax, dword ptr ss : [ebp+0xEB8]
        fld dword ptr ss : [ebp+0x3F8]
        fmul dword ptr ds : [public_5d29b0]
        lea edx, ds:[ecx+0x21]
        mov dword ptr ss : [ebp+0xD74], edx
        mov edx, dword ptr ss : [ebp+eax*4+0xDB4]
        fdivr dword ptr ds : [public_5c75dc]
        lea eax, ss:[ebp+eax*4+0xDB4]
        add edx, 0x21
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ss : [esp+0x60]
        lea eax, ss:[esp+0xF0]
        mov dword ptr ss : [esp+0x14], 0x20
        public_49c0f2 : nop
        fld dword ptr ds : [eax]
        mov esi, dword ptr ss : [esp+0x34]
        fsub dword ptr ss : [esp+0x270]
        mov dword ptr ds : [edx+0xC], esi
        mov esi, eax
        mov ebx, dword ptr ds : [esi]
        fmul st, st(1)
        mov edi, edx
        mov dword ptr ds : [edi], ebx
        mov ebx, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [esi+8]
        fadd qword ptr ds : [public_5c75e8]
        mov dword ptr ds : [edi+4], ebx
        mov dword ptr ds : [edi+8], esi
        mov esi, dword ptr ss : [esp+0x14]
        fstp dword ptr ds : [edx+0x10]
        fld dword ptr ds : [eax+4]
        add edx, 0x18
        fsub dword ptr ss : [esp+0x274]
        add eax, 0xC
        dec esi
        mov dword ptr ss : [esp+0x14], esi
        fmul st, st(1)
        fadd qword ptr ds : [public_5c75e8]
        fstp dword ptr ds : [edx-4]
        jne public_49c0f2
        mov eax, dword ptr ss : [esp+0x34]
        fstp st(0)
        mov esi, dword ptr ss : [esp+0x270]
        mov dword ptr ds : [edx+0xC], eax
        mov eax, 0x3F000000
        mov dword ptr ds : [edx+0x10], eax
        mov dword ptr ds : [edx+0x14], eax
        mov eax, edx
        mov dword ptr ds : [eax], esi
        mov esi, dword ptr ss : [esp+0x274]
        mov dword ptr ds : [eax+4], esi
        mov esi, dword ptr ss : [esp+0x278]
        add edx, 0x18
        mov dword ptr ds : [eax+8], esi
        mov dword ptr ss : [esp+0x60], edx
        mov edx, dword ptr ss : [ebp+0xEB8]
        lea eax, ss:[ebp+edx*4+0xE34]
        add dword ptr ds : [eax], 0x60
        xor eax, eax
        lea edx, ds:[ecx+0x20]
        public_49c196 : nop
        mov edi, dword ptr ss : [ebp+0xEBC]
        mov ebx, dword ptr ss : [ebp+0xD70]
        lea esi, ds:[eax+ecx]
        mov word ptr ds : [ebx+edi*2], si
        mov ebx, dword ptr ss : [ebp+0xEBC]
        inc ebx
        mov dword ptr ss : [ebp+0xEBC], ebx
        mov esi, ebx
        mov ebx, dword ptr ss : [ebp+0xD70]
        lea edi, ds:[ecx+eax+1]
        mov word ptr ds : [ebx+esi*2], di
        mov edi, dword ptr ss : [ebp+0xEBC]
        inc edi
        mov dword ptr ss : [ebp+0xEBC], edi
        mov esi, edi
        mov edi, dword ptr ss : [ebp+0xD70]
        mov word ptr ds : [edi+esi*2], dx
        mov esi, dword ptr ss : [ebp+0xEBC]
        inc esi
        inc eax
        cmp eax, 0x1F
        mov dword ptr ss : [ebp+0xEBC], esi
        jl public_49c196
        mov edi, dword ptr ss : [ebp+0xD70]
        lea eax, ds:[ecx+0x1F]
        mov word ptr ds : [edi+esi*2], ax
        mov esi, dword ptr ss : [ebp+0xEBC]
        inc esi
        mov dword ptr ss : [ebp+0xEBC], esi
        mov eax, esi
        mov esi, dword ptr ss : [ebp+0xD70]
        mov word ptr ds : [esi+eax*2], cx
        mov ecx, dword ptr ss : [ebp+0xEBC]
        inc ecx
        mov dword ptr ss : [ebp+0xEBC], ecx
        mov eax, ecx
        mov ecx, dword ptr ss : [ebp+0xD70]
        mov word ptr ds : [ecx+eax*2], dx
        inc dword ptr ss : [ebp+0xEBC]
        public_49c237 : nop
        mov eax, dword ptr ss : [esp+0x58]
        mov ecx, dword ptr ss : [esp+0x50]
        inc eax
        cmp eax, ecx
        mov dword ptr ss : [esp+0x58], eax
        jl public_49b957
        public_49c24c : nop
        pop edi
        pop esi
        pop ebp
        mov al, 1
        pop ebx
        add esp, 0x2C0
        ret 
        UNREACHABLE_TRAP(0x49b600)
    }
}

#undef public_49b61c
#undef public_49b627
#undef public_49b6d0
#undef public_49b6e4
#undef public_49b738
#undef public_49b73c
#undef public_49b745
#undef public_49b75e
#undef public_49b76a
#undef public_49b957
#undef public_49b9bf
#undef public_49b9d2
#undef public_49b9e0
#undef public_49b9ef
#undef public_49b9fe
#undef public_49ba0d
#undef public_49ba1c
#undef public_49ba2b
#undef public_49ba3a
#undef public_49baa5
#undef public_49babe
#undef public_49badb
#undef public_49bb1e
#undef public_49bb27
#undef public_49bb60
#undef public_49bb6e
#undef public_49bbd4
#undef public_49bc40
#undef public_49bce5
#undef public_49bdc1
#undef public_49be5c
#undef public_49be70
#undef public_49beb0
#undef public_49bf42
#undef public_49bfc6
#undef public_49bfd4
#undef public_49c010
#undef public_49c0f2
#undef public_49c196
#undef public_49c237
#undef public_49c24c
