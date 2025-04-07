#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d85500);
CLANG_FORWARD_PROC_SYMBOL(public_6d8f510);
CLANG_FORWARD_PROC_SYMBOL(public_6d91580);
CLANG_FORWARD_PROC_SYMBOL(public_6da2a80);
CLANG_FORWARD_PROC_SYMBOL(public_6da4020);
CLANG_FORWARD_PROC_SYMBOL(public_6db1f8a);
CLANG_FORWARD_PROC_SYMBOL(public_6db20de);

#define public_6da4047 _public_6da4047
#define public_6da4077 _public_6da4077
#define public_6da40b1 _public_6da40b1
#define public_6da40de _public_6da40de
#define public_6da410b _public_6da410b
#define public_6da4138 _public_6da4138
#define public_6da416a _public_6da416a
#define public_6da41b6 _public_6da41b6
#define public_6da41ee _public_6da41ee
#define public_6da4202 _public_6da4202
#define public_6da4230 _public_6da4230
#define public_6da4260 _public_6da4260
#define public_6da428b _public_6da428b
#define public_6da42b2 _public_6da42b2
#define public_6da42d9 _public_6da42d9
#define public_6da4352 _public_6da4352
#define public_6da43ba _public_6da43ba
#define public_6da43d3 _public_6da43d3
#define public_6da43ec _public_6da43ec
#define public_6da4421 _public_6da4421
#define public_6da4467 _public_6da4467
#define public_6da449b _public_6da449b
#define public_6da44b7 _public_6da44b7
#define public_6da44d0 _public_6da44d0
#define public_6da44df _public_6da44df
#define public_6da44f8 _public_6da44f8
#define public_6da4506 _public_6da4506
#define public_6da451d _public_6da451d
#define public_6da4543 _public_6da4543
#define public_6da455b _public_6da455b
#define public_6da459d _public_6da459d
#define public_6da45b8 _public_6da45b8
#define public_6da45cc _public_6da45cc
#define public_6da45e7 _public_6da45e7
#define public_6da4610 _public_6da4610
#define public_6da4661 _public_6da4661
#define public_6da4695 _public_6da4695
#define public_6da46a6 _public_6da46a6
#define public_6da46f0 _public_6da46f0
#define public_6da46fc _public_6da46fc
#define public_6da4703 _public_6da4703
#define public_6da4713 _public_6da4713
#define public_6da4727 _public_6da4727
#define public_6da473e _public_6da473e
#define public_6da4764 _public_6da4764
#define public_6da477c _public_6da477c
#define public_6da47b6 _public_6da47b6
#define public_6da47f0 _public_6da47f0
#define public_6da482c _public_6da482c
#define public_6da4853 _public_6da4853
#define public_6da4883 _public_6da4883
#define public_6da48ab _public_6da48ab
#define public_6da48d1 _public_6da48d1
#define public_6da48f1 _public_6da48f1
#define public_6da492e _public_6da492e
#define public_6da4960 _public_6da4960
#define public_6da498b _public_6da498b
#define public_6da498d _public_6da498d
#define public_6da4997 _public_6da4997

