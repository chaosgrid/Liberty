#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6bd59e0);
CLANG_FORWARD_PROC_SYMBOL(public_6bda4c0);
CLANG_FORWARD_PROC_SYMBOL(public_6bdcb60);
CLANG_FORWARD_PROC_SYMBOL(public_6bed7f0);
CLANG_FORWARD_PROC_SYMBOL(public_6c08f40);
CLANG_FORWARD_PROC_SYMBOL(public_6c09d26);
CLANG_FORWARD_PROC_SYMBOL(public_6c09ee8);

#define public_6c08f67 _public_6c08f67
#define public_6c08f97 _public_6c08f97
#define public_6c08fd1 _public_6c08fd1
#define public_6c08ffe _public_6c08ffe
#define public_6c0902b _public_6c0902b
#define public_6c09058 _public_6c09058
#define public_6c0908a _public_6c0908a
#define public_6c090d6 _public_6c090d6
#define public_6c0910e _public_6c0910e
#define public_6c09122 _public_6c09122
#define public_6c09150 _public_6c09150
#define public_6c09180 _public_6c09180
#define public_6c091ab _public_6c091ab
#define public_6c091d2 _public_6c091d2
#define public_6c091f9 _public_6c091f9
#define public_6c09272 _public_6c09272
#define public_6c092da _public_6c092da
#define public_6c092f3 _public_6c092f3
#define public_6c0930c _public_6c0930c
#define public_6c09341 _public_6c09341
#define public_6c09387 _public_6c09387
#define public_6c093bb _public_6c093bb
#define public_6c093d7 _public_6c093d7
#define public_6c093f0 _public_6c093f0
#define public_6c093ff _public_6c093ff
#define public_6c09418 _public_6c09418
#define public_6c09426 _public_6c09426
#define public_6c0943d _public_6c0943d
#define public_6c09463 _public_6c09463
#define public_6c0947b _public_6c0947b
#define public_6c094bd _public_6c094bd
#define public_6c094d8 _public_6c094d8
#define public_6c094ec _public_6c094ec
#define public_6c09507 _public_6c09507
#define public_6c09530 _public_6c09530
#define public_6c09581 _public_6c09581
#define public_6c095b5 _public_6c095b5
#define public_6c095c6 _public_6c095c6
#define public_6c09610 _public_6c09610
#define public_6c0961c _public_6c0961c
#define public_6c09623 _public_6c09623
#define public_6c09633 _public_6c09633
#define public_6c09647 _public_6c09647
#define public_6c0965e _public_6c0965e
#define public_6c09684 _public_6c09684
#define public_6c0969c _public_6c0969c
#define public_6c096d6 _public_6c096d6
#define public_6c09710 _public_6c09710
#define public_6c0974c _public_6c0974c
#define public_6c09773 _public_6c09773
#define public_6c097a3 _public_6c097a3
#define public_6c097cb _public_6c097cb
#define public_6c097f1 _public_6c097f1
#define public_6c09811 _public_6c09811
#define public_6c0984e _public_6c0984e
#define public_6c09880 _public_6c09880
#define public_6c098ab _public_6c098ab
#define public_6c098ad _public_6c098ad
#define public_6c098b7 _public_6c098b7

