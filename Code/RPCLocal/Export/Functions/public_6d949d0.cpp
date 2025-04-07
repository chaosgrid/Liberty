#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d913e0);
CLANG_FORWARD_PROC_SYMBOL(public_6da1380);
CLANG_FORWARD_PROC_SYMBOL(public_6da13c0);
CLANG_FORWARD_PROC_SYMBOL(public_6da16b0);

#define public_6d94a23 _public_6d94a23
#define public_6d94a3b _public_6d94a3b
#define public_6d94a51 _public_6d94a51
#define public_6d94a73 _public_6d94a73
#define public_6d94aa9 _public_6d94aa9
#define public_6d94ae1 _public_6d94ae1
#define public_6d94b2a _public_6d94b2a
#define public_6d94b57 _public_6d94b57
#define public_6d94b87 _public_6d94b87
#define public_6d94bb9 _public_6d94bb9
#define public_6d94bc9 _public_6d94bc9
#define public_6d94c09 _public_6d94c09
#define public_6d94c45 _public_6d94c45
#define public_6d94c55 _public_6d94c55
#define public_6d94c8f _public_6d94c8f
#define public_6d94cc0 _public_6d94cc0
#define public_6d94ced _public_6d94ced
#define public_6d94d1a _public_6d94d1a
#define public_6d94d47 _public_6d94d47
#define public_6d94d74 _public_6d94d74
#define public_6d94da1 _public_6d94da1
#define public_6d94dce _public_6d94dce
#define public_6d94dfb _public_6d94dfb
#define public_6d94e28 _public_6d94e28
#define public_6d94e55 _public_6d94e55
#define public_6d94e82 _public_6d94e82
#define public_6d94eb0 _public_6d94eb0
#define public_6d94edd _public_6d94edd
#define public_6d94f0a _public_6d94f0a
#define public_6d94f43 _public_6d94f43
#define public_6d94f69 _public_6d94f69
#define public_6d94f99 _public_6d94f99
#define public_6d94fc8 _public_6d94fc8
#define public_6d94ff8 _public_6d94ff8
#define public_6d95028 _public_6d95028
#define public_6d95063 _public_6d95063
#define public_6d950a7 _public_6d950a7
#define public_6d950b1 _public_6d950b1
#define public_6d950c3 _public_6d950c3
#define public_6d950e3 _public_6d950e3
#define public_6d95109 _public_6d95109
#define public_6d95139 _public_6d95139
#define public_6d95168 _public_6d95168
#define public_6d95198 _public_6d95198
#define public_6d951c8 _public_6d951c8
#define public_6d95203 _public_6d95203
#define public_6d95245 _public_6d95245
#define public_6d95256 _public_6d95256
#define public_6d95268 _public_6d95268
#define public_6d9527c _public_6d9527c
#define public_6d952c2 _public_6d952c2
#define public_6d952e1 _public_6d952e1
#define public_6d9530f _public_6d9530f
#define public_6d9533a _public_6d9533a
#define public_6d95363 _public_6d95363
#define public_6d9538d _public_6d9538d
#define public_6d953b3 _public_6d953b3
#define public_6d953db _public_6d953db
#define public_6d9540a _public_6d9540a
#define public_6d95457 _public_6d95457
#define public_6d95474 _public_6d95474
#define public_6d954a0 _public_6d954a0
#define public_6d954b5 _public_6d954b5
#define public_6d954e5 _public_6d954e5
#define public_6d95500 _public_6d95500
#define public_6d95519 _public_6d95519
#define public_6d95530 _public_6d95530
#define public_6d95546 _public_6d95546
#define public_6d95568 _public_6d95568
#define public_6d95577 _public_6d95577
#define public_6d955a8 _public_6d955a8
#define public_6d955b4 _public_6d955b4

