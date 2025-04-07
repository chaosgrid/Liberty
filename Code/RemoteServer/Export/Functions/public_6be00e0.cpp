#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6bdc830);
CLANG_FORWARD_PROC_SYMBOL(public_6bebe50);
CLANG_FORWARD_PROC_SYMBOL(public_6bebea0);
CLANG_FORWARD_PROC_SYMBOL(public_6bec3b0);

#define public_6be0133 _public_6be0133
#define public_6be014b _public_6be014b
#define public_6be0161 _public_6be0161
#define public_6be0183 _public_6be0183
#define public_6be01b9 _public_6be01b9
#define public_6be01f1 _public_6be01f1
#define public_6be023a _public_6be023a
#define public_6be0267 _public_6be0267
#define public_6be0297 _public_6be0297
#define public_6be02c9 _public_6be02c9
#define public_6be02d9 _public_6be02d9
#define public_6be0319 _public_6be0319
#define public_6be0355 _public_6be0355
#define public_6be0365 _public_6be0365
#define public_6be039f _public_6be039f
#define public_6be03d0 _public_6be03d0
#define public_6be03fd _public_6be03fd
#define public_6be042a _public_6be042a
#define public_6be0457 _public_6be0457
#define public_6be0484 _public_6be0484
#define public_6be04b1 _public_6be04b1
#define public_6be04de _public_6be04de
#define public_6be050b _public_6be050b
#define public_6be0538 _public_6be0538
#define public_6be0565 _public_6be0565
#define public_6be0592 _public_6be0592
#define public_6be05c0 _public_6be05c0
#define public_6be05ed _public_6be05ed
#define public_6be061a _public_6be061a
#define public_6be0653 _public_6be0653
#define public_6be0679 _public_6be0679
#define public_6be06a9 _public_6be06a9
#define public_6be06d8 _public_6be06d8
#define public_6be0708 _public_6be0708
#define public_6be0738 _public_6be0738
#define public_6be0773 _public_6be0773
#define public_6be07b7 _public_6be07b7
#define public_6be07c1 _public_6be07c1
#define public_6be07d3 _public_6be07d3
#define public_6be07f3 _public_6be07f3
#define public_6be0819 _public_6be0819
#define public_6be0849 _public_6be0849
#define public_6be0878 _public_6be0878
#define public_6be08a8 _public_6be08a8
#define public_6be08d8 _public_6be08d8
#define public_6be0913 _public_6be0913
#define public_6be0955 _public_6be0955
#define public_6be0966 _public_6be0966
#define public_6be0978 _public_6be0978
#define public_6be098c _public_6be098c
#define public_6be09d2 _public_6be09d2
#define public_6be09f1 _public_6be09f1
#define public_6be0a1f _public_6be0a1f
#define public_6be0a4a _public_6be0a4a
#define public_6be0a73 _public_6be0a73
#define public_6be0a9d _public_6be0a9d
#define public_6be0ac3 _public_6be0ac3
#define public_6be0aeb _public_6be0aeb
#define public_6be0b1a _public_6be0b1a
#define public_6be0b67 _public_6be0b67
#define public_6be0b84 _public_6be0b84
#define public_6be0bb0 _public_6be0bb0
#define public_6be0bc5 _public_6be0bc5
#define public_6be0bf5 _public_6be0bf5
#define public_6be0c10 _public_6be0c10
#define public_6be0c29 _public_6be0c29
#define public_6be0c40 _public_6be0c40
#define public_6be0c56 _public_6be0c56
#define public_6be0c78 _public_6be0c78
#define public_6be0c87 _public_6be0c87
#define public_6be0cb8 _public_6be0cb8
#define public_6be0cc4 _public_6be0cc4