PROC_DECLARE(0x6c08f40, internal_6c08f40, public_6c08f40);
extern "C" NAKED register_t __cdecl internal_6c08f40()
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
        jbe public_6c08f67
        mov dword ptr ss : [ebp+0x1C], edi
        public_6c08f67 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        xor ebx, ebx
        cmp eax, ebx
        jne public_6c098ad
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
        jbe public_6c08f97
        mov dword ptr ss : [ebp+0x1C], edi
        public_6c08f97 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        cmp eax, ebx
        jne public_6c098ad
        mov eax, dword ptr ss : [ebp+0x18]
        xor ecx, ecx
        mov cx, word ptr ds : [eax]
        add eax, 2
        mov dword ptr ss : [ebp+0x18], eax
        push ecx
        call dword ptr ds : [public_6c0b000]
        mov dword ptr ss : [ebp+0x24], eax
        mov edx, dword ptr ss : [ebp+0x10]
        mov ecx, dword ptr ss : [ebp+0x14]
        add edx, esi
        mov eax, edx
        add esp, 4
        cmp eax, ecx
        mov dword ptr ss : [ebp+0x10], edx
        jbe public_6c08fd1
        mov dword ptr ss : [ebp+0x1C], edi
        public_6c08fd1 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        cmp eax, ebx
        jne public_6c098ad
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
        jbe public_6c08ffe
        mov dword ptr ss : [ebp+0x1C], edi
        public_6c08ffe : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        cmp eax, ebx
        jne public_6c098ad
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
        jbe public_6c0902b
        mov dword ptr ss : [ebp+0x1C], edi
        public_6c0902b : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        cmp eax, ebx
        jne public_6c098ad
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
        jbe public_6c09058
        mov dword ptr ss : [ebp+0x1C], edi
        public_6c09058 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        cmp eax, ebx
        jne public_6c098ad
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
        jbe public_6c0908a
        mov dword ptr ss : [ebp+0x1C], edi
        public_6c0908a : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        cmp eax, ebx
        jne public_6c098ad
        mov eax, dword ptr ss : [ebp+0x18]
        mov cl, byte ptr ds : [eax]
        inc eax
        mov dword ptr ss : [ebp+0x18], eax
        xor eax, eax
        mov al, cl
        cmp eax, ebx
        mov dword ptr ss : [ebp+0x40], eax
        jbe public_6c0910e
        lea edx, ds:[eax*4]
        push edx
        call public_6c09d26
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
        jbe public_6c090d6
        mov dword ptr ss : [ebp+0x1C], edi
        public_6c090d6 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        cmp eax, ebx
        jne public_6c098ad
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
        public_6c0910e : nop
        mov edx, dword ptr ss : [ebp+0x10]
        mov ecx, dword ptr ss : [ebp+0x14]
        add edx, esi
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ss : [ebp+0x10], edx
        jbe public_6c09122
        mov dword ptr ss : [ebp+0x1C], edi
        public_6c09122 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6c098ad
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
        jbe public_6c09150
        mov dword ptr ss : [ebp+0x1C], edi
        public_6c09150 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6c098ad
        mov esi, dword ptr ss : [ebp+0x18]
        push esi
        lea ecx, ss:[ebp+0x4C]
        call public_6bda4c0
        add esi, 0xC
        mov dword ptr ss : [ebp+0x18], esi
        mov edx, dword ptr ss : [ebp+0x10]
        mov ecx, dword ptr ss : [ebp+0x14]
        inc edx
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ss : [ebp+0x10], edx
        jbe public_6c09180
        mov dword ptr ss : [ebp+0x1C], edi
        public_6c09180 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6c098ad
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
        jbe public_6c091ab
        mov dword ptr ss : [ebp+0x1C], edi
        public_6c091ab : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6c098ad
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
        jbe public_6c091d2
        mov dword ptr ss : [ebp+0x1C], edi
        public_6c091d2 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6c098ad
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
        jbe public_6c091f9
        mov dword ptr ss : [ebp+0x1C], edi
        public_6c091f9 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6c098ad
        mov eax, dword ptr ss : [ebp+0x18]
        mov cl, byte ptr ds : [eax]
        inc eax
        mov dword ptr ss : [ebp+0x18], eax
        movsx eax, byte ptr ss : [esp+0x13]
        mov dword ptr ss : [esp+0x14], eax
        movsx eax, bl
        fild dword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp+0x14], eax
        fmul qword ptr ds : [public_6c0df48]
        movsx edx, dl
        movsx eax, cl
        fstp dword ptr ss : [ebp+0x5C]
        fild dword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp+0x14], edx
        fmul qword ptr ds : [public_6c0df48]
        fstp dword ptr ss : [ebp+0x60]
        fild dword ptr ss : [esp+0x14]
        mov dword ptr ss : [esp+0x14], eax
        fmul qword ptr ds : [public_6c0df48]
        fstp dword ptr ss : [ebp+0x64]
        fild dword ptr ss : [esp+0x14]
        fmul qword ptr ds : [public_6c0df48]
        fstp dword ptr ss : [ebp+0x58]
        mov edx, dword ptr ss : [ebp+0x10]
        mov ecx, dword ptr ss : [ebp+0x14]
        inc edx
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ss : [ebp+0x10], edx
        jbe public_6c09272
        mov dword ptr ss : [ebp+0x1C], edi
        public_6c09272 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6c098ad
        mov eax, dword ptr ss : [ebp+0x18]
        mov bl, byte ptr ds : [eax]
        mov ecx, dword ptr ss : [ebp+0x24]
        inc eax
        push ecx
        mov dword ptr ss : [ebp+0x18], eax
        call dword ptr ds : [public_6c0b024]
        xor edx, edx
        mov dl, bl
        mov dword ptr ss : [esp+0x18], eax
        fild dword ptr ss : [esp+0x18]
        add esp, 4
        mov dword ptr ss : [esp+0x14], edx
        fild dword ptr ss : [esp+0x14]
        fmul qword ptr ds : [public_6c0e660]
        fmulp 
        call public_6c09ee8
        mov dword ptr ss : [ebp+0x68], eax
        call dword ptr ds : [public_6c0b080]
        test al, al
        je public_6c092f3
        mov edx, dword ptr ss : [ebp+0x10]
        mov ecx, dword ptr ss : [ebp+0x14]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ss : [ebp+0x10], edx
        jbe public_6c092da
        mov dword ptr ss : [ebp+0x1C], 0x17
        public_6c092da : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6c098ad
        mov eax, dword ptr ss : [ebp+0x18]
        mov ecx, dword ptr ds : [eax]
        add eax, 4
        mov dword ptr ss : [ebp+0x6C], ecx
        mov dword ptr ss : [ebp+0x18], eax
        public_6c092f3 : nop
        mov edx, dword ptr ss : [ebp+0x10]
        mov ecx, dword ptr ss : [ebp+0x14]
        add edx, 2
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ss : [ebp+0x10], edx
        jbe public_6c0930c
        mov dword ptr ss : [ebp+0x1C], 0x17
        public_6c0930c : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6c098ad
        mov eax, dword ptr ss : [ebp+0x18]
        xor ecx, ecx
        mov cx, word ptr ds : [eax]
        add eax, 2
        test cx, cx
        mov dword ptr ss : [ebp+0x18], eax
        mov dword ptr ss : [esp+0x14], 0
        mov dword ptr ss : [esp+0x24], ecx
        jbe public_6c09647
        mov esi, 2
        xor edi, edi
        public_6c09341 : nop
        push 0x18
        call public_6c09d26
        mov ebx, eax
        add esp, 4
        cmp ebx, edi
        je public_6c09633
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
        jbe public_6c09387
        mov dword ptr ss : [ebp+0x1C], 0x17
        public_6c09387 : nop
        cmp dword ptr ss : [ebp+0x1C], edi
        jne public_6c098b7
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
        jns public_6c093bb
        mov dword ptr ds : [ebx+4], 1
        jmp public_6c09418
        public_6c093bb : nop
        test dl, 4
        mov ecx, dword ptr ss : [ebp+0x14]
        mov eax, dword ptr ss : [ebp+0x10]
        je public_6c093f0
        add eax, 4
        cmp eax, ecx
        mov dword ptr ss : [ebp+0x10], eax
        jbe public_6c093d7
        mov dword ptr ss : [ebp+0x1C], 0x17
        public_6c093d7 : nop
        cmp dword ptr ss : [ebp+0x1C], edi
        jne public_6c098b7
        mov eax, dword ptr ss : [ebp+0x18]
        mov ecx, dword ptr ds : [eax]
        add eax, 4
        mov dword ptr ds : [ebx+4], ecx
        mov dword ptr ss : [ebp+0x18], eax
        jmp public_6c09418
        public_6c093f0 : nop
        inc eax
        cmp eax, ecx
        mov dword ptr ss : [ebp+0x10], eax
        jbe public_6c093ff
        mov dword ptr ss : [ebp+0x1C], 0x17
        public_6c093ff : nop
        cmp dword ptr ss : [ebp+0x1C], edi
        jne public_6c098b7
        mov eax, dword ptr ss : [ebp+0x18]
        mov cl, byte ptr ds : [eax]
        inc eax
        mov dword ptr ss : [ebp+0x18], eax
        xor eax, eax
        mov al, cl
        mov dword ptr ds : [ebx+4], eax
        public_6c09418 : nop
        test dl, 0x40
        je public_6c09426
        mov dword ptr ds : [ebx+8], 0x3F800000
        jmp public_6c09463
        public_6c09426 : nop
        mov edx, dword ptr ss : [ebp+0x10]
        mov ecx, dword ptr ss : [ebp+0x14]
        inc edx
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ss : [ebp+0x10], edx
        jbe public_6c0943d
        mov dword ptr ss : [ebp+0x1C], 0x17
        public_6c0943d : nop
        cmp dword ptr ss : [ebp+0x1C], edi
        jne public_6c098b7
        mov eax, dword ptr ss : [ebp+0x18]
        mov cl, byte ptr ds : [eax]
        movzx ecx, cl
        mov dword ptr ss : [esp+0x20], ecx
        inc eax
        mov dword ptr ss : [ebp+0x18], eax
        fild dword ptr ss : [esp+0x20]
        fmul qword ptr ds : [public_6c0e660]
        fstp dword ptr ds : [ebx+8]
        public_6c09463 : nop
        mov edx, dword ptr ss : [ebp+0x10]
        mov ecx, dword ptr ss : [ebp+0x14]
        add edx, esi
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ss : [ebp+0x10], edx
        jbe public_6c0947b
        mov dword ptr ss : [ebp+0x1C], 0x17
        public_6c0947b : nop
        cmp dword ptr ss : [ebp+0x1C], edi
        jne public_6c098b7
        mov eax, dword ptr ss : [ebp+0x18]
        xor ecx, ecx
        mov cx, word ptr ds : [eax]
        add eax, 2
        mov dword ptr ss : [ebp+0x18], eax
        push ecx
        call dword ptr ds : [public_6c0b000]
        mov dl, byte ptr ss : [esp+0x17]
        add esp, 4
        test dl, 8
        mov dword ptr ds : [ebx], eax
        mov ecx, dword ptr ss : [ebp+0x14]
        je public_6c094d8
        mov eax, dword ptr ss : [ebp+0x10]
        add eax, esi
        cmp eax, ecx
        mov dword ptr ss : [ebp+0x10], eax
        jbe public_6c094bd
        mov dword ptr ss : [ebp+0x1C], 0x17
        public_6c094bd : nop
        cmp dword ptr ss : [ebp+0x1C], edi
        jne public_6c098b7
        mov eax, dword ptr ss : [ebp+0x18]
        mov cx, word ptr ds : [eax]
        add eax, 2
        mov word ptr ds : [ebx+0xC], cx
        mov dword ptr ss : [ebp+0x18], eax
        jmp public_6c09507
        public_6c094d8 : nop
        mov esi, dword ptr ss : [ebp+0x10]
        inc esi
        mov eax, esi
        cmp eax, ecx
        mov dword ptr ss : [ebp+0x10], esi
        jbe public_6c094ec
        mov dword ptr ss : [ebp+0x1C], 0x17
        public_6c094ec : nop
        cmp dword ptr ss : [ebp+0x1C], edi
        jne public_6c098b7
        mov eax, dword ptr ss : [ebp+0x18]
        mov cl, byte ptr ds : [eax]
        inc eax
        mov dword ptr ss : [ebp+0x18], eax
        xor ax, ax
        mov al, cl
        mov word ptr ds : [ebx+0xC], ax
        public_6c09507 : nop
        test dl, 0x20
        jne public_6c0961c
        mov ecx, dword ptr ss : [ebp+0x14]
        test dl, 0x10
        mov edx, dword ptr ss : [ebp+0x10]
        je public_6c095b5
        inc edx
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ss : [ebp+0x10], edx
        jbe public_6c09530
        mov dword ptr ss : [ebp+0x1C], 0x17
        public_6c09530 : nop
        cmp dword ptr ss : [ebp+0x1C], edi
        jne public_6c098b7
        mov eax, dword ptr ss : [ebp+0x18]
        mov cl, byte ptr ds : [eax]
        inc eax
        mov dword ptr ss : [ebp+0x18], eax
        xor ax, ax
        mov al, cl
        cmp ax, di
        mov word ptr ds : [ebx+0x10], ax
        je public_6c09623
        xor ecx, ecx
        mov cx, ax
        push ecx
        call public_6c09d26
        movzx edx, word ptr ds : [ebx+0x10]
        mov dword ptr ds : [ebx+0x14], eax
        mov esi, dword ptr ss : [ebp+0x10]
        mov ecx, dword ptr ss : [ebp+0x14]
        add esi, edx
        mov eax, esi
        add esp, 4
        cmp eax, ecx
        mov dword ptr ss : [ebp+0x10], esi
        jbe public_6c09581
        mov dword ptr ss : [ebp+0x1C], 0x17
        public_6c09581 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6c098b7
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
        jmp public_6c09623
        public_6c095b5 : nop
        inc edx
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ss : [ebp+0x10], edx
        jbe public_6c095c6
        mov dword ptr ss : [ebp+0x1C], 0x17
        public_6c095c6 : nop
        cmp dword ptr ss : [ebp+0x1C], edi
        jne public_6c098b7
        mov eax, dword ptr ss : [ebp+0x18]
        mov cl, byte ptr ds : [eax]
        xor edx, edx
        mov dl, cl
        inc eax
        mov dword ptr ss : [ebp+0x18], eax
        push edx
        call public_6bed7f0
        mov esi, eax
        add esp, 4
        cmp esi, edi
        je public_6c09623
        xor eax, eax
        or ecx, 0xFFFFFFFF
        mov edi, esi
        repne scasb
        not ecx
        mov eax, ecx
        mov word ptr ds : [ebx+0x10], ax
        movzx eax, ax
        push eax
        call public_6c09d26
        add esp, 4
        mov dword ptr ds : [ebx+0x14], eax
        mov ecx, eax
        lea ecx, ds:[ecx]
        public_6c09610 : nop
        mov al, byte ptr ds : [esi]
        inc esi
        mov byte ptr ds : [ecx], al
        inc ecx
        test al, al
        jne public_6c09610
        jmp public_6c09623
        public_6c0961c : nop
        mov word ptr ds : [ebx+0x10], di
        mov dword ptr ds : [ebx+0x14], edi
        public_6c09623 : nop
        push ebx
        lea ecx, ss:[ebp+0x70]
        call public_6bdcb60
        xor edi, edi
        mov esi, 2
        public_6c09633 : nop
        mov eax, dword ptr ss : [esp+0x14]
        inc eax
        cmp ax, word ptr ss : [esp+0x24]
        mov dword ptr ss : [esp+0x14], eax
        jb public_6c09341
        public_6c09647 : nop
        mov edx, dword ptr ss : [ebp+0x10]
        mov ecx, dword ptr ss : [ebp+0x14]
        inc edx
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ss : [ebp+0x10], edx
        jbe public_6c0965e
        mov dword ptr ss : [ebp+0x1C], 0x17
        public_6c0965e : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6c098ad
        mov eax, dword ptr ss : [ebp+0x18]
        mov cl, byte ptr ds : [eax]
        inc eax
        mov dword ptr ss : [ebp+0x18], eax
        xor eax, eax
        mov al, cl
        xor ebx, ebx
        test eax, eax
        mov dword ptr ss : [esp+0x20], eax
        jbe public_6c0974c
        public_6c09684 : nop
        mov esi, dword ptr ss : [ebp+0x78]
        mov edi, dword ptr ds : [esi+4]
        push 0x10
        call public_6c09d26
        add esp, 4
        test edi, edi
        mov dword ptr ds : [eax], esi
        jne public_6c0969c
        mov edi, eax
        public_6c0969c : nop
        mov dword ptr ds : [eax+4], edi
        mov dword ptr ds : [esi+4], eax
        mov ecx, dword ptr ds : [eax+4]
        lea edx, ss:[esp+0x14]
        mov dword ptr ds : [ecx], eax
        push edx
        add eax, 8
        push eax
        call public_6bd59e0
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
        jbe public_6c096d6
        mov dword ptr ss : [ebp+0x1C], 0x17
        public_6c096d6 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6c098b7
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
        jbe public_6c09710
        mov dword ptr ss : [ebp+0x1C], 0x17
        public_6c09710 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6c098b7
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
        fmul qword ptr ds : [public_6c0e660]
        fstp dword ptr ds : [edx+0xC]
        jb public_6c09684
        public_6c0974c : nop
        call dword ptr ds : [public_6c0b080]
        test al, al
        je public_6c098ab
        mov edx, dword ptr ss : [ebp+0x10]
        mov ecx, dword ptr ss : [ebp+0x14]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ss : [ebp+0x10], edx
        jbe public_6c09773
        mov dword ptr ss : [ebp+0x1C], 0x17
        public_6c09773 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        xor ebx, ebx
        cmp eax, ebx
        jne public_6c098ad
        mov eax, dword ptr ss : [ebp+0x18]
        mov ecx, dword ptr ds : [eax]
        add eax, 4
        cmp ecx, ebx
        mov dword ptr ss : [esp+0x24], ecx
        mov dword ptr ss : [ebp+0x18], eax
        jbe public_6c098ab
        mov dword ptr ss : [esp+0x18], 0xBF800000
        mov dword ptr ss : [esp+0x1C], ebx
        public_6c097a3 : nop
        mov eax, dword ptr ds : [public_6c0b014]
        mov cx, word ptr ds : [eax]
        mov esi, dword ptr ss : [ebp+0x84]
        mov edi, dword ptr ds : [esi+4]
        push 0x14
        mov word ptr ss : [esp+0x18], cx
        call public_6c09d26
        add esp, 4
        test edi, edi
        mov dword ptr ds : [eax], esi
        jne public_6c097cb
        mov edi, eax
        public_6c097cb : nop
        mov dword ptr ds : [eax+4], edi
        mov dword ptr ds : [esi+4], eax
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [edx], eax
        add eax, 8
        test eax, eax
        je public_6c097f1
        mov ecx, dword ptr ss : [esp+0x14]
        mov edx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [eax], ecx
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [eax+4], edx
        mov dword ptr ds : [eax+8], ecx
        public_6c097f1 : nop
        inc dword ptr ss : [ebp+0x88]
        mov edx, dword ptr ss : [ebp+0x10]
        mov ecx, dword ptr ss : [ebp+0x14]
        add edx, 2
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ss : [ebp+0x10], edx
        mov edx, 0x17
        jbe public_6c09811
        mov dword ptr ss : [ebp+0x1C], edx
        public_6c09811 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6c098b7
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
        jbe public_6c0984e
        mov dword ptr ss : [ebp+0x1C], edx
        public_6c0984e : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6c098b7
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
        jbe public_6c09880
        mov dword ptr ss : [ebp+0x1C], edx
        public_6c09880 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6c098b7
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
        jb public_6c097a3
        public_6c098ab : nop
        xor eax, eax
        public_6c098ad : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x18
        ret 0xC
        public_6c098b7 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x18
        ret 0xC
        UNREACHABLE_TRAP(0x6c08f40)
    }
}