PROC_DECLARE(0x6d949d0, internal_6d949d0, public_6d949d0);
extern "C" NAKED register_t __cdecl internal_6d949d0()
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
        call public_6da1380
        test eax, eax
        mov dword ptr ds : [esi+0x1C], eax
        je public_6d94a23
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        add esp, 0x10
        ret 0xC
        public_6d94a23 : nop
        mov edi, dword ptr ds : [ebx]
        mov edx, dword ptr ds : [ebx+4]
        mov cl, byte ptr ds : [esi+0x2C]
        inc edi
        mov eax, edi
        cmp eax, edx
        mov dword ptr ds : [ebx], edi
        jbe public_6d94a3b
        mov dword ptr ds : [ebx+0xC], 0x16
        public_6d94a3b : nop
        mov eax, dword ptr ds : [esi+0x1C]
        test eax, eax
        je public_6d94a51
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        add esp, 0x10
        ret 0xC
        public_6d94a51 : nop
        mov eax, dword ptr ss : [ebp]
        mov byte ptr ds : [eax], cl
        inc eax
        test cl, cl
        mov dword ptr ss : [ebp], eax
        jbe public_6d95519
        mov eax, dword ptr ds : [esi+0x28]
        mov ecx, dword ptr ds : [eax]
        cmp ecx, eax
        mov dword ptr ss : [esp+0x14], ecx
        je public_6d95519
        public_6d94a73 : nop
        mov ecx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [ecx+8]
        test eax, eax
        mov dword ptr ss : [esp+0x28], eax
        je public_6d95500
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
        jbe public_6d94aa9
        mov dword ptr ds : [ebx+0xC], 0x16
        public_6d94aa9 : nop
        mov edx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [edx+0x1C]
        test eax, eax
        jne public_6d95568
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
        jbe public_6d94ae1
        mov dword ptr ds : [ebx+0xC], 0x16
        public_6d94ae1 : nop
        mov eax, dword ptr ds : [edx+0x1C]
        test eax, eax
        jne public_6d95568
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
        jbe public_6d94b2a
        mov dword ptr ds : [ebx+0xC], eax
        public_6d94b2a : nop
        mov edi, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [edi+0x1C]
        test ecx, ecx
        jne public_6d955b4
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
        jbe public_6d94b57
        mov dword ptr ds : [ebx+0xC], eax
        public_6d94b57 : nop
        mov ecx, dword ptr ds : [edi+0x1C]
        test ecx, ecx
        jne public_6d955b4
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
        jbe public_6d94b87
        mov dword ptr ds : [ebx+0xC], eax
        public_6d94b87 : nop
        mov ecx, dword ptr ds : [edi+0x1C]
        test ecx, ecx
        jne public_6d955b4
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
        jbe public_6d94bb9
        mov dword ptr ds : [ebx+0xC], eax
        public_6d94bb9 : nop
        mov esi, dword ptr ds : [edx+0x208]
        test esi, esi
        jne public_6d94bc9
        mov esi, dword ptr ds : [public_6db3190]
        public_6d94bc9 : nop
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
        jbe public_6d94c09
        mov dword ptr ds : [ebx+0xC], 0x16
        public_6d94c09 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov esi, dword ptr ds : [ecx+0x1C]
        test esi, esi
        jne public_6d95568
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
        jbe public_6d94c45
        mov dword ptr ds : [ebx+0xC], 0x16
        public_6d94c45 : nop
        mov esi, dword ptr ds : [edx+0x218]
        test esi, esi
        jne public_6d94c55
        mov esi, dword ptr ds : [public_6db3190]
        public_6d94c55 : nop
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
        jbe public_6d94c8f
        mov dword ptr ds : [ebx+0xC], eax
        public_6d94c8f : nop
        mov esi, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [esi+0x1C]
        test ecx, ecx
        jne public_6d955b4
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
        jbe public_6d94cc0
        mov dword ptr ds : [ebx+0xC], eax
        public_6d94cc0 : nop
        mov ecx, dword ptr ds : [esi+0x1C]
        test ecx, ecx
        jne public_6d955b4
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
        jbe public_6d94ced
        mov dword ptr ds : [ebx+0xC], eax
        public_6d94ced : nop
        mov ecx, dword ptr ds : [esi+0x1C]
        test ecx, ecx
        jne public_6d955b4
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
        jbe public_6d94d1a
        mov dword ptr ds : [ebx+0xC], eax
        public_6d94d1a : nop
        mov ecx, dword ptr ds : [esi+0x1C]
        test ecx, ecx
        jne public_6d955b4
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
        jbe public_6d94d47
        mov dword ptr ds : [ebx+0xC], eax
        public_6d94d47 : nop
        mov ecx, dword ptr ds : [esi+0x1C]
        test ecx, ecx
        jne public_6d955b4
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
        jbe public_6d94d74
        mov dword ptr ds : [ebx+0xC], eax
        public_6d94d74 : nop
        mov ecx, dword ptr ds : [esi+0x1C]
        test ecx, ecx
        jne public_6d955b4
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
        jbe public_6d94da1
        mov dword ptr ds : [ebx+0xC], eax
        public_6d94da1 : nop
        mov ecx, dword ptr ds : [esi+0x1C]
        test ecx, ecx
        jne public_6d955b4
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
        jbe public_6d94dce
        mov dword ptr ds : [ebx+0xC], eax
        public_6d94dce : nop
        mov ecx, dword ptr ds : [esi+0x1C]
        test ecx, ecx
        jne public_6d955b4
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
        jbe public_6d94dfb
        mov dword ptr ds : [ebx+0xC], eax
        public_6d94dfb : nop
        mov ecx, dword ptr ds : [esi+0x1C]
        test ecx, ecx
        jne public_6d955b4
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
        jbe public_6d94e28
        mov dword ptr ds : [ebx+0xC], eax
        public_6d94e28 : nop
        mov ecx, dword ptr ds : [esi+0x1C]
        test ecx, ecx
        jne public_6d955b4
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
        jbe public_6d94e55
        mov dword ptr ds : [ebx+0xC], eax
        public_6d94e55 : nop
        mov ecx, dword ptr ds : [esi+0x1C]
        test ecx, ecx
        jne public_6d955b4
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
        jbe public_6d94e82
        mov dword ptr ds : [ebx+0xC], eax
        public_6d94e82 : nop
        mov ecx, dword ptr ds : [esi+0x1C]
        test ecx, ecx
        jne public_6d955b4
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
        jbe public_6d94eb0
        mov dword ptr ds : [ebx+0xC], eax
        public_6d94eb0 : nop
        mov ecx, dword ptr ds : [esi+0x1C]
        test ecx, ecx
        jne public_6d955b4
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
        jbe public_6d94edd
        mov dword ptr ds : [ebx+0xC], eax
        public_6d94edd : nop
        mov ecx, dword ptr ds : [esi+0x1C]
        test ecx, ecx
        jne public_6d955b4
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
        jbe public_6d94f0a
        mov dword ptr ds : [ebx+0xC], eax
        public_6d94f0a : nop
        mov ecx, dword ptr ds : [esi+0x1C]
        test ecx, ecx
        jne public_6d955b4
        mov ecx, dword ptr ss : [ebp]
        mov edi, dword ptr ds : [edx+0x25C]
        mov dword ptr ds : [ecx], edi
        add ecx, 4
        mov dword ptr ss : [ebp], ecx
        mov ecx, dword ptr ds : [edx+0x274]
        mov edi, dword ptr ds : [ebx+4]
        test ecx, ecx
        mov ecx, dword ptr ds : [ebx]
        je public_6d950a7
        inc ecx
        cmp ecx, edi
        mov dword ptr ds : [ebx], ecx
        jbe public_6d94f43
        mov dword ptr ds : [ebx+0xC], eax
        public_6d94f43 : nop
        mov ecx, dword ptr ds : [esi+0x1C]
        test ecx, ecx
        jne public_6d955b4
        mov ecx, dword ptr ss : [ebp]
        mov byte ptr ds : [ecx], 1
        inc ecx
        mov dword ptr ss : [ebp], ecx
        mov ecx, dword ptr ds : [ebx]
        mov edi, dword ptr ds : [ebx+4]
        add ecx, 4
        cmp ecx, edi
        mov dword ptr ds : [ebx], ecx
        jbe public_6d94f69
        mov dword ptr ds : [ebx+0xC], eax
        public_6d94f69 : nop
        mov ecx, dword ptr ds : [esi+0x1C]
        test ecx, ecx
        jne public_6d955b4
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
        jbe public_6d94f99
        mov dword ptr ds : [ebx+0xC], eax
        public_6d94f99 : nop
        mov ecx, dword ptr ds : [esi+0x1C]
        test ecx, ecx
        jne public_6d955b4
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
        jbe public_6d94fc8
        mov dword ptr ds : [ebx+0xC], eax
        public_6d94fc8 : nop
        mov ecx, dword ptr ds : [esi+0x1C]
        test ecx, ecx
        jne public_6d955b4
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
        jbe public_6d94ff8
        mov dword ptr ds : [ebx+0xC], eax
        public_6d94ff8 : nop
        mov ecx, dword ptr ds : [esi+0x1C]
        test ecx, ecx
        jne public_6d955b4
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
        jbe public_6d95028
        mov dword ptr ds : [ebx+0xC], eax
        public_6d95028 : nop
        mov ecx, dword ptr ds : [esi+0x1C]
        test ecx, ecx
        jne public_6d955b4
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
        jbe public_6d95063
        mov dword ptr ds : [ebx+0xC], eax
        public_6d95063 : nop
        mov ecx, dword ptr ds : [esi+0x1C]
        test ecx, ecx
        jne public_6d955b4
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
        jmp public_6d950c3
        public_6d950a7 : nop
        inc ecx
        cmp ecx, edi
        mov dword ptr ds : [ebx], ecx
        jbe public_6d950b1
        mov dword ptr ds : [ebx+0xC], eax
        public_6d950b1 : nop
        mov ecx, dword ptr ds : [esi+0x1C]
        test ecx, ecx
        jne public_6d955b4
        mov ecx, dword ptr ss : [ebp]
        mov byte ptr ds : [ecx], 0
        inc ecx
        public_6d950c3 : nop
        mov dword ptr ss : [ebp], ecx
        mov ecx, dword ptr ds : [edx+0x278]
        test ecx, ecx
        je public_6d95245
        mov ecx, dword ptr ds : [ebx]
        mov edi, dword ptr ds : [ebx+4]
        inc ecx
        cmp ecx, edi
        mov dword ptr ds : [ebx], ecx
        jbe public_6d950e3
        mov dword ptr ds : [ebx+0xC], eax
        public_6d950e3 : nop
        mov ecx, dword ptr ds : [esi+0x1C]
        test ecx, ecx
        jne public_6d955b4
        mov ecx, dword ptr ss : [ebp]
        mov byte ptr ds : [ecx], 1
        inc ecx
        mov dword ptr ss : [ebp], ecx
        mov ecx, dword ptr ds : [ebx]
        mov edi, dword ptr ds : [ebx+4]
        add ecx, 4
        cmp ecx, edi
        mov dword ptr ds : [ebx], ecx
        jbe public_6d95109
        mov dword ptr ds : [ebx+0xC], eax
        public_6d95109 : nop
        mov ecx, dword ptr ds : [esi+0x1C]
        test ecx, ecx
        jne public_6d955b4
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
        jbe public_6d95139
        mov dword ptr ds : [ebx+0xC], eax
        public_6d95139 : nop
        mov ecx, dword ptr ds : [esi+0x1C]
        test ecx, ecx
        jne public_6d955b4
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
        jbe public_6d95168
        mov dword ptr ds : [ebx+0xC], eax
        public_6d95168 : nop
        mov ecx, dword ptr ds : [esi+0x1C]
        test ecx, ecx
        jne public_6d955b4
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
        jbe public_6d95198
        mov dword ptr ds : [ebx+0xC], eax
        public_6d95198 : nop
        mov ecx, dword ptr ds : [esi+0x1C]
        test ecx, ecx
        jne public_6d955b4
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
        jbe public_6d951c8
        mov dword ptr ds : [ebx+0xC], eax
        public_6d951c8 : nop
        mov ecx, dword ptr ds : [esi+0x1C]
        test ecx, ecx
        jne public_6d955b4
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
        jbe public_6d95203
        mov dword ptr ds : [ebx+0xC], eax
        public_6d95203 : nop
        mov ecx, dword ptr ds : [esi+0x1C]
        test ecx, ecx
        jne public_6d955b4
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
        jmp public_6d95268
        public_6d95245 : nop
        mov edi, dword ptr ds : [ebx]
        mov edx, dword ptr ds : [ebx+4]
        inc edi
        mov ecx, edi
        cmp ecx, edx
        mov dword ptr ds : [ebx], edi
        jbe public_6d95256
        mov dword ptr ds : [ebx+0xC], eax
        public_6d95256 : nop
        mov ecx, dword ptr ds : [esi+0x1C]
        test ecx, ecx
        jne public_6d955b4
        mov ecx, dword ptr ss : [ebp]
        mov byte ptr ds : [ecx], 0
        inc ecx
        public_6d95268 : nop
        mov dword ptr ss : [ebp], ecx
        mov edi, dword ptr ds : [ebx]
        mov edx, dword ptr ds : [ebx+4]
        inc edi
        mov ecx, edi
        cmp ecx, edx
        mov dword ptr ds : [ebx], edi
        jbe public_6d9527c
        mov dword ptr ds : [ebx+0xC], eax
        public_6d9527c : nop
        mov ecx, dword ptr ds : [esi+0x1C]
        test ecx, ecx
        jne public_6d955b4
        mov eax, dword ptr ss : [ebp]
        mov esi, dword ptr ss : [esp+0x28]
        mov dl, byte ptr ds : [esi+0x260]
        mov byte ptr ds : [eax], dl
        inc eax
        lea ecx, ds:[esi+0x264]
        mov dword ptr ss : [ebp], eax
        call public_6d913e0
        test eax, eax
        mov dword ptr ss : [esp+0x1C], eax
        je public_6d95457
        mov eax, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [eax]
        cmp ecx, eax
        mov dword ptr ss : [esp+0x24], ecx
        je public_6d95457
        public_6d952c2 : nop
        mov esi, dword ptr ds : [ebx]
        mov eax, dword ptr ss : [esp+0x24]
        mov edx, dword ptr ds : [eax+8]
        mov ecx, dword ptr ds : [ebx+4]
        add esi, 4
        mov eax, esi
        cmp eax, ecx
        mov dword ptr ds : [ebx], esi
        mov eax, 0x16
        jbe public_6d952e1
        mov dword ptr ds : [ebx+0xC], eax
        public_6d952e1 : nop
        mov edi, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [edi+0x1C]
        test ecx, ecx
        jne public_6d955b4
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
        jbe public_6d9530f
        mov dword ptr ds : [ebx+0xC], eax
        public_6d9530f : nop
        mov ecx, dword ptr ds : [edi+0x1C]
        test ecx, ecx
        jne public_6d955b4
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
        jbe public_6d9533a
        mov dword ptr ds : [ebx+0xC], eax
        public_6d9533a : nop
        mov ecx, dword ptr ds : [edi+0x1C]
        test ecx, ecx
        jne public_6d955b4
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
        jbe public_6d95363
        mov dword ptr ds : [ebx+0xC], eax
        public_6d95363 : nop
        mov ecx, dword ptr ds : [edi+0x1C]
        test ecx, ecx
        jne public_6d955b4
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
        jbe public_6d9538d
        mov dword ptr ds : [ebx+0xC], eax
        public_6d9538d : nop
        mov ecx, dword ptr ds : [edi+0x1C]
        test ecx, ecx
        jne public_6d955b4
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
        jbe public_6d953b3
        mov dword ptr ds : [ebx+0xC], eax
        public_6d953b3 : nop
        mov ecx, dword ptr ds : [edi+0x1C]
        test ecx, ecx
        jne public_6d955b4
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
        jbe public_6d953db
        mov dword ptr ds : [ebx+0xC], eax
        public_6d953db : nop
        mov ecx, dword ptr ds : [edi+0x1C]
        test ecx, ecx
        jne public_6d955b4
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
        jbe public_6d9540a
        mov dword ptr ds : [ebx+0xC], eax
        public_6d9540a : nop
        mov ecx, dword ptr ds : [edi+0x1C]
        test ecx, ecx
        jne public_6d955b4
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
        jne public_6d952c2
        mov esi, dword ptr ss : [esp+0x28]
        public_6d95457 : nop
        mov edi, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [ebx+4]
        mov edx, dword ptr ds : [esi+0x270]
        add edi, 4
        mov eax, edi
        cmp eax, ecx
        mov dword ptr ds : [ebx], edi
        jbe public_6d95474
        mov dword ptr ds : [ebx+0xC], 0x16
        public_6d95474 : nop
        mov edi, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        jne public_6d95568
        mov ecx, dword ptr ss : [ebp]
        mov dword ptr ds : [ecx], edx
        add ecx, 4
        mov dword ptr ss : [ebp], ecx
        mov esi, dword ptr ds : [esi+0x26C]
        mov ecx, dword ptr ds : [esi]
        cmp ecx, esi
        je public_6d95500
        lea ebx, ds:[ebx]
        public_6d954a0 : nop
        mov edx, dword ptr ds : [ebx]
        mov eax, dword ptr ds : [ebx+4]
        add edx, 2
        cmp edx, eax
        mov dword ptr ds : [ebx], edx
        jbe public_6d954b5
        mov dword ptr ds : [ebx+0xC], 0x16
        public_6d954b5 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        jne public_6d95568
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
        jbe public_6d954e5
        mov dword ptr ds : [ebx+0xC], 0x16
        public_6d954e5 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        jne public_6d95568
        fld dword ptr ds : [ecx+0xC]
        mov edx, dword ptr ss : [ebp]
        fstp dword ptr ds : [edx]
        add edx, 4
        mov dword ptr ss : [ebp], edx
        mov ecx, dword ptr ds : [ecx]
        cmp ecx, esi
        jne public_6d954a0
        public_6d95500 : nop
        mov ecx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [ecx]
        mov edx, dword ptr ss : [esp+0x10]
        cmp eax, dword ptr ds : [edx+0x28]
        mov dword ptr ss : [esp+0x14], eax
        jne public_6d94a73
        mov esi, edx
        public_6d95519 : nop
        mov edx, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [ebx+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [ebx], edx
        jbe public_6d95530
        mov dword ptr ds : [ebx+0xC], 0x16
        public_6d95530 : nop
        mov eax, dword ptr ds : [esi+0x1C]
        test eax, eax
        je public_6d95546
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        add esp, 0x10
        ret 0xC
        public_6d95546 : nop
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
        call public_6da13c0
        test eax, eax
        mov dword ptr ds : [esi+0x1C], eax
        je public_6d95577
        public_6d95568 : nop
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        add esp, 0x10
        ret 0xC
        public_6d95577 : nop
        mov eax, dword ptr ds : [ebx]
        mov ecx, dword ptr ss : [esp+0x2C]
        mov dword ptr ds : [ecx], eax
        mov edx, dword ptr ds : [esi+0xC]
        push edx
        call public_6da16b0
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
        jbe public_6d955a8
        mov dword ptr ds : [ecx+0x10], ebx
        public_6d955a8 : nop
        mov eax, dword ptr ds : [ecx+0x18]
        xor edx, edx
        div esi
        mov dword ptr ds : [ecx+8], eax
        xor eax, eax
        public_6d955b4 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x10
        ret 0xC
        UNREACHABLE_TRAP(0x6d949d0)
    }
}