PROC_DECLARE(0x6be00e0, internal_6be00e0, public_6be00e0);
extern "C" NAKED register_t __cdecl internal_6be00e0()
{
    __asm
    {
        sub esp, 0x10
        mov eax, dword ptr ss : [esp+0x18]
        push ebx
        push ebp
        push esi
        mov esi, ecx
        mov ecx, dword ptr ss : [esp+0x20]
        lea ebx, ds:[esi+0x10]
        mov dword ptr ds : [ebx+4], eax
        mov edx, dword ptr ds : [ecx]
        push edi
        mov dword ptr ds : [ebx+8], edx
        mov dword ptr ds : [ebx], 0
        mov dword ptr ds : [ebx+0xC], 0
        mov eax, dword ptr ds : [esi+0x14]
        push ebx
        push eax
        lea ebp, ds:[esi+0x18]
        push ebp
        mov ecx, esi
        mov dword ptr ss : [esp+0x1C], esi
        call public_6bebe50
        test eax, eax
        mov dword ptr ds : [esi+0x1C], eax
        je public_6be0133
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        add esp, 0x10
        ret 0xC
        public_6be0133 : nop
        mov edi, dword ptr ds : [ebx]
        mov edx, dword ptr ds : [ebx+4]
        mov cl, byte ptr ds : [esi+0x2C]
        inc edi
        mov eax, edi
        cmp eax, edx
        mov dword ptr ds : [ebx], edi
        jbe public_6be014b
        mov dword ptr ds : [ebx+0xC], 0x16
        public_6be014b : nop
        mov eax, dword ptr ds : [esi+0x1C]
        test eax, eax
        je public_6be0161
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        add esp, 0x10
        ret 0xC
        public_6be0161 : nop
        mov eax, dword ptr ss : [ebp]
        mov byte ptr ds : [eax], cl
        inc eax
        test cl, cl
        mov dword ptr ss : [ebp], eax
        jbe public_6be0c29
        mov eax, dword ptr ds : [esi+0x28]
        mov ecx, dword ptr ds : [eax]
        cmp ecx, eax
        mov dword ptr ss : [esp+0x14], ecx
        je public_6be0c29
        public_6be0183 : nop
        mov ecx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [ecx+8]
        test eax, eax
        mov dword ptr ss : [esp+0x28], eax
        je public_6be0c10
        mov esi, dword ptr ds : [ebx]
        mov edx, dword ptr ds : [ebx+4]
        mov edi, eax
        or ecx, 0xFFFFFFFF
        xor eax, eax
        repne scasb
        add esi, 2
        not ecx
        mov eax, esi
        dec ecx
        cmp eax, edx
        mov dword ptr ds : [ebx], esi
        jbe public_6be01b9
        mov dword ptr ds : [ebx+0xC], 0x16
        public_6be01b9 : nop
        mov edx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [edx+0x1C]
        test eax, eax
        jne public_6be0c78
        mov eax, dword ptr ss : [ebp]
        mov word ptr ds : [eax], cx
        add eax, 2
        mov dword ptr ss : [ebp], eax
        mov edi, dword ptr ds : [ebx]
        mov esi, dword ptr ds : [ebx+4]
        movzx ecx, cx
        add edi, ecx
        mov eax, edi
        cmp eax, esi
        mov dword ptr ss : [esp+0x18], ecx
        mov dword ptr ds : [ebx], edi
        jbe public_6be01f1
        mov dword ptr ds : [ebx+0xC], 0x16
        public_6be01f1 : nop
        mov eax, dword ptr ds : [edx+0x1C]
        test eax, eax
        jne public_6be0c78
        mov edi, dword ptr ss : [ebp]
        mov edx, dword ptr ss : [esp+0x28]
        mov eax, ecx
        shr ecx, 2
        mov dword ptr ss : [esp+0x24], edi
        mov esi, edx
        rep movsd
        mov ecx, eax
        mov eax, dword ptr ss : [esp+0x18]
        and ecx, 3
        rep movsb
        mov ecx, dword ptr ss : [esp+0x24]
        add ecx, eax
        mov dword ptr ss : [ebp], ecx
        mov esi, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [ebx+4]
        inc esi
        mov eax, esi
        cmp eax, ecx
        mov dword ptr ds : [ebx], esi
        mov eax, 0x16
        jbe public_6be023a
        mov dword ptr ds : [ebx+0xC], eax
        public_6be023a : nop
        mov edi, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [edi+0x1C]
        test ecx, ecx
        jne public_6be0cc4
        mov esi, dword ptr ss : [ebp]
        mov cl, byte ptr ds : [edx+0x200]
        mov byte ptr ds : [esi], cl
        inc esi
        mov dword ptr ss : [ebp], esi
        mov ecx, dword ptr ds : [ebx]
        mov esi, dword ptr ds : [ebx+4]
        inc ecx
        cmp ecx, esi
        mov dword ptr ds : [ebx], ecx
        jbe public_6be0267
        mov dword ptr ds : [ebx+0xC], eax
        public_6be0267 : nop
        mov ecx, dword ptr ds : [edi+0x1C]
        test ecx, ecx
        jne public_6be0cc4
        mov esi, dword ptr ss : [ebp]
        mov cl, byte ptr ds : [edx+0x201]
        mov byte ptr ds : [esi], cl
        inc esi
        mov dword ptr ss : [ebp], esi
        mov ecx, dword ptr ds : [ebx]
        mov si, word ptr ds : [edx+0x20C]
        add ecx, 2
        cmp ecx, dword ptr ds : [ebx+4]
        mov dword ptr ds : [ebx], ecx
        jbe public_6be0297
        mov dword ptr ds : [ebx+0xC], eax
        public_6be0297 : nop
        mov ecx, dword ptr ds : [edi+0x1C]
        test ecx, ecx
        jne public_6be0cc4
        mov ecx, dword ptr ss : [ebp]
        mov word ptr ds : [ecx], si
        add ecx, 2
        mov dword ptr ss : [ebp], ecx
        mov edi, dword ptr ds : [ebx+4]
        xor ecx, ecx
        mov cx, si
        mov esi, dword ptr ds : [ebx]
        shl ecx, 1
        add esi, ecx
        cmp esi, edi
        mov dword ptr ss : [esp+0x18], ecx
        mov dword ptr ds : [ebx], esi
        jbe public_6be02c9
        mov dword ptr ds : [ebx+0xC], eax
        public_6be02c9 : nop
        mov esi, dword ptr ds : [edx+0x208]
        test esi, esi
        jne public_6be02d9
        mov esi, dword ptr ds : [public_6c0b17c]
        public_6be02d9 : nop
        mov edi, dword ptr ss : [ebp]
        mov eax, ecx
        shr ecx, 2
        mov dword ptr ss : [esp+0x24], edi
        rep movsd
        mov ecx, eax
        mov eax, dword ptr ss : [esp+0x18]
        and ecx, 3
        rep movsb
        mov ecx, dword ptr ss : [esp+0x24]
        add ecx, eax
        mov dword ptr ss : [ebp], ecx
        mov edi, dword ptr ds : [ebx]
        mov esi, dword ptr ds : [ebx+4]
        mov ax, word ptr ds : [edx+0x21C]
        add edi, 2
        mov ecx, edi
        cmp ecx, esi
        mov dword ptr ds : [ebx], edi
        jbe public_6be0319
        mov dword ptr ds : [ebx+0xC], 0x16
        public_6be0319 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov esi, dword ptr ds : [ecx+0x1C]
        test esi, esi
        jne public_6be0c78
        mov ecx, dword ptr ss : [ebp]
        mov word ptr ds : [ecx], ax
        add ecx, 2
        mov dword ptr ss : [ebp], ecx
        mov edi, dword ptr ds : [ebx]
        mov esi, dword ptr ds : [ebx+4]
        xor ecx, ecx
        mov cx, ax
        shl ecx, 1
        add edi, ecx
        mov eax, edi
        cmp eax, esi
        mov dword ptr ss : [esp+0x18], ecx
        mov dword ptr ds : [ebx], edi
        jbe public_6be0355
        mov dword ptr ds : [ebx+0xC], 0x16
        public_6be0355 : nop
        mov esi, dword ptr ds : [edx+0x218]
        test esi, esi
        jne public_6be0365
        mov esi, dword ptr ds : [public_6c0b17c]
        public_6be0365 : nop
        mov edi, dword ptr ss : [ebp]
        mov eax, ecx
        shr ecx, 2
        mov dword ptr ss : [esp+0x24], edi
        rep movsd
        mov ecx, eax
        mov eax, dword ptr ss : [esp+0x18]
        and ecx, 3
        rep movsb
        mov ecx, dword ptr ss : [esp+0x24]
        add ecx, eax
        mov dword ptr ss : [ebp], ecx
        mov esi, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [ebx+4]
        add esi, 4
        mov eax, esi
        cmp eax, ecx
        mov dword ptr ds : [ebx], esi
        mov eax, 0x16
        jbe public_6be039f
        mov dword ptr ds : [ebx+0xC], eax
        public_6be039f : nop
        mov esi, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [esi+0x1C]
        test ecx, ecx
        jne public_6be0cc4
        mov ecx, dword ptr ss : [ebp]
        mov edi, dword ptr ds : [edx+0x224]
        mov dword ptr ds : [ecx], edi
        add ecx, 4
        mov dword ptr ss : [ebp], ecx
        mov ecx, dword ptr ds : [ebx]
        mov edi, dword ptr ds : [ebx+4]
        add ecx, 4
        cmp ecx, edi
        mov dword ptr ds : [ebx], ecx
        jbe public_6be03d0
        mov dword ptr ds : [ebx+0xC], eax
        public_6be03d0 : nop
        mov ecx, dword ptr ds : [esi+0x1C]
        test ecx, ecx
        jne public_6be0cc4
        mov ecx, dword ptr ss : [ebp]
        mov edi, dword ptr ds : [edx+0x22C]
        mov dword ptr ds : [ecx], edi
        add ecx, 4
        mov dword ptr ss : [ebp], ecx
        mov ecx, dword ptr ds : [ebx]
        mov edi, dword ptr ds : [ebx+4]
        add ecx, 4
        cmp ecx, edi
        mov dword ptr ds : [ebx], ecx
        jbe public_6be03fd
        mov dword ptr ds : [ebx+0xC], eax
        public_6be03fd : nop
        mov ecx, dword ptr ds : [esi+0x1C]
        test ecx, ecx
        jne public_6be0cc4
        mov ecx, dword ptr ss : [ebp]
        mov edi, dword ptr ds : [edx+0x228]
        mov dword ptr ds : [ecx], edi
        add ecx, 4
        mov dword ptr ss : [ebp], ecx
        mov ecx, dword ptr ds : [ebx]
        mov edi, dword ptr ds : [ebx+4]
        add ecx, 4
        cmp ecx, edi
        mov dword ptr ds : [ebx], ecx
        jbe public_6be042a
        mov dword ptr ds : [ebx+0xC], eax
        public_6be042a : nop
        mov ecx, dword ptr ds : [esi+0x1C]
        test ecx, ecx
        jne public_6be0cc4
        mov ecx, dword ptr ss : [ebp]
        mov edi, dword ptr ds : [edx+0x230]
        mov dword ptr ds : [ecx], edi
        add ecx, 4
        mov dword ptr ss : [ebp], ecx
        mov ecx, dword ptr ds : [ebx]
        mov edi, dword ptr ds : [ebx+4]
        add ecx, 4
        cmp ecx, edi
        mov dword ptr ds : [ebx], ecx
        jbe public_6be0457
        mov dword ptr ds : [ebx+0xC], eax
        public_6be0457 : nop
        mov ecx, dword ptr ds : [esi+0x1C]
        test ecx, ecx
        jne public_6be0cc4
        mov ecx, dword ptr ss : [ebp]
        mov edi, dword ptr ds : [edx+0x234]
        mov dword ptr ds : [ecx], edi
        add ecx, 4
        mov dword ptr ss : [ebp], ecx
        mov ecx, dword ptr ds : [ebx]
        mov edi, dword ptr ds : [ebx+4]
        add ecx, 4
        cmp ecx, edi
        mov dword ptr ds : [ebx], ecx
        jbe public_6be0484
        mov dword ptr ds : [ebx+0xC], eax
        public_6be0484 : nop
        mov ecx, dword ptr ds : [esi+0x1C]
        test ecx, ecx
        jne public_6be0cc4
        mov ecx, dword ptr ss : [ebp]
        mov edi, dword ptr ds : [edx+0x238]
        mov dword ptr ds : [ecx], edi
        add ecx, 4
        mov dword ptr ss : [ebp], ecx
        mov ecx, dword ptr ds : [ebx]
        mov edi, dword ptr ds : [ebx+4]
        add ecx, 4
        cmp ecx, edi
        mov dword ptr ds : [ebx], ecx
        jbe public_6be04b1
        mov dword ptr ds : [ebx+0xC], eax
        public_6be04b1 : nop
        mov ecx, dword ptr ds : [esi+0x1C]
        test ecx, ecx
        jne public_6be0cc4
        mov ecx, dword ptr ss : [ebp]
        mov edi, dword ptr ds : [edx+0x23C]
        mov dword ptr ds : [ecx], edi
        add ecx, 4
        mov dword ptr ss : [ebp], ecx
        mov ecx, dword ptr ds : [ebx]
        mov edi, dword ptr ds : [ebx+4]
        add ecx, 4
        cmp ecx, edi
        mov dword ptr ds : [ebx], ecx
        jbe public_6be04de
        mov dword ptr ds : [ebx+0xC], eax
        public_6be04de : nop
        mov ecx, dword ptr ds : [esi+0x1C]
        test ecx, ecx
        jne public_6be0cc4
        mov ecx, dword ptr ss : [ebp]
        mov edi, dword ptr ds : [edx+0x240]
        mov dword ptr ds : [ecx], edi
        add ecx, 4
        mov dword ptr ss : [ebp], ecx
        mov ecx, dword ptr ds : [ebx]
        mov edi, dword ptr ds : [ebx+4]
        add ecx, 4
        cmp ecx, edi
        mov dword ptr ds : [ebx], ecx
        jbe public_6be050b
        mov dword ptr ds : [ebx+0xC], eax
        public_6be050b : nop
        mov ecx, dword ptr ds : [esi+0x1C]
        test ecx, ecx
        jne public_6be0cc4
        mov ecx, dword ptr ss : [ebp]
        mov edi, dword ptr ds : [edx+0x244]
        mov dword ptr ds : [ecx], edi
        add ecx, 4
        mov dword ptr ss : [ebp], ecx
        mov ecx, dword ptr ds : [ebx]
        mov edi, dword ptr ds : [ebx+4]
        add ecx, 4
        cmp ecx, edi
        mov dword ptr ds : [ebx], ecx
        jbe public_6be0538
        mov dword ptr ds : [ebx+0xC], eax
        public_6be0538 : nop
        mov ecx, dword ptr ds : [esi+0x1C]
        test ecx, ecx
        jne public_6be0cc4
        mov ecx, dword ptr ss : [ebp]
        mov edi, dword ptr ds : [edx+0x248]
        mov dword ptr ds : [ecx], edi
        add ecx, 4
        mov dword ptr ss : [ebp], ecx
        mov ecx, dword ptr ds : [ebx]
        mov edi, dword ptr ds : [ebx+4]
        add ecx, 4
        cmp ecx, edi
        mov dword ptr ds : [ebx], ecx
        jbe public_6be0565
        mov dword ptr ds : [ebx+0xC], eax
        public_6be0565 : nop
        mov ecx, dword ptr ds : [esi+0x1C]
        test ecx, ecx
        jne public_6be0cc4
        mov ecx, dword ptr ss : [ebp]
        mov edi, dword ptr ds : [edx+0x24C]
        mov dword ptr ds : [ecx], edi
        add ecx, 4
        mov dword ptr ss : [ebp], ecx
        mov ecx, dword ptr ds : [ebx]
        mov edi, dword ptr ds : [ebx+4]
        add ecx, 4
        cmp ecx, edi
        mov dword ptr ds : [ebx], ecx
        jbe public_6be0592
        mov dword ptr ds : [ebx+0xC], eax
        public_6be0592 : nop
        mov ecx, dword ptr ds : [esi+0x1C]
        test ecx, ecx
        jne public_6be0cc4
        fld dword ptr ds : [edx+0x250]
        mov ecx, dword ptr ss : [ebp]
        add ecx, 4
        fstp dword ptr ds : [ecx-4]
        mov dword ptr ss : [ebp], ecx
        mov ecx, dword ptr ds : [ebx]
        mov edi, dword ptr ds : [ebx+4]
        add ecx, 4
        cmp ecx, edi
        mov dword ptr ds : [ebx], ecx
        jbe public_6be05c0
        mov dword ptr ds : [ebx+0xC], eax
        public_6be05c0 : nop
        mov ecx, dword ptr ds : [esi+0x1C]
        test ecx, ecx
        jne public_6be0cc4
        mov ecx, dword ptr ss : [ebp]
        mov edi, dword ptr ds : [edx+0x254]
        mov dword ptr ds : [ecx], edi
        add ecx, 4
        mov dword ptr ss : [ebp], ecx
        mov ecx, dword ptr ds : [ebx]
        mov edi, dword ptr ds : [ebx+4]
        add ecx, 4
        cmp ecx, edi
        mov dword ptr ds : [ebx], ecx
        jbe public_6be05ed
        mov dword ptr ds : [ebx+0xC], eax
        public_6be05ed : nop
        mov ecx, dword ptr ds : [esi+0x1C]
        test ecx, ecx
        jne public_6be0cc4
        mov ecx, dword ptr ss : [ebp]
        mov edi, dword ptr ds : [edx+0x258]
        mov dword ptr ds : [ecx], edi
        add ecx, 4
        mov dword ptr ss : [ebp], ecx
        mov ecx, dword ptr ds : [ebx]
        mov edi, dword ptr ds : [ebx+4]
        add ecx, 4
        cmp ecx, edi
        mov dword ptr ds : [ebx], ecx
        jbe public_6be061a
        mov dword ptr ds : [ebx+0xC], eax
        public_6be061a : nop
        mov ecx, dword ptr ds : [esi+0x1C]
        test ecx, ecx
        jne public_6be0cc4
        mov ecx, dword ptr ss : [ebp]
        mov edi, dword ptr ds : [edx+0x25C]
        mov dword ptr ds : [ecx], edi
        add ecx, 4
        mov dword ptr ss : [ebp], ecx
        mov ecx, dword ptr ds : [edx+0x274]
        mov edi, dword ptr ds : [ebx+4]
        test ecx, ecx
        mov ecx, dword ptr ds : [ebx]
        je public_6be07b7
        inc ecx
        cmp ecx, edi
        mov dword ptr ds : [ebx], ecx
        jbe public_6be0653
        mov dword ptr ds : [ebx+0xC], eax
        public_6be0653 : nop
        mov ecx, dword ptr ds : [esi+0x1C]
        test ecx, ecx
        jne public_6be0cc4
        mov ecx, dword ptr ss : [ebp]
        mov byte ptr ds : [ecx], 1
        inc ecx
        mov dword ptr ss : [ebp], ecx
        mov ecx, dword ptr ds : [ebx]
        mov edi, dword ptr ds : [ebx+4]
        add ecx, 4
        cmp ecx, edi
        mov dword ptr ds : [ebx], ecx
        jbe public_6be0679
        mov dword ptr ds : [ebx+0xC], eax
        public_6be0679 : nop
        mov ecx, dword ptr ds : [esi+0x1C]
        test ecx, ecx
        jne public_6be0cc4
        mov edi, dword ptr ds : [edx+0x274]
        mov ecx, dword ptr ss : [ebp]
        mov edi, dword ptr ds : [edi+4]
        mov dword ptr ds : [ecx], edi
        add ecx, 4
        mov dword ptr ss : [ebp], ecx
        mov ecx, dword ptr ds : [ebx]
        mov edi, dword ptr ds : [ebx+4]
        add ecx, 4
        cmp ecx, edi
        mov dword ptr ds : [ebx], ecx
        jbe public_6be06a9
        mov dword ptr ds : [ebx+0xC], eax
        public_6be06a9 : nop
        mov ecx, dword ptr ds : [esi+0x1C]
        test ecx, ecx
        jne public_6be0cc4
        mov edi, dword ptr ds : [edx+0x274]
        mov ecx, dword ptr ss : [ebp]
        mov edi, dword ptr ds : [edi]
        mov dword ptr ds : [ecx], edi
        add ecx, 4
        mov dword ptr ss : [ebp], ecx
        mov ecx, dword ptr ds : [ebx]
        mov edi, dword ptr ds : [ebx+4]
        add ecx, 4
        cmp ecx, edi
        mov dword ptr ds : [ebx], ecx
        jbe public_6be06d8
        mov dword ptr ds : [ebx+0xC], eax
        public_6be06d8 : nop
        mov ecx, dword ptr ds : [esi+0x1C]
        test ecx, ecx
        jne public_6be0cc4
        mov edi, dword ptr ds : [edx+0x274]
        mov ecx, dword ptr ss : [ebp]
        mov edi, dword ptr ds : [edi+8]
        mov dword ptr ds : [ecx], edi
        add ecx, 4
        mov dword ptr ss : [ebp], ecx
        mov ecx, dword ptr ds : [ebx]
        mov edi, dword ptr ds : [ebx+4]
        add ecx, 4
        cmp ecx, edi
        mov dword ptr ds : [ebx], ecx
        jbe public_6be0708
        mov dword ptr ds : [ebx+0xC], eax
        public_6be0708 : nop
        mov ecx, dword ptr ds : [esi+0x1C]
        test ecx, ecx
        jne public_6be0cc4
        mov edi, dword ptr ds : [edx+0x274]
        mov ecx, dword ptr ss : [ebp]
        mov edi, dword ptr ds : [edi+0xC]
        mov dword ptr ds : [ecx], edi
        add ecx, 4
        mov dword ptr ss : [ebp], ecx
        mov ecx, dword ptr ds : [ebx]
        mov edi, dword ptr ds : [ebx+4]
        add ecx, 4
        cmp ecx, edi
        mov dword ptr ds : [ebx], ecx
        jbe public_6be0738
        mov dword ptr ds : [ebx+0xC], eax
        public_6be0738 : nop
        mov ecx, dword ptr ds : [esi+0x1C]
        test ecx, ecx
        jne public_6be0cc4
        mov edi, dword ptr ds : [edx+0x274]
        mov edi, dword ptr ds : [edi+0x10]
        mov ecx, dword ptr ss : [ebp]
        mov dword ptr ds : [ecx], edi
        add ecx, 4
        mov dword ptr ss : [ebp], ecx
        mov ecx, dword ptr ds : [edx+0x274]
        mov ecx, dword ptr ds : [ecx+0x10]
        mov edi, dword ptr ds : [ebx]
        shl ecx, 2
        add edi, ecx
        mov ecx, edi
        mov dword ptr ds : [ebx], edi
        cmp ecx, dword ptr ds : [ebx+4]
        jbe public_6be0773
        mov dword ptr ds : [ebx+0xC], eax
        public_6be0773 : nop
        mov ecx, dword ptr ds : [esi+0x1C]
        test ecx, ecx
        jne public_6be0cc4
        mov eax, dword ptr ds : [edx+0x274]
        mov ecx, dword ptr ds : [eax+0x10]
        mov esi, dword ptr ds : [eax+0x14]
        mov edi, dword ptr ss : [ebp]
        shl ecx, 2
        mov dword ptr ss : [esp+0x18], ecx
        mov eax, ecx
        shr ecx, 2
        mov dword ptr ss : [esp+0x24], edi
        rep movsd
        mov ecx, eax
        and ecx, 3
        rep movsb
        mov ecx, dword ptr ss : [esp+0x24]
        mov esi, dword ptr ss : [esp+0x10]
        add ecx, eax
        mov eax, 0x16
        jmp public_6be07d3
        public_6be07b7 : nop
        inc ecx
        cmp ecx, edi
        mov dword ptr ds : [ebx], ecx
        jbe public_6be07c1
        mov dword ptr ds : [ebx+0xC], eax
        public_6be07c1 : nop
        mov ecx, dword ptr ds : [esi+0x1C]
        test ecx, ecx
        jne public_6be0cc4
        mov ecx, dword ptr ss : [ebp]
        mov byte ptr ds : [ecx], 0
        inc ecx
        public_6be07d3 : nop
        mov dword ptr ss : [ebp], ecx
        mov ecx, dword ptr ds : [edx+0x278]
        test ecx, ecx
        je public_6be0955
        mov ecx, dword ptr ds : [ebx]
        mov edi, dword ptr ds : [ebx+4]
        inc ecx
        cmp ecx, edi
        mov dword ptr ds : [ebx], ecx
        jbe public_6be07f3
        mov dword ptr ds : [ebx+0xC], eax
        public_6be07f3 : nop
        mov ecx, dword ptr ds : [esi+0x1C]
        test ecx, ecx
        jne public_6be0cc4
        mov ecx, dword ptr ss : [ebp]
        mov byte ptr ds : [ecx], 1
        inc ecx
        mov dword ptr ss : [ebp], ecx
        mov ecx, dword ptr ds : [ebx]
        mov edi, dword ptr ds : [ebx+4]
        add ecx, 4
        cmp ecx, edi
        mov dword ptr ds : [ebx], ecx
        jbe public_6be0819
        mov dword ptr ds : [ebx+0xC], eax
        public_6be0819 : nop
        mov ecx, dword ptr ds : [esi+0x1C]
        test ecx, ecx
        jne public_6be0cc4
        mov edi, dword ptr ds : [edx+0x278]
        mov ecx, dword ptr ss : [ebp]
        mov edi, dword ptr ds : [edi+4]
        mov dword ptr ds : [ecx], edi
        add ecx, 4
        mov dword ptr ss : [ebp], ecx
        mov ecx, dword ptr ds : [ebx]
        mov edi, dword ptr ds : [ebx+4]
        add ecx, 4
        cmp ecx, edi
        mov dword ptr ds : [ebx], ecx
        jbe public_6be0849
        mov dword ptr ds : [ebx+0xC], eax
        public_6be0849 : nop
        mov ecx, dword ptr ds : [esi+0x1C]
        test ecx, ecx
        jne public_6be0cc4
        mov edi, dword ptr ds : [edx+0x278]
        mov ecx, dword ptr ss : [ebp]
        mov edi, dword ptr ds : [edi]
        mov dword ptr ds : [ecx], edi
        add ecx, 4
        mov dword ptr ss : [ebp], ecx
        mov ecx, dword ptr ds : [ebx]
        mov edi, dword ptr ds : [ebx+4]
        add ecx, 4
        cmp ecx, edi
        mov dword ptr ds : [ebx], ecx
        jbe public_6be0878
        mov dword ptr ds : [ebx+0xC], eax
        public_6be0878 : nop
        mov ecx, dword ptr ds : [esi+0x1C]
        test ecx, ecx
        jne public_6be0cc4
        mov edi, dword ptr ds : [edx+0x278]
        mov ecx, dword ptr ss : [ebp]
        mov edi, dword ptr ds : [edi+8]
        mov dword ptr ds : [ecx], edi
        add ecx, 4
        mov dword ptr ss : [ebp], ecx
        mov ecx, dword ptr ds : [ebx]
        mov edi, dword ptr ds : [ebx+4]
        add ecx, 4
        cmp ecx, edi
        mov dword ptr ds : [ebx], ecx
        jbe public_6be08a8
        mov dword ptr ds : [ebx+0xC], eax
        public_6be08a8 : nop
        mov ecx, dword ptr ds : [esi+0x1C]
        test ecx, ecx
        jne public_6be0cc4
        mov edi, dword ptr ds : [edx+0x278]
        mov ecx, dword ptr ss : [ebp]
        mov edi, dword ptr ds : [edi+0xC]
        mov dword ptr ds : [ecx], edi
        add ecx, 4
        mov dword ptr ss : [ebp], ecx
        mov ecx, dword ptr ds : [ebx]
        mov edi, dword ptr ds : [ebx+4]
        add ecx, 4
        cmp ecx, edi
        mov dword ptr ds : [ebx], ecx
        jbe public_6be08d8
        mov dword ptr ds : [ebx+0xC], eax
        public_6be08d8 : nop
        mov ecx, dword ptr ds : [esi+0x1C]
        test ecx, ecx
        jne public_6be0cc4
        mov edi, dword ptr ds : [edx+0x278]
        mov edi, dword ptr ds : [edi+0x10]
        mov ecx, dword ptr ss : [ebp]
        mov dword ptr ds : [ecx], edi
        add ecx, 4
        mov dword ptr ss : [ebp], ecx
        mov ecx, dword ptr ds : [edx+0x278]
        mov ecx, dword ptr ds : [ecx+0x10]
        mov edi, dword ptr ds : [ebx]
        shl ecx, 2
        add edi, ecx
        mov ecx, edi
        mov dword ptr ds : [ebx], edi
        cmp ecx, dword ptr ds : [ebx+4]
        jbe public_6be0913
        mov dword ptr ds : [ebx+0xC], eax
        public_6be0913 : nop
        mov ecx, dword ptr ds : [esi+0x1C]
        test ecx, ecx
        jne public_6be0cc4
        mov eax, dword ptr ds : [edx+0x278]
        mov edx, dword ptr ds : [eax+0x10]
        mov esi, dword ptr ds : [eax+0x14]
        mov edi, dword ptr ss : [ebp]
        shl edx, 2
        mov ecx, edx
        mov eax, ecx
        shr ecx, 2
        mov dword ptr ss : [esp+0x24], edi
        rep movsd
        mov ecx, eax
        and ecx, 3
        rep movsb
        mov ecx, dword ptr ss : [esp+0x24]
        mov esi, dword ptr ss : [esp+0x10]
        add ecx, edx
        mov eax, 0x16
        jmp public_6be0978
        public_6be0955 : nop
        mov edi, dword ptr ds : [ebx]
        mov edx, dword ptr ds : [ebx+4]
        inc edi
        mov ecx, edi
        cmp ecx, edx
        mov dword ptr ds : [ebx], edi
        jbe public_6be0966
        mov dword ptr ds : [ebx+0xC], eax
        public_6be0966 : nop
        mov ecx, dword ptr ds : [esi+0x1C]
        test ecx, ecx
        jne public_6be0cc4
        mov ecx, dword ptr ss : [ebp]
        mov byte ptr ds : [ecx], 0
        inc ecx
        public_6be0978 : nop
        mov dword ptr ss : [ebp], ecx
        mov edi, dword ptr ds : [ebx]
        mov edx, dword ptr ds : [ebx+4]
        inc edi
        mov ecx, edi
        cmp ecx, edx
        mov dword ptr ds : [ebx], edi
        jbe public_6be098c
        mov dword ptr ds : [ebx+0xC], eax
        public_6be098c : nop
        mov ecx, dword ptr ds : [esi+0x1C]
        test ecx, ecx
        jne public_6be0cc4
        mov eax, dword ptr ss : [ebp]
        mov esi, dword ptr ss : [esp+0x28]
        mov dl, byte ptr ds : [esi+0x260]
        mov byte ptr ds : [eax], dl
        inc eax
        lea ecx, ds:[esi+0x264]
        mov dword ptr ss : [ebp], eax
        call public_6bdc830
        test eax, eax
        mov dword ptr ss : [esp+0x1C], eax
        je public_6be0b67
        mov eax, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [eax]
        cmp ecx, eax
        mov dword ptr ss : [esp+0x24], ecx
        je public_6be0b67
        public_6be09d2 : nop
        mov esi, dword ptr ds : [ebx]
        mov eax, dword ptr ss : [esp+0x24]
        mov edx, dword ptr ds : [eax+8]
        mov ecx, dword ptr ds : [ebx+4]
        add esi, 4
        mov eax, esi
        cmp eax, ecx
        mov dword ptr ds : [ebx], esi
        mov eax, 0x16
        jbe public_6be09f1
        mov dword ptr ds : [ebx+0xC], eax
        public_6be09f1 : nop
        mov edi, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [edi+0x1C]
        test ecx, ecx
        jne public_6be0cc4
        mov ecx, dword ptr ss : [ebp]
        mov esi, dword ptr ds : [edx+4]
        mov dword ptr ds : [ecx], esi
        add ecx, 4
        mov dword ptr ss : [ebp], ecx
        mov ecx, dword ptr ds : [ebx]
        mov esi, dword ptr ds : [ebx+4]
        add ecx, 4
        cmp ecx, esi
        mov dword ptr ds : [ebx], ecx
        jbe public_6be0a1f
        mov dword ptr ds : [ebx+0xC], eax
        public_6be0a1f : nop
        mov ecx, dword ptr ds : [edi+0x1C]
        test ecx, ecx
        jne public_6be0cc4
        fld dword ptr ds : [edx+8]
        mov ecx, dword ptr ss : [ebp]
        add ecx, 4
        fstp dword ptr ds : [ecx-4]
        mov dword ptr ss : [ebp], ecx
        mov ecx, dword ptr ds : [ebx]
        mov esi, dword ptr ds : [ebx+4]
        add ecx, 4
        cmp ecx, esi
        mov dword ptr ds : [ebx], ecx
        jbe public_6be0a4a
        mov dword ptr ds : [ebx+0xC], eax
        public_6be0a4a : nop
        mov ecx, dword ptr ds : [edi+0x1C]
        test ecx, ecx
        jne public_6be0cc4
        mov ecx, dword ptr ss : [ebp]
        mov esi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx], esi
        add ecx, 4
        mov dword ptr ss : [ebp], ecx
        mov ecx, dword ptr ds : [ebx]
        mov esi, dword ptr ds : [ebx+4]
        add ecx, 2
        cmp ecx, esi
        mov dword ptr ds : [ebx], ecx
        jbe public_6be0a73
        mov dword ptr ds : [ebx+0xC], eax
        public_6be0a73 : nop
        mov ecx, dword ptr ds : [edi+0x1C]
        test ecx, ecx
        jne public_6be0cc4
        mov ecx, dword ptr ss : [ebp]
        mov si, word ptr ds : [edx+0xC]
        mov word ptr ds : [ecx], si
        add ecx, 2
        mov dword ptr ss : [ebp], ecx
        mov ecx, dword ptr ds : [ebx]
        mov esi, dword ptr ds : [ebx+4]
        inc ecx
        cmp ecx, esi
        mov dword ptr ds : [ebx], ecx
        jbe public_6be0a9d
        mov dword ptr ds : [ebx+0xC], eax
        public_6be0a9d : nop
        mov ecx, dword ptr ds : [edi+0x1C]
        test ecx, ecx
        jne public_6be0cc4
        mov esi, dword ptr ss : [ebp]
        mov cl, byte ptr ds : [edx+0xE]
        mov byte ptr ds : [esi], cl
        inc esi
        mov dword ptr ss : [ebp], esi
        mov ecx, dword ptr ds : [ebx]
        mov esi, dword ptr ds : [ebx+4]
        inc ecx
        cmp ecx, esi
        mov dword ptr ds : [ebx], ecx
        jbe public_6be0ac3
        mov dword ptr ds : [ebx+0xC], eax
        public_6be0ac3 : nop
        mov ecx, dword ptr ds : [edi+0x1C]
        test ecx, ecx
        jne public_6be0cc4
        mov esi, dword ptr ss : [ebp]
        mov cl, byte ptr ds : [edx+0xF]
        mov byte ptr ds : [esi], cl
        inc esi
        mov dword ptr ss : [ebp], esi
        mov ecx, dword ptr ds : [ebx]
        mov esi, dword ptr ds : [ebx+4]
        add ecx, 2
        cmp ecx, esi
        mov dword ptr ds : [ebx], ecx
        jbe public_6be0aeb
        mov dword ptr ds : [ebx+0xC], eax
        public_6be0aeb : nop
        mov ecx, dword ptr ds : [edi+0x1C]
        test ecx, ecx
        jne public_6be0cc4
        mov ecx, dword ptr ss : [ebp]
        mov si, word ptr ds : [edx+0x10]
        mov word ptr ds : [ecx], si
        add ecx, 2
        mov dword ptr ss : [ebp], ecx
        movzx ecx, word ptr ds : [edx+0x10]
        mov esi, dword ptr ds : [ebx]
        add esi, ecx
        mov ecx, esi
        mov dword ptr ds : [ebx], esi
        cmp ecx, dword ptr ds : [ebx+4]
        jbe public_6be0b1a
        mov dword ptr ds : [ebx+0xC], eax
        public_6be0b1a : nop
        mov ecx, dword ptr ds : [edi+0x1C]
        test ecx, ecx
        jne public_6be0cc4
        movzx eax, word ptr ds : [edx+0x10]
        mov esi, dword ptr ds : [edx+0x14]
        mov edi, dword ptr ss : [ebp]
        mov ecx, eax
        mov edx, ecx
        shr ecx, 2
        mov dword ptr ss : [esp+0x18], edi
        rep movsd
        mov ecx, edx
        mov edx, dword ptr ss : [esp+0x24]
        and ecx, 3
        rep movsb
        mov ecx, dword ptr ss : [esp+0x18]
        add ecx, eax
        mov dword ptr ss : [ebp], ecx
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ss : [esp+0x1C]
        cmp eax, dword ptr ds : [ecx+4]
        mov dword ptr ss : [esp+0x24], eax
        jne public_6be09d2
        mov esi, dword ptr ss : [esp+0x28]
        public_6be0b67 : nop
        mov edi, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [ebx+4]
        mov edx, dword ptr ds : [esi+0x270]
        add edi, 4
        mov eax, edi
        cmp eax, ecx
        mov dword ptr ds : [ebx], edi
        jbe public_6be0b84
        mov dword ptr ds : [ebx+0xC], 0x16
        public_6be0b84 : nop
        mov edi, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        jne public_6be0c78
        mov ecx, dword ptr ss : [ebp]
        mov dword ptr ds : [ecx], edx
        add ecx, 4
        mov dword ptr ss : [ebp], ecx
        mov esi, dword ptr ds : [esi+0x26C]
        mov ecx, dword ptr ds : [esi]
        cmp ecx, esi
        je public_6be0c10
        lea ebx, ds:[ebx]
        public_6be0bb0 : nop
        mov edx, dword ptr ds : [ebx]
        mov eax, dword ptr ds : [ebx+4]
        add edx, 2
        cmp edx, eax
        mov dword ptr ds : [ebx], edx
        jbe public_6be0bc5
        mov dword ptr ds : [ebx+0xC], 0x16
        public_6be0bc5 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        jne public_6be0c78
        mov edx, dword ptr ss : [ebp]
        mov ax, word ptr ds : [ecx+8]
        mov word ptr ds : [edx], ax
        add edx, 2
        mov dword ptr ss : [ebp], edx
        mov edx, dword ptr ds : [ebx]
        mov eax, dword ptr ds : [ebx+4]
        add edx, 4
        cmp edx, eax
        mov dword ptr ds : [ebx], edx
        jbe public_6be0bf5
        mov dword ptr ds : [ebx+0xC], 0x16
        public_6be0bf5 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        jne public_6be0c78
        fld dword ptr ds : [ecx+0xC]
        mov edx, dword ptr ss : [ebp]
        fstp dword ptr ds : [edx]
        add edx, 4
        mov dword ptr ss : [ebp], edx
        mov ecx, dword ptr ds : [ecx]
        cmp ecx, esi
        jne public_6be0bb0
        public_6be0c10 : nop
        mov ecx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [ecx]
        mov edx, dword ptr ss : [esp+0x10]
        cmp eax, dword ptr ds : [edx+0x28]
        mov dword ptr ss : [esp+0x14], eax
        jne public_6be0183
        mov esi, edx
        public_6be0c29 : nop
        mov edx, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [ebx+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [ebx], edx
        jbe public_6be0c40
        mov dword ptr ds : [ebx+0xC], 0x16
        public_6be0c40 : nop
        mov eax, dword ptr ds : [esi+0x1C]
        test eax, eax
        je public_6be0c56
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        add esp, 0x10
        ret 0xC
        public_6be0c56 : nop
        mov eax, dword ptr ss : [ebp]
        mov ecx, dword ptr ds : [esi+0x20]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [esi+0x14]
        push ebx
        push edx
        add eax, 4
        push ebp
        mov ecx, esi
        mov dword ptr ss : [ebp], eax
        call public_6bebea0
        test eax, eax
        mov dword ptr ds : [esi+0x1C], eax
        je public_6be0c87
        public_6be0c78 : nop
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        add esp, 0x10
        ret 0xC
        public_6be0c87 : nop
        mov eax, dword ptr ds : [ebx]
        mov ecx, dword ptr ss : [esp+0x2C]
        mov dword ptr ds : [ecx], eax
        mov edx, dword ptr ds : [esi+0xC]
        push edx
        call public_6bec3b0
        mov ecx, eax
        mov esi, dword ptr ds : [ecx]
        mov edx, dword ptr ds : [ecx+0x18]
        add esp, 4
        inc esi
        mov dword ptr ds : [ecx], esi
        mov eax, dword ptr ds : [ebx]
        add edx, eax
        mov eax, dword ptr ds : [ecx+0x10]
        mov dword ptr ds : [ecx+0x18], edx
        mov ebx, dword ptr ds : [ebx]
        cmp ebx, eax
        jbe public_6be0cb8
        mov dword ptr ds : [ecx+0x10], ebx
        public_6be0cb8 : nop
        mov eax, dword ptr ds : [ecx+0x18]
        xor edx, edx
        div esi
        mov dword ptr ds : [ecx+8], eax
        xor eax, eax
        public_6be0cc4 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x10
        ret 0xC
        UNREACHABLE_TRAP(0x6be00e0)
    }
}