PROC_DECLARE(0x6da4020, internal_6da4020, public_6da4020);
extern "C" NAKED register_t __cdecl internal_6da4020()
{
    __asm
    {
        sub esp, 0x18
        push ebx
        push ebp
        mov ebp, ecx
        mov edx, dword ptr ss : [ebp+0x10]
        mov ecx, dword ptr ss : [ebp+0x14]
        push esi
        mov esi, 4
        add edx, esi
        mov eax, edx
        cmp eax, ecx
        push edi
        mov dword ptr ss : [ebp+0x10], edx
        mov edi, 0x17
        jbe public_6da4047
        mov dword ptr ss : [ebp+0x1C], edi
        public_6da4047 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        xor ebx, ebx
        cmp eax, ebx
        jne public_6da498d
        mov eax, dword ptr ss : [ebp+0x18]
        mov ecx, dword ptr ds : [eax]
        add eax, 4
        mov dword ptr ss : [ebp+0x18], eax
        mov dword ptr ss : [ebp+0x20], ecx
        mov edx, dword ptr ss : [ebp+0x10]
        mov ecx, dword ptr ss : [ebp+0x14]
        add edx, 2
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ss : [ebp+0x10], edx
        jbe public_6da4077
        mov dword ptr ss : [ebp+0x1C], edi
        public_6da4077 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        cmp eax, ebx
        jne public_6da498d
        mov eax, dword ptr ss : [ebp+0x18]
        xor ecx, ecx
        mov cx, word ptr ds : [eax]
        add eax, 2
        mov dword ptr ss : [ebp+0x18], eax
        push ecx
        call dword ptr ds : [public_6db3000]
        mov dword ptr ss : [ebp+0x24], eax
        mov edx, dword ptr ss : [ebp+0x10]
        mov ecx, dword ptr ss : [ebp+0x14]
        add edx, esi
        mov eax, edx
        add esp, 4
        cmp eax, ecx
        mov dword ptr ss : [ebp+0x10], edx
        jbe public_6da40b1
        mov dword ptr ss : [ebp+0x1C], edi
        public_6da40b1 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        cmp eax, ebx
        jne public_6da498d
        mov eax, dword ptr ss : [ebp+0x18]
        mov edx, dword ptr ds : [eax]
        add eax, 4
        mov dword ptr ss : [ebp+0x28], edx
        mov dword ptr ss : [ebp+0x18], eax
        mov edx, dword ptr ss : [ebp+0x10]
        mov ecx, dword ptr ss : [ebp+0x14]
        add edx, esi
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ss : [ebp+0x10], edx
        jbe public_6da40de
        mov dword ptr ss : [ebp+0x1C], edi
        public_6da40de : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        cmp eax, ebx
        jne public_6da498d
        mov eax, dword ptr ss : [ebp+0x18]
        mov ecx, dword ptr ds : [eax]
        add eax, 4
        mov dword ptr ss : [ebp+0x18], eax
        mov dword ptr ss : [ebp+0x2C], ecx
        mov edx, dword ptr ss : [ebp+0x10]
        mov ecx, dword ptr ss : [ebp+0x14]
        add edx, esi
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ss : [ebp+0x10], edx
        jbe public_6da410b
        mov dword ptr ss : [ebp+0x1C], edi
        public_6da410b : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        cmp eax, ebx
        jne public_6da498d
        mov eax, dword ptr ss : [ebp+0x18]
        mov edx, dword ptr ds : [eax]
        add eax, 4
        mov dword ptr ss : [ebp+0x34], edx
        mov dword ptr ss : [ebp+0x18], eax
        mov edx, dword ptr ss : [ebp+0x10]
        mov ecx, dword ptr ss : [ebp+0x14]
        add edx, esi
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ss : [ebp+0x10], edx
        jbe public_6da4138
        mov dword ptr ss : [ebp+0x1C], edi
        public_6da4138 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        cmp eax, ebx
        jne public_6da498d
        mov eax, dword ptr ss : [ebp+0x18]
        mov ecx, dword ptr ds : [eax]
        add eax, 4
        mov dword ptr ss : [ebp+0x18], eax
        mov dword ptr ss : [ebp+0x30], ecx
        mov dword ptr ss : [ebp+0x38], ebx
        mov dword ptr ss : [ebp+0x3C], ebx
        mov edx, dword ptr ss : [ebp+0x10]
        mov ecx, dword ptr ss : [ebp+0x14]
        inc edx
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ss : [ebp+0x10], edx
        jbe public_6da416a
        mov dword ptr ss : [ebp+0x1C], edi
        public_6da416a : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        cmp eax, ebx
        jne public_6da498d
        mov eax, dword ptr ss : [ebp+0x18]
        mov cl, byte ptr ds : [eax]
        inc eax
        mov dword ptr ss : [ebp+0x18], eax
        xor eax, eax
        mov al, cl
        cmp eax, ebx
        mov dword ptr ss : [ebp+0x40], eax
        jbe public_6da41ee
        lea edx, ds:[eax*4]
        push edx
        call public_6db1f8a
        mov dword ptr ss : [ebp+0x44], eax
        mov eax, dword ptr ss : [ebp+0x40]
        mov edx, dword ptr ss : [ebp+0x10]
        mov ecx, dword ptr ss : [ebp+0x14]
        shl eax, 2
        add edx, eax
        mov eax, edx
        add esp, 4
        cmp eax, ecx
        mov dword ptr ss : [ebp+0x10], edx
        jbe public_6da41b6
        mov dword ptr ss : [ebp+0x1C], edi
        public_6da41b6 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        cmp eax, ebx
        jne public_6da498d
        mov eax, dword ptr ss : [ebp+0x40]
        mov edx, dword ptr ss : [ebp+0x18]
        mov edi, dword ptr ss : [ebp+0x44]
        shl eax, 2
        mov ecx, eax
        mov ebx, ecx
        shr ecx, 2
        mov esi, edx
        rep movsd
        mov ecx, ebx
        and ecx, 3
        rep movsb
        add edx, eax
        mov dword ptr ss : [ebp+0x18], edx
        mov esi, 4
        mov edi, 0x17
        public_6da41ee : nop
        mov edx, dword ptr ss : [ebp+0x10]
        mov ecx, dword ptr ss : [ebp+0x14]
        add edx, esi
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ss : [ebp+0x10], edx
        jbe public_6da4202
        mov dword ptr ss : [ebp+0x1C], edi
        public_6da4202 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6da498d
        mov eax, dword ptr ss : [ebp+0x18]
        mov ecx, dword ptr ds : [eax]
        add eax, 4
        mov dword ptr ss : [ebp+0x18], eax
        mov dword ptr ss : [ebp+0x48], ecx
        mov edx, dword ptr ss : [ebp+0x10]
        mov ecx, dword ptr ss : [ebp+0x14]
        add edx, 0xC
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ss : [ebp+0x10], edx
        jbe public_6da4230
        mov dword ptr ss : [ebp+0x1C], edi
        public_6da4230 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6da498d
        mov esi, dword ptr ss : [ebp+0x18]
        push esi
        lea ecx, ss:[ebp+0x4C]
        call public_6d8f510
        add esi, 0xC
        mov dword ptr ss : [ebp+0x18], esi
        mov edx, dword ptr ss : [ebp+0x10]
        mov ecx, dword ptr ss : [ebp+0x14]
        inc edx
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ss : [ebp+0x10], edx
        jbe public_6da4260
        mov dword ptr ss : [ebp+0x1C], edi
        public_6da4260 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6da498d
        mov eax, dword ptr ss : [ebp+0x18]
        mov dl, byte ptr ds : [eax]
        inc eax
        mov dword ptr ss : [ebp+0x18], eax
        mov ecx, dword ptr ss : [ebp+0x14]
        mov byte ptr ss : [esp+0x13], dl
        mov edx, dword ptr ss : [ebp+0x10]
        inc edx
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ss : [ebp+0x10], edx
        jbe public_6da428b
        mov dword ptr ss : [ebp+0x1C], edi
        public_6da428b : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6da498d
        mov eax, dword ptr ss : [ebp+0x18]
        mov bl, byte ptr ds : [eax]
        inc eax
        mov dword ptr ss : [ebp+0x18], eax
        mov edx, dword ptr ss : [ebp+0x10]
        mov ecx, dword ptr ss : [ebp+0x14]
        inc edx
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ss : [ebp+0x10], edx
        jbe public_6da42b2
        mov dword ptr ss : [ebp+0x1C], edi
        public_6da42b2 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6da498d
        mov eax, dword ptr ss : [ebp+0x18]
        mov dl, byte ptr ds : [eax]
        inc eax
        mov dword ptr ss : [ebp+0x18], eax
        mov esi, dword ptr ss : [ebp+0x10]
        mov ecx, dword ptr ss : [ebp+0x14]
        inc esi
        mov eax, esi
        cmp eax, ecx
        mov dword ptr ss : [ebp+0x10], esi
        jbe public_6da42d9
        mov dword ptr ss : [ebp+0x1C], edi
        public_6da42d9 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6da498d
        mov eax, dword ptr ss : [ebp+0x18]
        mov cl, byte ptr ds : [eax]
        inc eax
        mov dword ptr ss : [ebp+0x18], eax
        movsx eax, byte ptr ss : [esp+0x13]
        mov dword ptr ss : [esp+0x14], eax
        movsx eax, bl
        fild dword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp+0x14], eax
        fmul qword ptr ds : [public_6db3fe0]
        movsx edx, dl
        movsx eax, cl
        fstp dword ptr ss : [ebp+0x5C]
        fild dword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp+0x14], edx
        fmul qword ptr ds : [public_6db3fe0]
        fstp dword ptr ss : [ebp+0x60]
        fild dword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp+0x14], eax
        fmul qword ptr ds : [public_6db3fe0]
        fstp dword ptr ss : [ebp+0x64]
        fild dword ptr ss : [esp+0x14]
        fmul qword ptr ds : [public_6db3fe0]
        fstp dword ptr ss : [ebp+0x58]
        mov edx, dword ptr ss : [ebp+0x10]
        mov ecx, dword ptr ss : [ebp+0x14]
        inc edx
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ss : [ebp+0x10], edx
        jbe public_6da4352
        mov dword ptr ss : [ebp+0x1C], edi
        public_6da4352 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6da498d
        mov eax, dword ptr ss : [ebp+0x18]
        mov bl, byte ptr ds : [eax]
        mov ecx, dword ptr ss : [ebp+0x24]
        inc eax
        push ecx
        mov dword ptr ss : [ebp+0x18], eax
        call dword ptr ds : [public_6db3110]
        xor edx, edx
        mov dl, bl
        mov dword ptr ss : [esp+0x18], eax
        fild dword ptr ss : [esp+0x18]
        add esp, 4
        mov dword ptr ss : [esp+0x14], edx
        fild dword ptr ss : [esp+0x14]
        fmul qword ptr ds : [public_6db60f8]
        fmulp 
        call public_6db20de
        mov dword ptr ss : [ebp+0x68], eax
        call dword ptr ds : [public_6db305c]
        test al, al
        je public_6da43d3
        mov edx, dword ptr ss : [ebp+0x10]
        mov ecx, dword ptr ss : [ebp+0x14]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ss : [ebp+0x10], edx
        jbe public_6da43ba
        mov dword ptr ss : [ebp+0x1C], 0x17
        public_6da43ba : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6da498d
        mov eax, dword ptr ss : [ebp+0x18]
        mov ecx, dword ptr ds : [eax]
        add eax, 4
        mov dword ptr ss : [ebp+0x6C], ecx
        mov dword ptr ss : [ebp+0x18], eax
        public_6da43d3 : nop
        mov edx, dword ptr ss : [ebp+0x10]
        mov ecx, dword ptr ss : [ebp+0x14]
        add edx, 2
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ss : [ebp+0x10], edx
        jbe public_6da43ec
        mov dword ptr ss : [ebp+0x1C], 0x17
        public_6da43ec : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6da498d
        mov eax, dword ptr ss : [ebp+0x18]
        xor ecx, ecx
        mov cx, word ptr ds : [eax]
        add eax, 2
        test cx, cx
        mov dword ptr ss : [ebp+0x18], eax
        mov dword ptr ss : [esp+0x14], 0
        mov dword ptr ss : [esp+0x24], ecx
        jbe public_6da4727
        mov esi, 2
        xor edi, edi
        public_6da4421 : nop
        push 0x18
        call public_6db1f8a
        mov ebx, eax
        add esp, 4
        cmp ebx, edi
        je public_6da4713
        mov dword ptr ds : [ebx], edi
        mov dword ptr ds : [ebx+4], edi
        mov dword ptr ds : [ebx+8], edi
        mov word ptr ds : [ebx+0xC], di
        mov byte ptr ds : [ebx+0xE], 0
        mov byte ptr ds : [ebx+0xF], 0
        mov word ptr ds : [ebx+0x10], di
        mov dword ptr ds : [ebx+0x14], edi
        mov edx, dword ptr ss : [ebp+0x10]
        mov ecx, dword ptr ss : [ebp+0x14]
        inc edx
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ss : [ebp+0x10], edx
        jbe public_6da4467
        mov dword ptr ss : [ebp+0x1C], 0x17
        public_6da4467 : nop
        cmp dword ptr ss : [ebp+0x1C], edi
        jne public_6da4997
        mov eax, dword ptr ss : [ebp+0x18]
        mov dl, byte ptr ds : [eax]
        inc eax
        mov dword ptr ss : [ebp+0x18], eax
        mov al, dl
        shr al, 1
        mov cl, dl
        and al, 1
        and cl, 1
        test dl, dl
        mov byte ptr ss : [esp+0x13], dl
        mov byte ptr ds : [ebx+0xF], al
        mov byte ptr ds : [ebx+0xE], cl
        jns public_6da449b
        mov dword ptr ds : [ebx+4], 1
        jmp public_6da44f8
        public_6da449b : nop
        test dl, 4
        mov ecx, dword ptr ss : [ebp+0x14]
        mov eax, dword ptr ss : [ebp+0x10]
        je public_6da44d0
        add eax, 4
        cmp eax, ecx
        mov dword ptr ss : [ebp+0x10], eax
        jbe public_6da44b7
        mov dword ptr ss : [ebp+0x1C], 0x17
        public_6da44b7 : nop
        cmp dword ptr ss : [ebp+0x1C], edi
        jne public_6da4997
        mov eax, dword ptr ss : [ebp+0x18]
        mov ecx, dword ptr ds : [eax]
        add eax, 4
        mov dword ptr ds : [ebx+4], ecx
        mov dword ptr ss : [ebp+0x18], eax
        jmp public_6da44f8
        public_6da44d0 : nop
        inc eax
        cmp eax, ecx
        mov dword ptr ss : [ebp+0x10], eax
        jbe public_6da44df
        mov dword ptr ss : [ebp+0x1C], 0x17
        public_6da44df : nop
        cmp dword ptr ss : [ebp+0x1C], edi
        jne public_6da4997
        mov eax, dword ptr ss : [ebp+0x18]
        mov cl, byte ptr ds : [eax]
        inc eax
        mov dword ptr ss : [ebp+0x18], eax
        xor eax, eax
        mov al, cl
        mov dword ptr ds : [ebx+4], eax
        public_6da44f8 : nop
        test dl, 0x40
        je public_6da4506
        mov dword ptr ds : [ebx+8], 0x3F800000
        jmp public_6da4543
        public_6da4506 : nop
        mov edx, dword ptr ss : [ebp+0x10]
        mov ecx, dword ptr ss : [ebp+0x14]
        inc edx
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ss : [ebp+0x10], edx
        jbe public_6da451d
        mov dword ptr ss : [ebp+0x1C], 0x17
        public_6da451d : nop
        cmp dword ptr ss : [ebp+0x1C], edi
        jne public_6da4997
        mov eax, dword ptr ss : [ebp+0x18]
        mov cl, byte ptr ds : [eax]
        movzx ecx, cl
        mov dword ptr ss : [esp+0x20], ecx
        inc eax
        mov dword ptr ss : [ebp+0x18], eax
        fild dword ptr ss : [esp+0x20]
        fmul qword ptr ds : [public_6db60f8]
        fstp dword ptr ds : [ebx+8]
        public_6da4543 : nop
        mov edx, dword ptr ss : [ebp+0x10]
        mov ecx, dword ptr ss : [ebp+0x14]
        add edx, esi
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ss : [ebp+0x10], edx
        jbe public_6da455b
        mov dword ptr ss : [ebp+0x1C], 0x17
        public_6da455b : nop
        cmp dword ptr ss : [ebp+0x1C], edi
        jne public_6da4997
        mov eax, dword ptr ss : [ebp+0x18]
        xor ecx, ecx
        mov cx, word ptr ds : [eax]
        add eax, 2
        mov dword ptr ss : [ebp+0x18], eax
        push ecx
        call dword ptr ds : [public_6db3000]
        mov dl, byte ptr ss : [esp+0x17]
        add esp, 4
        test dl, 8
        mov dword ptr ds : [ebx], eax
        mov ecx, dword ptr ss : [ebp+0x14]
        je public_6da45b8
        mov eax, dword ptr ss : [ebp+0x10]
        add eax, esi
        cmp eax, ecx
        mov dword ptr ss : [ebp+0x10], eax
        jbe public_6da459d
        mov dword ptr ss : [ebp+0x1C], 0x17
        public_6da459d : nop
        cmp dword ptr ss : [ebp+0x1C], edi
        jne public_6da4997
        mov eax, dword ptr ss : [ebp+0x18]
        mov cx, word ptr ds : [eax]
        add eax, 2
        mov word ptr ds : [ebx+0xC], cx
        mov dword ptr ss : [ebp+0x18], eax
        jmp public_6da45e7
        public_6da45b8 : nop
        mov esi, dword ptr ss : [ebp+0x10]
        inc esi
        mov eax, esi
        cmp eax, ecx
        mov dword ptr ss : [ebp+0x10], esi
        jbe public_6da45cc
        mov dword ptr ss : [ebp+0x1C], 0x17
        public_6da45cc : nop
        cmp dword ptr ss : [ebp+0x1C], edi
        jne public_6da4997
        mov eax, dword ptr ss : [ebp+0x18]
        mov cl, byte ptr ds : [eax]
        inc eax
        mov dword ptr ss : [ebp+0x18], eax
        xor ax, ax
        mov al, cl
        mov word ptr ds : [ebx+0xC], ax
        public_6da45e7 : nop
        test dl, 0x20
        jne public_6da46fc
        mov ecx, dword ptr ss : [ebp+0x14]
        test dl, 0x10
        mov edx, dword ptr ss : [ebp+0x10]
        je public_6da4695
        inc edx
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ss : [ebp+0x10], edx
        jbe public_6da4610
        mov dword ptr ss : [ebp+0x1C], 0x17
        public_6da4610 : nop
        cmp dword ptr ss : [ebp+0x1C], edi
        jne public_6da4997
        mov eax, dword ptr ss : [ebp+0x18]
        mov cl, byte ptr ds : [eax]
        inc eax
        mov dword ptr ss : [ebp+0x18], eax
        xor ax, ax
        mov al, cl
        cmp ax, di
        mov word ptr ds : [ebx+0x10], ax
        je public_6da4703
        xor ecx, ecx
        mov cx, ax
        push ecx
        call public_6db1f8a
        movzx edx, word ptr ds : [ebx+0x10]
        mov dword ptr ds : [ebx+0x14], eax
        mov esi, dword ptr ss : [ebp+0x10]
        mov ecx, dword ptr ss : [ebp+0x14]
        add esi, edx
        mov eax, esi
        add esp, 4
        cmp eax, ecx
        mov dword ptr ss : [ebp+0x10], esi
        jbe public_6da4661
        mov dword ptr ss : [ebp+0x1C], 0x17
        public_6da4661 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6da4997
        movzx eax, word ptr ds : [ebx+0x10]
        mov esi, dword ptr ss : [ebp+0x18]
        mov edi, dword ptr ds : [ebx+0x14]
        mov ecx, eax
        mov edx, ecx
        shr ecx, 2
        mov dword ptr ss : [esp+0x20], esi
        rep movsd
        mov ecx, edx
        and ecx, 3
        rep movsb
        mov ecx, dword ptr ss : [esp+0x20]
        add ecx, eax
        mov dword ptr ss : [ebp+0x18], ecx
        jmp public_6da4703
        public_6da4695 : nop
        inc edx
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ss : [ebp+0x10], edx
        jbe public_6da46a6
        mov dword ptr ss : [ebp+0x1C], 0x17
        public_6da46a6 : nop
        cmp dword ptr ss : [ebp+0x1C], edi
        jne public_6da4997
        mov eax, dword ptr ss : [ebp+0x18]
        mov cl, byte ptr ds : [eax]
        xor edx, edx
        mov dl, cl
        inc eax
        mov dword ptr ss : [ebp+0x18], eax
        push edx
        call public_6da2a80
        mov esi, eax
        add esp, 4
        cmp esi, edi
        je public_6da4703
        xor eax, eax
        or ecx, 0xFFFFFFFF
        mov edi, esi
        repne scasb
        not ecx
        mov eax, ecx
        mov word ptr ds : [ebx+0x10], ax
        movzx eax, ax
        push eax
        call public_6db1f8a
        add esp, 4
        mov dword ptr ds : [ebx+0x14], eax
        mov ecx, eax
        lea ecx, ds:[ecx]
        public_6da46f0 : nop
        mov al, byte ptr ds : [esi]
        inc esi
        mov byte ptr ds : [ecx], al
        inc ecx
        test al, al
        jne public_6da46f0
        jmp public_6da4703
        public_6da46fc : nop
        mov word ptr ds : [ebx+0x10], di
        mov dword ptr ds : [ebx+0x14], edi
        public_6da4703 : nop
        push ebx
        lea ecx, ss:[ebp+0x70]
        call public_6d91580
        xor edi, edi
        mov esi, 2
        public_6da4713 : nop
        mov eax, dword ptr ss : [esp+0x14]
        inc eax
        cmp ax, word ptr ss : [esp+0x24]
        mov dword ptr ss : [esp+0x14], eax
        jb public_6da4421
        public_6da4727 : nop
        mov edx, dword ptr ss : [ebp+0x10]
        mov ecx, dword ptr ss : [ebp+0x14]
        inc edx
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ss : [ebp+0x10], edx
        jbe public_6da473e
        mov dword ptr ss : [ebp+0x1C], 0x17
        public_6da473e : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6da498d
        mov eax, dword ptr ss : [ebp+0x18]
        mov cl, byte ptr ds : [eax]
        inc eax
        mov dword ptr ss : [ebp+0x18], eax
        xor eax, eax
        mov al, cl
        xor ebx, ebx
        test eax, eax
        mov dword ptr ss : [esp+0x20], eax
        jbe public_6da482c
        public_6da4764 : nop
        mov esi, dword ptr ss : [ebp+0x78]
        mov edi, dword ptr ds : [esi+4]
        push 0x10
        call public_6db1f8a
        add esp, 4
        test edi, edi
        mov dword ptr ds : [eax], esi
        jne public_6da477c
        mov edi, eax
        public_6da477c : nop
        mov dword ptr ds : [eax+4], edi
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        lea edx, ss:[esp+0x14]
        mov dword ptr ds : [ecx], eax
        push edx
        add eax, 8
        push eax
        call public_6d85500
        mov esi, dword ptr ss : [ebp+0x7C]
        add esp, 8
        inc esi
        mov dword ptr ss : [ebp+0x7C], esi
        mov edx, dword ptr ss : [ebp+0x10]
        mov ecx, dword ptr ss : [ebp+0x14]
        inc edx
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ss : [ebp+0x10], edx
        jbe public_6da47b6
        mov dword ptr ss : [ebp+0x1C], 0x17
        public_6da47b6 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6da4997
        mov eax, dword ptr ss : [ebp+0x18]
        mov cl, byte ptr ds : [eax]
        inc eax
        mov dword ptr ss : [ebp+0x18], eax
        xor ax, ax
        mov al, cl
        mov ecx, dword ptr ss : [ebp+0x78]
        mov edx, dword ptr ds : [ecx+4]
        mov word ptr ds : [edx+8], ax
        mov edx, dword ptr ss : [ebp+0x10]
        mov ecx, dword ptr ss : [ebp+0x14]
        inc edx
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ss : [ebp+0x10], edx
        jbe public_6da47f0
        mov dword ptr ss : [ebp+0x1C], 0x17
        public_6da47f0 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6da4997
        mov eax, dword ptr ss : [ebp+0x18]
        mov cl, byte ptr ds : [eax]
        inc eax
        mov dword ptr ss : [ebp+0x18], eax
        xor eax, eax
        mov al, cl
        mov ecx, dword ptr ss : [ebp+0x78]
        mov edx, dword ptr ds : [ecx+4]
        inc ebx
        mov dword ptr ss : [esp+0x24], eax
        fild dword ptr ss : [esp+0x24]
        mov eax, dword ptr ss : [esp+0x20]
        cmp ebx, eax
        fmul qword ptr ds : [public_6db60f8]
        fstp dword ptr ds : [edx+0xC]
        jb public_6da4764
        public_6da482c : nop
        call dword ptr ds : [public_6db305c]
        test al, al
        je public_6da498b
        mov edx, dword ptr ss : [ebp+0x10]
        mov ecx, dword ptr ss : [ebp+0x14]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ss : [ebp+0x10], edx
        jbe public_6da4853
        mov dword ptr ss : [ebp+0x1C], 0x17
        public_6da4853 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        xor ebx, ebx
        cmp eax, ebx
        jne public_6da498d
        mov eax, dword ptr ss : [ebp+0x18]
        mov ecx, dword ptr ds : [eax]
        add eax, 4
        cmp ecx, ebx
        mov dword ptr ss : [esp+0x24], ecx
        mov dword ptr ss : [ebp+0x18], eax
        jbe public_6da498b
        mov dword ptr ss : [esp+0x18], 0xBF800000
        mov dword ptr ss : [esp+0x1C], ebx
        public_6da4883 : nop
        mov eax, dword ptr ds : [public_6db3100]
        mov cx, word ptr ds : [eax]
        mov esi, dword ptr ss : [ebp+0x84]
        mov edi, dword ptr ds : [esi+4]
        push 0x14
        mov word ptr ss : [esp+0x18], cx
        call public_6db1f8a
        add esp, 4
        test edi, edi
        mov dword ptr ds : [eax], esi
        jne public_6da48ab
        mov edi, eax
        public_6da48ab : nop
        mov dword ptr ds : [eax+4], edi
        mov dword ptr ds : [esi+4], eax
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [edx], eax
        add eax, 8
        test eax, eax
        je public_6da48d1
        mov ecx, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [eax+4], edx
        mov dword ptr ds : [eax+8], ecx
        public_6da48d1 : nop
        inc dword ptr ss : [ebp+0x88]
        mov edx, dword ptr ss : [ebp+0x10]
        mov ecx, dword ptr ss : [ebp+0x14]
        add edx, 2
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ss : [ebp+0x10], edx
        mov edx, 0x17
        jbe public_6da48f1
        mov dword ptr ss : [ebp+0x1C], edx
        public_6da48f1 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6da4997
        mov eax, dword ptr ss : [ebp+0x18]
        mov si, word ptr ds : [eax]
        mov ecx, dword ptr ss : [ebp+0x84]
        mov ecx, dword ptr ds : [ecx+4]
        mov word ptr ds : [ecx+8], si
        add eax, 2
        mov dword ptr ss : [ebp+0x18], eax
        mov edi, dword ptr ss : [ebp+0x10]
        mov esi, dword ptr ss : [ebp+0x14]
        mov ecx, 4
        add edi, ecx
        mov eax, edi
        cmp eax, esi
        mov dword ptr ss : [ebp+0x10], edi
        jbe public_6da492e
        mov dword ptr ss : [ebp+0x1C], edx
        public_6da492e : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6da4997
        mov eax, dword ptr ss : [ebp+0x18]
        mov esi, dword ptr ss : [ebp+0x84]
        mov esi, dword ptr ds : [esi+4]
        mov edi, dword ptr ds : [eax]
        mov dword ptr ds : [esi+0x10], edi
        add eax, 4
        mov dword ptr ss : [ebp+0x18], eax
        mov esi, dword ptr ss : [ebp+0x10]
        add esi, ecx
        mov ecx, dword ptr ss : [ebp+0x14]
        mov eax, esi
        cmp eax, ecx
        mov dword ptr ss : [ebp+0x10], esi
        jbe public_6da4960
        mov dword ptr ss : [ebp+0x1C], edx
        public_6da4960 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6da4997
        mov eax, dword ptr ss : [ebp+0x18]
        mov edx, dword ptr ss : [ebp+0x84]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [eax]
        add eax, 4
        mov dword ptr ds : [ecx+0xC], edx
        mov dword ptr ss : [ebp+0x18], eax
        mov eax, dword ptr ss : [esp+0x24]
        inc ebx
        cmp ebx, eax
        jb public_6da4883
        public_6da498b : nop
        xor eax, eax
        public_6da498d : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x18
        ret 0xC
        public_6da4997 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x18
        ret 0xC
        UNREACHABLE_TRAP(0x6da4020)
    }
}