#undef public_6c08f67
#undef public_6c08f97
#undef public_6c08fd1
#undef public_6c08ffe
#undef public_6c0902b
#undef public_6c09058
#undef public_6c0908a
#undef public_6c090d6
#undef public_6c0910e
#undef public_6c09122
#undef public_6c09150
#undef public_6c09180
#undef public_6c091ab
#undef public_6c091d2
#undef public_6c091f9
#undef public_6c09272
#undef public_6c092da
#undef public_6c092f3
#undef public_6c0930c
#undef public_6c09341
#undef public_6c09387
#undef public_6c093bb
#undef public_6c093d7
#undef public_6c093f0
#undef public_6c093ff
#undef public_6c09418
#undef public_6c09426
#undef public_6c0943d
#undef public_6c09463
#undef public_6c0947b
#undef public_6c094bd
#undef public_6c094d8
#undef public_6c094ec
#undef public_6c09507
#undef public_6c09530
#undef public_6c09581
#undef public_6c095b5
#undef public_6c095c6
#undef public_6c09610
#undef public_6c0961c
#undef public_6c09623
#undef public_6c09633
#undef public_6c09647
#undef public_6c0965e
#undef public_6c09684
#undef public_6c0969c
#undef public_6c096d6
#undef public_6c09710
#undef public_6c0974c
#undef public_6c09773
#undef public_6c097a3
#undef public_6c097cb
#undef public_6c097f1
#undef public_6c09811
#undef public_6c0984e
#undef public_6c09880
#undef public_6c098ab
#undef public_6c098ad
#undef public_6c098b7