#undef public_6be0133
#undef public_6be014b
#undef public_6be0161
#undef public_6be0183
#undef public_6be01b9
#undef public_6be01f1
#undef public_6be023a
#undef public_6be0267
#undef public_6be0297
#undef public_6be02c9
#undef public_6be02d9
#undef public_6be0319
#undef public_6be0355
#undef public_6be0365
#undef public_6be039f
#undef public_6be03d0
#undef public_6be03fd
#undef public_6be042a
#undef public_6be0457
#undef public_6be0484
#undef public_6be04b1
#undef public_6be04de
#undef public_6be050b
#undef public_6be0538
#undef public_6be0565
#undef public_6be0592
#undef public_6be05c0
#undef public_6be05ed
#undef public_6be061a
#undef public_6be0653
#undef public_6be0679
#undef public_6be06a9
#undef public_6be06d8
#undef public_6be0708
#undef public_6be0738
#undef public_6be0773
#undef public_6be07b7
#undef public_6be07c1
#undef public_6be07d3
#undef public_6be07f3
#undef public_6be0819
#undef public_6be0849
#undef public_6be0878
#undef public_6be08a8
#undef public_6be08d8
#undef public_6be0913
#undef public_6be0955
#undef public_6be0966
#undef public_6be0978
#undef public_6be098c
#undef public_6be09d2
#undef public_6be09f1
#undef public_6be0a1f
#undef public_6be0a4a
#undef public_6be0a73
#undef public_6be0a9d
#undef public_6be0ac3
#undef public_6be0aeb
#undef public_6be0b1a
#undef public_6be0b67
#undef public_6be0b84
#undef public_6be0bb0
#undef public_6be0bc5
#undef public_6be0bf5
#undef public_6be0c10
#undef public_6be0c29
#undef public_6be0c40
#undef public_6be0c56
#undef public_6be0c78
#undef public_6be0c87
#undef public_6be0cb8
#undef public_6be0cc4