#undef public_6d94a23
#undef public_6d94a3b
#undef public_6d94a51
#undef public_6d94a73
#undef public_6d94aa9
#undef public_6d94ae1
#undef public_6d94b2a
#undef public_6d94b57
#undef public_6d94b87
#undef public_6d94bb9
#undef public_6d94bc9
#undef public_6d94c09
#undef public_6d94c45
#undef public_6d94c55
#undef public_6d94c8f
#undef public_6d94cc0
#undef public_6d94ced
#undef public_6d94d1a
#undef public_6d94d47
#undef public_6d94d74
#undef public_6d94da1
#undef public_6d94dce
#undef public_6d94dfb
#undef public_6d94e28
#undef public_6d94e55
#undef public_6d94e82
#undef public_6d94eb0
#undef public_6d94edd
#undef public_6d94f0a
#undef public_6d94f43
#undef public_6d94f69
#undef public_6d94f99
#undef public_6d94fc8
#undef public_6d94ff8
#undef public_6d95028
#undef public_6d95063
#undef public_6d950a7
#undef public_6d950b1
#undef public_6d950c3
#undef public_6d950e3
#undef public_6d95109
#undef public_6d95139
#undef public_6d95168
#undef public_6d95198
#undef public_6d951c8
#undef public_6d95203
#undef public_6d95245
#undef public_6d95256
#undef public_6d95268
#undef public_6d9527c
#undef public_6d952c2
#undef public_6d952e1
#undef public_6d9530f
#undef public_6d9533a
#undef public_6d95363
#undef public_6d9538d
#undef public_6d953b3
#undef public_6d953db
#undef public_6d9540a
#undef public_6d95457
#undef public_6d95474
#undef public_6d954a0
#undef public_6d954b5
#undef public_6d954e5
#undef public_6d95500
#undef public_6d95519
#undef public_6d95530
#undef public_6d95546
#undef public_6d95568
#undef public_6d95577
#undef public_6d955a8
#undef public_6d955b4
