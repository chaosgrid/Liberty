#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4eee10);
CLANG_FORWARD_PROC_SYMBOL(public_4f30a0);
CLANG_FORWARD_PROC_SYMBOL(public_4f3770);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e1d);

#define public_4f30c4 _public_4f30c4
#define public_4f30e2 _public_4f30e2
#define public_4f30ed _public_4f30ed
#define public_4f30f6 _public_4f30f6
#define public_4f3101 _public_4f3101
#define public_4f311d _public_4f311d
#define public_4f3134 _public_4f3134
#define public_4f3141 _public_4f3141
#define public_4f314c _public_4f314c
#define public_4f314f _public_4f314f
#define public_4f3167 _public_4f3167
#define public_4f3172 _public_4f3172
#define public_4f3175 _public_4f3175
#define public_4f318a _public_4f318a
#define public_4f3195 _public_4f3195
#define public_4f31a0 _public_4f31a0
#define public_4f31a3 _public_4f31a3
#define public_4f31b7 _public_4f31b7
#define public_4f31c3 _public_4f31c3
#define public_4f31cf _public_4f31cf
#define public_4f31d2 _public_4f31d2
#define public_4f31f0 _public_4f31f0
#define public_4f322f _public_4f322f
#define public_4f3242 _public_4f3242
#define public_4f324d _public_4f324d
#define public_4f3250 _public_4f3250
#define public_4f325b _public_4f325b
#define public_4f326e _public_4f326e
#define public_4f3295 _public_4f3295
#define public_4f32af _public_4f32af
#define public_4f32d5 _public_4f32d5
#define public_4f32e8 _public_4f32e8
#define public_4f32f5 _public_4f32f5
#define public_4f32f7 _public_4f32f7
#define public_4f3302 _public_4f3302
#define public_4f3319 _public_4f3319
#define public_4f3331 _public_4f3331
#define public_4f333e _public_4f333e
#define public_4f3340 _public_4f3340
#define public_4f334c _public_4f334c
#define public_4f3376 _public_4f3376
#define public_4f338e _public_4f338e
#define public_4f339e _public_4f339e
#define public_4f33a8 _public_4f33a8
#define public_4f33cb _public_4f33cb
#define public_4f33de _public_4f33de
#define public_4f33e9 _public_4f33e9
#define public_4f33ec _public_4f33ec
#define public_4f33f6 _public_4f33f6
#define public_4f341f _public_4f341f
#define public_4f3432 _public_4f3432
#define public_4f343f _public_4f343f
#define public_4f3441 _public_4f3441
#define public_4f3444 _public_4f3444
#define public_4f3447 _public_4f3447
#define public_4f344e _public_4f344e