#undef public_6da4047
#undef public_6da4077
#undef public_6da40b1
#undef public_6da40de
#undef public_6da410b
#undef public_6da4138
#undef public_6da416a
#undef public_6da41b6
#undef public_6da41ee
#undef public_6da4202
#undef public_6da4230
#undef public_6da4260
#undef public_6da428b
#undef public_6da42b2
#undef public_6da42d9
#undef public_6da4352
#undef public_6da43ba
#undef public_6da43d3
#undef public_6da43ec
#undef public_6da4421
#undef public_6da4467
#undef public_6da449b
#undef public_6da44b7
#undef public_6da44d0
#undef public_6da44df
#undef public_6da44f8
#undef public_6da4506
#undef public_6da451d
#undef public_6da4543
#undef public_6da455b
#undef public_6da459d
#undef public_6da45b8
#undef public_6da45cc
#undef public_6da45e7
#undef public_6da4610
#undef public_6da4661
#undef public_6da4695
#undef public_6da46a6
#undef public_6da46f0
#undef public_6da46fc
#undef public_6da4703
#undef public_6da4713
#undef public_6da4727
#undef public_6da473e
#undef public_6da4764
#undef public_6da477c
#undef public_6da47b6
#undef public_6da47f0
#undef public_6da482c
#undef public_6da4853
#undef public_6da4883
#undef public_6da48ab
#undef public_6da48d1
#undef public_6da48f1
#undef public_6da492e
#undef public_6da4960
#undef public_6da498b
#undef public_6da498d
#undef public_6da4997