PROC_DECLARE(0x4f30a0, internal_4f30a0, public_4f30a0);
extern "C" NAKED register_t __cdecl internal_4f30a0()
{
    __asm
    {
        push ecx
        push ebx
        push ebp
        push esi
        mov esi, dword ptr ss : [esp+0x18]
        push edi
        mov edi, ecx
        lea ecx, ss:[esp+0x1C]
        call public_4f3770
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ds : [edi+8]
        cmp edx, eax
        mov dword ptr ss : [esp+0x10], esi
        jne public_4f30e2
        mov eax, dword ptr ds : [esi+8]
        public_4f30c4 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov ecx, dword ptr ds : [edi+4]
        cmp dword ptr ds : [ecx+4], esi
        jne public_4f3167
        mov dword ptr ds : [ecx+4], eax
        jmp public_4f3175
        public_4f30e2 : nop
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, eax
        jne public_4f30ed
        mov eax, edx
        jmp public_4f30c4
        public_4f30ed : nop
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x45]
        test bl, bl
        jne public_4f3101
        public_4f30f6 : nop
        mov ecx, eax
        mov eax, dword ptr ds : [ecx]
        mov bl, byte ptr ds : [eax+0x45]
        test bl, bl
        je public_4f30f6
        public_4f3101 : nop
        cmp ecx, esi
        mov eax, dword ptr ds : [ecx+8]
        mov dword ptr ss : [esp+0x10], ecx
        je public_4f30c4
        mov dword ptr ds : [edx+4], ecx
        mov edx, dword ptr ds : [esi]
        mov dword ptr ds : [ecx], edx
        cmp ecx, dword ptr ds : [esi+8]
        jne public_4f311d
        mov dword ptr ds : [eax+4], ecx
        jmp public_4f3134
        public_4f311d : nop
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [eax+4], edx
        mov edx, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx], eax
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [ecx+8], edx
        mov edx, dword ptr ds : [esi+8]
        mov dword ptr ds : [edx+4], ecx
        public_4f3134 : nop
        mov edx, dword ptr ds : [edi+4]
        cmp dword ptr ds : [edx+4], esi
        jne public_4f3141
        mov dword ptr ds : [edx+4], ecx
        jmp public_4f314f
        public_4f3141 : nop
        mov edx, dword ptr ds : [esi+4]
        cmp dword ptr ds : [edx], esi
        jne public_4f314c
        mov dword ptr ds : [edx], ecx
        jmp public_4f314f
        public_4f314c : nop
        mov dword ptr ds : [edx+8], ecx
        public_4f314f : nop
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [ecx+4], edx
        mov bl, byte ptr ds : [esi+0x44]
        mov dl, byte ptr ds : [ecx+0x44]
        mov byte ptr ds : [ecx+0x44], bl
        mov byte ptr ds : [esi+0x44], dl
        mov dword ptr ss : [esp+0x10], esi
        jmp public_4f31d2
        public_4f3167 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp dword ptr ds : [ecx], esi
        jne public_4f3172
        mov dword ptr ds : [ecx], eax
        jmp public_4f3175
        public_4f3172 : nop
        mov dword ptr ds : [ecx+8], eax
        public_4f3175 : nop
        mov ebp, dword ptr ds : [edi+4]
        cmp dword ptr ss : [ebp], esi
        jne public_4f31a3
        mov ecx, dword ptr ds : [esi+8]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_4f318a
        mov edx, dword ptr ds : [esi+4]
        jmp public_4f31a0
        public_4f318a : nop
        mov ecx, dword ptr ds : [eax]
        mov bl, byte ptr ds : [ecx+0x45]
        test bl, bl
        mov edx, eax
        jne public_4f31a0
        public_4f3195 : nop
        mov edx, ecx
        mov ecx, dword ptr ds : [edx]
        mov bl, byte ptr ds : [ecx+0x45]
        test bl, bl
        je public_4f3195
        public_4f31a0 : nop
        mov dword ptr ss : [ebp], edx
        public_4f31a3 : nop
        mov ebp, dword ptr ds : [edi+4]
        cmp dword ptr ss : [ebp+8], esi
        jne public_4f31d2
        mov ecx, dword ptr ds : [esi]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_4f31b7
        mov edx, dword ptr ds : [esi+4]
        jmp public_4f31cf
        public_4f31b7 : nop
        mov ecx, dword ptr ds : [eax+8]
        mov bl, byte ptr ds : [ecx+0x45]
        test bl, bl
        mov edx, eax
        jne public_4f31cf
        public_4f31c3 : nop
        mov edx, ecx
        mov ecx, dword ptr ds : [edx+8]
        mov bl, byte ptr ds : [ecx+0x45]
        test bl, bl
        je public_4f31c3
        public_4f31cf : nop
        mov dword ptr ss : [ebp+8], edx
        public_4f31d2 : nop
        mov esi, dword ptr ss : [esp+0x10]
        mov cl, byte ptr ds : [esi+0x44]
        mov bl, 1
        cmp cl, bl
        jne public_4f344e
        mov ecx, dword ptr ds : [edi+4]
        cmp eax, dword ptr ds : [ecx+4]
        je public_4f3447
        nop 
        public_4f31f0 : nop
        cmp byte ptr ds : [eax+0x44], bl
        jne public_4f3447
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        cmp eax, ecx
        jne public_4f32af
        mov ecx, dword ptr ds : [edx+8]
        mov dl, byte ptr ds : [ecx+0x44]
        test dl, dl
        jne public_4f325b
        mov byte ptr ds : [ecx+0x44], bl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x44], 0
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+8]
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_4f322f
        mov dword ptr ds : [esi+4], ecx
        public_4f322f : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_4f3242
        mov dword ptr ds : [esi+4], edx
        jmp public_4f3250
        public_4f3242 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_4f324d
        mov dword ptr ds : [esi], edx
        jmp public_4f3250
        public_4f324d : nop
        mov dword ptr ds : [esi+8], edx
        public_4f3250 : nop
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx+8]
        public_4f325b : nop
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x44], bl
        jne public_4f326e
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x44], bl
        je public_4f3319
        public_4f326e : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x44], bl
        jne public_4f334c
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ds : [edx+0x44], bl
        mov edx, dword ptr ds : [ecx]
        mov byte ptr ds : [ecx+0x44], 0
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_4f3295
        mov dword ptr ds : [esi+4], ecx
        public_4f3295 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_4f3331
        mov dword ptr ds : [esi+4], edx
        jmp public_4f3340
        public_4f32af : nop
        mov dl, byte ptr ds : [ecx+0x44]
        test dl, dl
        jne public_4f3302
        mov byte ptr ds : [ecx+0x44], bl
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x44], 0
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_4f32d5
        mov dword ptr ds : [esi+4], ecx
        public_4f32d5 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_4f32e8
        mov dword ptr ds : [esi+4], edx
        jmp public_4f32f7
        public_4f32e8 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_4f32f5
        mov dword ptr ds : [esi+8], edx
        jmp public_4f32f7
        public_4f32f5 : nop
        mov dword ptr ds : [esi], edx
        public_4f32f7 : nop
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        public_4f3302 : nop
        mov edx, dword ptr ds : [ecx+8]
        cmp byte ptr ds : [edx+0x44], bl
        jne public_4f33a8
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x44], bl
        jne public_4f33a8
        public_4f3319 : nop
        mov byte ptr ds : [ecx+0x44], 0
        mov ecx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_4f31f0
        jmp public_4f3447
        public_4f3331 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_4f333e
        mov dword ptr ds : [esi+8], edx
        jmp public_4f3340
        public_4f333e : nop
        mov dword ptr ds : [esi], edx
        public_4f3340 : nop
        mov dword ptr ds : [edx+8], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx+8]
        public_4f334c : nop
        mov edx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [edx+0x44]
        mov byte ptr ds : [ecx+0x44], dl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x44], bl
        mov ecx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [ecx+0x44], bl
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+8]
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_4f3376
        mov dword ptr ds : [esi+4], ecx
        public_4f3376 : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_4f338e
        mov dword ptr ds : [esi+4], edx
        mov dword ptr ds : [edx], ecx
        jmp public_4f3444
        public_4f338e : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_4f339e
        mov dword ptr ds : [esi], edx
        mov dword ptr ds : [edx], ecx
        jmp public_4f3444
        public_4f339e : nop
        mov dword ptr ds : [esi+8], edx
        mov dword ptr ds : [edx], ecx
        jmp public_4f3444
        public_4f33a8 : nop
        mov edx, dword ptr ds : [ecx]
        cmp byte ptr ds : [edx+0x44], bl
        jne public_4f33f6
        mov edx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [edx+0x44], bl
        mov edx, dword ptr ds : [ecx+8]
        mov byte ptr ds : [ecx+0x44], 0
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], esi
        mov esi, dword ptr ds : [edx]
        cmp esi, dword ptr ds : [edi+8]
        je public_4f33cb
        mov dword ptr ds : [esi+4], ecx
        public_4f33cb : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_4f33de
        mov dword ptr ds : [esi+4], edx
        jmp public_4f33ec
        public_4f33de : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi]
        jne public_4f33e9
        mov dword ptr ds : [esi], edx
        jmp public_4f33ec
        public_4f33e9 : nop
        mov dword ptr ds : [esi+8], edx
        public_4f33ec : nop
        mov dword ptr ds : [edx], ecx
        mov dword ptr ds : [ecx+4], edx
        mov ecx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [ecx]
        public_4f33f6 : nop
        mov edx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [edx+0x44]
        mov byte ptr ds : [ecx+0x44], dl
        mov edx, dword ptr ds : [eax+4]
        mov byte ptr ds : [edx+0x44], bl
        mov ecx, dword ptr ds : [ecx]
        mov byte ptr ds : [ecx+0x44], bl
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx]
        mov esi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], esi
        mov esi, dword ptr ds : [edx+8]
        cmp esi, dword ptr ds : [edi+8]
        je public_4f341f
        mov dword ptr ds : [esi+4], ecx
        public_4f341f : nop
        mov esi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], esi
        mov esi, dword ptr ds : [edi+4]
        cmp ecx, dword ptr ds : [esi+4]
        jne public_4f3432
        mov dword ptr ds : [esi+4], edx
        jmp public_4f3441
        public_4f3432 : nop
        mov esi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [esi+8]
        jne public_4f343f
        mov dword ptr ds : [esi+8], edx
        jmp public_4f3441
        public_4f343f : nop
        mov dword ptr ds : [esi], edx
        public_4f3441 : nop
        mov dword ptr ds : [edx+8], ecx
        public_4f3444 : nop
        mov dword ptr ds : [ecx+4], edx
        public_4f3447 : nop
        mov esi, dword ptr ss : [esp+0x10]
        mov byte ptr ds : [eax+0x44], bl
        public_4f344e : nop
        lea ecx, ds:[esi+0xC]
        call public_4eee10
        push esi
        call public_5b7e1d
        mov eax, dword ptr ds : [edi+0x10]
        mov edx, dword ptr ss : [esp+0x20]
        add esp, 4
        dec eax
        mov dword ptr ds : [edi+0x10], eax
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [eax], edx
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x4f30a0)
    }
}

#undef public_4f30c4
#undef public_4f30e2
#undef public_4f30ed
#undef public_4f30f6
#undef public_4f3101
#undef public_4f311d
#undef public_4f3134
#undef public_4f3141
#undef public_4f314c
#undef public_4f314f
#undef public_4f3167
#undef public_4f3172
#undef public_4f3175
#undef public_4f318a
#undef public_4f3195
#undef public_4f31a0
#undef public_4f31a3
#undef public_4f31b7
#undef public_4f31c3
#undef public_4f31cf
#undef public_4f31d2
#undef public_4f31f0
#undef public_4f322f
#undef public_4f3242
#undef public_4f324d
#undef public_4f3250
#undef public_4f325b
#undef public_4f326e
#undef public_4f3295
#undef public_4f32af
#undef public_4f32d5
#undef public_4f32e8
#undef public_4f32f5
#undef public_4f32f7
#undef public_4f3302
#undef public_4f3319
#undef public_4f3331
#undef public_4f333e
#undef public_4f3340
#undef public_4f334c
#undef public_4f3376
#undef public_4f338e
#undef public_4f339e
#undef public_4f33a8
#undef public_4f33cb
#undef public_4f33de
#undef public_4f33e9
#undef public_4f33ec
#undef public_4f33f6
#undef public_4f341f
#undef public_4f3432
#undef public_4f343f
#undef public_4f3441
#undef public_4f3444
#undef public_4f3447
#undef public_4f344e
