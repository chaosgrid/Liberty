#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b3a4f0);
CLANG_FORWARD_PROC_SYMBOL(public_6b4e740);
CLANG_FORWARD_PROC_SYMBOL(public_6b4e790);
CLANG_FORWARD_PROC_SYMBOL(public_6b4ecd0);

#define public_6b41af3 _public_6b41af3
#define public_6b41b0b _public_6b41b0b
#define public_6b41b21 _public_6b41b21
#define public_6b41b43 _public_6b41b43
#define public_6b41b79 _public_6b41b79
#define public_6b41bb1 _public_6b41bb1
#define public_6b41bfa _public_6b41bfa
#define public_6b41c27 _public_6b41c27
#define public_6b41c57 _public_6b41c57
#define public_6b41c89 _public_6b41c89
#define public_6b41c99 _public_6b41c99
#define public_6b41cd9 _public_6b41cd9
#define public_6b41d15 _public_6b41d15
#define public_6b41d25 _public_6b41d25
#define public_6b41d5f _public_6b41d5f
#define public_6b41d90 _public_6b41d90
#define public_6b41dbd _public_6b41dbd
#define public_6b41dea _public_6b41dea
#define public_6b41e17 _public_6b41e17
#define public_6b41e44 _public_6b41e44
#define public_6b41e71 _public_6b41e71
#define public_6b41e9e _public_6b41e9e
#define public_6b41ecb _public_6b41ecb
#define public_6b41ef8 _public_6b41ef8
#define public_6b41f25 _public_6b41f25
#define public_6b41f52 _public_6b41f52
#define public_6b41f80 _public_6b41f80
#define public_6b41fad _public_6b41fad
#define public_6b41fda _public_6b41fda
#define public_6b42013 _public_6b42013
#define public_6b42039 _public_6b42039
#define public_6b42069 _public_6b42069
#define public_6b42098 _public_6b42098
#define public_6b420c8 _public_6b420c8
#define public_6b420f8 _public_6b420f8
#define public_6b42133 _public_6b42133
#define public_6b42177 _public_6b42177
#define public_6b42181 _public_6b42181
#define public_6b42193 _public_6b42193
#define public_6b421b3 _public_6b421b3
#define public_6b421d9 _public_6b421d9
#define public_6b42209 _public_6b42209
#define public_6b42238 _public_6b42238
#define public_6b42268 _public_6b42268
#define public_6b42298 _public_6b42298
#define public_6b422d3 _public_6b422d3
#define public_6b42315 _public_6b42315
#define public_6b42326 _public_6b42326
#define public_6b42338 _public_6b42338
#define public_6b4234c _public_6b4234c
#define public_6b42392 _public_6b42392
#define public_6b423b1 _public_6b423b1
#define public_6b423df _public_6b423df
#define public_6b4240a _public_6b4240a
#define public_6b42433 _public_6b42433
#define public_6b4245d _public_6b4245d
#define public_6b42483 _public_6b42483
#define public_6b424ab _public_6b424ab
#define public_6b424da _public_6b424da
#define public_6b42527 _public_6b42527
#define public_6b42544 _public_6b42544
#define public_6b42570 _public_6b42570
#define public_6b42585 _public_6b42585
#define public_6b425b5 _public_6b425b5
#define public_6b425d0 _public_6b425d0
#define public_6b425e9 _public_6b425e9
#define public_6b42600 _public_6b42600
#define public_6b42616 _public_6b42616
#define public_6b42638 _public_6b42638
#define public_6b42647 _public_6b42647
#define public_6b42678 _public_6b42678
#define public_6b42684 _public_6b42684

PROC_DECLARE(0x6b41aa0, internal_6b41aa0, public_6b41aa0);
extern "C" NAKED register_t __cdecl internal_6b41aa0()
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
        call public_6b4e740
        test eax, eax
        mov dword ptr ds : [esi+0x1C], eax
        je public_6b41af3
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        add esp, 0x10
        ret 0xC
        public_6b41af3 : nop
        mov edi, dword ptr ds : [ebx]
        mov edx, dword ptr ds : [ebx+4]
        mov cl, byte ptr ds : [esi+0x2C]
        inc edi
        mov eax, edi
        cmp eax, edx
        mov dword ptr ds : [ebx], edi
        jbe public_6b41b0b
        mov dword ptr ds : [ebx+0xC], 0x16
        public_6b41b0b : nop
        mov eax, dword ptr ds : [esi+0x1C]
        test eax, eax
        je public_6b41b21
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        add esp, 0x10
        ret 0xC
        public_6b41b21 : nop
        mov eax, dword ptr ss : [ebp]
        mov byte ptr ds : [eax], cl
        inc eax
        test cl, cl
        mov dword ptr ss : [ebp], eax
        jbe public_6b425e9
        mov eax, dword ptr ds : [esi+0x28]
        mov ecx, dword ptr ds : [eax]
        cmp ecx, eax
        mov dword ptr ss : [esp+0x14], ecx
        je public_6b425e9
        public_6b41b43 : nop
        mov ecx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [ecx+8]
        test eax, eax
        mov dword ptr ss : [esp+0x28], eax
        je public_6b425d0
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
        jbe public_6b41b79
        mov dword ptr ds : [ebx+0xC], 0x16
        public_6b41b79 : nop
        mov edx, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [edx+0x1C]
        test eax, eax
        jne public_6b42638
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
        jbe public_6b41bb1
        mov dword ptr ds : [ebx+0xC], 0x16
        public_6b41bb1 : nop
        mov eax, dword ptr ds : [edx+0x1C]
        test eax, eax
        jne public_6b42638
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
        jbe public_6b41bfa
        mov dword ptr ds : [ebx+0xC], eax
        public_6b41bfa : nop
        mov edi, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [edi+0x1C]
        test ecx, ecx
        jne public_6b42684
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
        jbe public_6b41c27
        mov dword ptr ds : [ebx+0xC], eax
        public_6b41c27 : nop
        mov ecx, dword ptr ds : [edi+0x1C]
        test ecx, ecx
        jne public_6b42684
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
        jbe public_6b41c57
        mov dword ptr ds : [ebx+0xC], eax
        public_6b41c57 : nop
        mov ecx, dword ptr ds : [edi+0x1C]
        test ecx, ecx
        jne public_6b42684
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
        jbe public_6b41c89
        mov dword ptr ds : [ebx+0xC], eax
        public_6b41c89 : nop
        mov esi, dword ptr ds : [edx+0x208]
        test esi, esi
        jne public_6b41c99
        mov esi, dword ptr ds : [public_6b6b138]
        public_6b41c99 : nop
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
        jbe public_6b41cd9
        mov dword ptr ds : [ebx+0xC], 0x16
        public_6b41cd9 : nop
        mov ecx, dword ptr ss : [esp+0x10]
        mov esi, dword ptr ds : [ecx+0x1C]
        test esi, esi
        jne public_6b42638
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
        jbe public_6b41d15
        mov dword ptr ds : [ebx+0xC], 0x16
        public_6b41d15 : nop
        mov esi, dword ptr ds : [edx+0x218]
        test esi, esi
        jne public_6b41d25
        mov esi, dword ptr ds : [public_6b6b138]
        public_6b41d25 : nop
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
        jbe public_6b41d5f
        mov dword ptr ds : [ebx+0xC], eax
        public_6b41d5f : nop
        mov esi, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [esi+0x1C]
        test ecx, ecx
        jne public_6b42684
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
        jbe public_6b41d90
        mov dword ptr ds : [ebx+0xC], eax
        public_6b41d90 : nop
        mov ecx, dword ptr ds : [esi+0x1C]
        test ecx, ecx
        jne public_6b42684
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
        jbe public_6b41dbd
        mov dword ptr ds : [ebx+0xC], eax
        public_6b41dbd : nop
        mov ecx, dword ptr ds : [esi+0x1C]
        test ecx, ecx
        jne public_6b42684
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
        jbe public_6b41dea
        mov dword ptr ds : [ebx+0xC], eax
        public_6b41dea : nop
        mov ecx, dword ptr ds : [esi+0x1C]
        test ecx, ecx
        jne public_6b42684
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
        jbe public_6b41e17
        mov dword ptr ds : [ebx+0xC], eax
        public_6b41e17 : nop
        mov ecx, dword ptr ds : [esi+0x1C]
        test ecx, ecx
        jne public_6b42684
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
        jbe public_6b41e44
        mov dword ptr ds : [ebx+0xC], eax
        public_6b41e44 : nop
        mov ecx, dword ptr ds : [esi+0x1C]
        test ecx, ecx
        jne public_6b42684
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
        jbe public_6b41e71
        mov dword ptr ds : [ebx+0xC], eax
        public_6b41e71 : nop
        mov ecx, dword ptr ds : [esi+0x1C]
        test ecx, ecx
        jne public_6b42684
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
        jbe public_6b41e9e
        mov dword ptr ds : [ebx+0xC], eax
        public_6b41e9e : nop
        mov ecx, dword ptr ds : [esi+0x1C]
        test ecx, ecx
        jne public_6b42684
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
        jbe public_6b41ecb
        mov dword ptr ds : [ebx+0xC], eax
        public_6b41ecb : nop
        mov ecx, dword ptr ds : [esi+0x1C]
        test ecx, ecx
        jne public_6b42684
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
        jbe public_6b41ef8
        mov dword ptr ds : [ebx+0xC], eax
        public_6b41ef8 : nop
        mov ecx, dword ptr ds : [esi+0x1C]
        test ecx, ecx
        jne public_6b42684
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
        jbe public_6b41f25
        mov dword ptr ds : [ebx+0xC], eax
        public_6b41f25 : nop
        mov ecx, dword ptr ds : [esi+0x1C]
        test ecx, ecx
        jne public_6b42684
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
        jbe public_6b41f52
        mov dword ptr ds : [ebx+0xC], eax
        public_6b41f52 : nop
        mov ecx, dword ptr ds : [esi+0x1C]
        test ecx, ecx
        jne public_6b42684
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
        jbe public_6b41f80
        mov dword ptr ds : [ebx+0xC], eax
        public_6b41f80 : nop
        mov ecx, dword ptr ds : [esi+0x1C]
        test ecx, ecx
        jne public_6b42684
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
        jbe public_6b41fad
        mov dword ptr ds : [ebx+0xC], eax
        public_6b41fad : nop
        mov ecx, dword ptr ds : [esi+0x1C]
        test ecx, ecx
        jne public_6b42684
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
        jbe public_6b41fda
        mov dword ptr ds : [ebx+0xC], eax
        public_6b41fda : nop
        mov ecx, dword ptr ds : [esi+0x1C]
        test ecx, ecx
        jne public_6b42684
        mov ecx, dword ptr ss : [ebp]
        mov edi, dword ptr ds : [edx+0x25C]
        mov dword ptr ds : [ecx], edi
        add ecx, 4
        mov dword ptr ss : [ebp], ecx
        mov ecx, dword ptr ds : [edx+0x274]
        mov edi, dword ptr ds : [ebx+4]
        test ecx, ecx
        mov ecx, dword ptr ds : [ebx]
        je public_6b42177
        inc ecx
        cmp ecx, edi
        mov dword ptr ds : [ebx], ecx
        jbe public_6b42013
        mov dword ptr ds : [ebx+0xC], eax
        public_6b42013 : nop
        mov ecx, dword ptr ds : [esi+0x1C]
        test ecx, ecx
        jne public_6b42684
        mov ecx, dword ptr ss : [ebp]
        mov byte ptr ds : [ecx], 1
        inc ecx
        mov dword ptr ss : [ebp], ecx
        mov ecx, dword ptr ds : [ebx]
        mov edi, dword ptr ds : [ebx+4]
        add ecx, 4
        cmp ecx, edi
        mov dword ptr ds : [ebx], ecx
        jbe public_6b42039
        mov dword ptr ds : [ebx+0xC], eax
        public_6b42039 : nop
        mov ecx, dword ptr ds : [esi+0x1C]
        test ecx, ecx
        jne public_6b42684
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
        jbe public_6b42069
        mov dword ptr ds : [ebx+0xC], eax
        public_6b42069 : nop
        mov ecx, dword ptr ds : [esi+0x1C]
        test ecx, ecx
        jne public_6b42684
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
        jbe public_6b42098
        mov dword ptr ds : [ebx+0xC], eax
        public_6b42098 : nop
        mov ecx, dword ptr ds : [esi+0x1C]
        test ecx, ecx
        jne public_6b42684
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
        jbe public_6b420c8
        mov dword ptr ds : [ebx+0xC], eax
        public_6b420c8 : nop
        mov ecx, dword ptr ds : [esi+0x1C]
        test ecx, ecx
        jne public_6b42684
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
        jbe public_6b420f8
        mov dword ptr ds : [ebx+0xC], eax
        public_6b420f8 : nop
        mov ecx, dword ptr ds : [esi+0x1C]
        test ecx, ecx
        jne public_6b42684
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
        jbe public_6b42133
        mov dword ptr ds : [ebx+0xC], eax
        public_6b42133 : nop
        mov ecx, dword ptr ds : [esi+0x1C]
        test ecx, ecx
        jne public_6b42684
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
        jmp public_6b42193
        public_6b42177 : nop
        inc ecx
        cmp ecx, edi
        mov dword ptr ds : [ebx], ecx
        jbe public_6b42181
        mov dword ptr ds : [ebx+0xC], eax
        public_6b42181 : nop
        mov ecx, dword ptr ds : [esi+0x1C]
        test ecx, ecx
        jne public_6b42684
        mov ecx, dword ptr ss : [ebp]
        mov byte ptr ds : [ecx], 0
        inc ecx
        public_6b42193 : nop
        mov dword ptr ss : [ebp], ecx
        mov ecx, dword ptr ds : [edx+0x278]
        test ecx, ecx
        je public_6b42315
        mov ecx, dword ptr ds : [ebx]
        mov edi, dword ptr ds : [ebx+4]
        inc ecx
        cmp ecx, edi
        mov dword ptr ds : [ebx], ecx
        jbe public_6b421b3
        mov dword ptr ds : [ebx+0xC], eax
        public_6b421b3 : nop
        mov ecx, dword ptr ds : [esi+0x1C]
        test ecx, ecx
        jne public_6b42684
        mov ecx, dword ptr ss : [ebp]
        mov byte ptr ds : [ecx], 1
        inc ecx
        mov dword ptr ss : [ebp], ecx
        mov ecx, dword ptr ds : [ebx]
        mov edi, dword ptr ds : [ebx+4]
        add ecx, 4
        cmp ecx, edi
        mov dword ptr ds : [ebx], ecx
        jbe public_6b421d9
        mov dword ptr ds : [ebx+0xC], eax
        public_6b421d9 : nop
        mov ecx, dword ptr ds : [esi+0x1C]
        test ecx, ecx
        jne public_6b42684
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
        jbe public_6b42209
        mov dword ptr ds : [ebx+0xC], eax
        public_6b42209 : nop
        mov ecx, dword ptr ds : [esi+0x1C]
        test ecx, ecx
        jne public_6b42684
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
        jbe public_6b42238
        mov dword ptr ds : [ebx+0xC], eax
        public_6b42238 : nop
        mov ecx, dword ptr ds : [esi+0x1C]
        test ecx, ecx
        jne public_6b42684
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
        jbe public_6b42268
        mov dword ptr ds : [ebx+0xC], eax
        public_6b42268 : nop
        mov ecx, dword ptr ds : [esi+0x1C]
        test ecx, ecx
        jne public_6b42684
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
        jbe public_6b42298
        mov dword ptr ds : [ebx+0xC], eax
        public_6b42298 : nop
        mov ecx, dword ptr ds : [esi+0x1C]
        test ecx, ecx
        jne public_6b42684
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
        jbe public_6b422d3
        mov dword ptr ds : [ebx+0xC], eax
        public_6b422d3 : nop
        mov ecx, dword ptr ds : [esi+0x1C]
        test ecx, ecx
        jne public_6b42684
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
        jmp public_6b42338
        public_6b42315 : nop
        mov edi, dword ptr ds : [ebx]
        mov edx, dword ptr ds : [ebx+4]
        inc edi
        mov ecx, edi
        cmp ecx, edx
        mov dword ptr ds : [ebx], edi
        jbe public_6b42326
        mov dword ptr ds : [ebx+0xC], eax
        public_6b42326 : nop
        mov ecx, dword ptr ds : [esi+0x1C]
        test ecx, ecx
        jne public_6b42684
        mov ecx, dword ptr ss : [ebp]
        mov byte ptr ds : [ecx], 0
        inc ecx
        public_6b42338 : nop
        mov dword ptr ss : [ebp], ecx
        mov edi, dword ptr ds : [ebx]
        mov edx, dword ptr ds : [ebx+4]
        inc edi
        mov ecx, edi
        cmp ecx, edx
        mov dword ptr ds : [ebx], edi
        jbe public_6b4234c
        mov dword ptr ds : [ebx+0xC], eax
        public_6b4234c : nop
        mov ecx, dword ptr ds : [esi+0x1C]
        test ecx, ecx
        jne public_6b42684
        mov eax, dword ptr ss : [ebp]
        mov esi, dword ptr ss : [esp+0x28]
        mov dl, byte ptr ds : [esi+0x260]
        mov byte ptr ds : [eax], dl
        inc eax
        lea ecx, ds:[esi+0x264]
        mov dword ptr ss : [ebp], eax
        call public_6b3a4f0
        test eax, eax
        mov dword ptr ss : [esp+0x1C], eax
        je public_6b42527
        mov eax, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [eax]
        cmp ecx, eax
        mov dword ptr ss : [esp+0x24], ecx
        je public_6b42527
        public_6b42392 : nop
        mov esi, dword ptr ds : [ebx]
        mov eax, dword ptr ss : [esp+0x24]
        mov edx, dword ptr ds : [eax+8]
        mov ecx, dword ptr ds : [ebx+4]
        add esi, 4
        mov eax, esi
        cmp eax, ecx
        mov dword ptr ds : [ebx], esi
        mov eax, 0x16
        jbe public_6b423b1
        mov dword ptr ds : [ebx+0xC], eax
        public_6b423b1 : nop
        mov edi, dword ptr ss : [esp+0x10]
        mov ecx, dword ptr ds : [edi+0x1C]
        test ecx, ecx
        jne public_6b42684
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
        jbe public_6b423df
        mov dword ptr ds : [ebx+0xC], eax
        public_6b423df : nop
        mov ecx, dword ptr ds : [edi+0x1C]
        test ecx, ecx
        jne public_6b42684
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
        jbe public_6b4240a
        mov dword ptr ds : [ebx+0xC], eax
        public_6b4240a : nop
        mov ecx, dword ptr ds : [edi+0x1C]
        test ecx, ecx
        jne public_6b42684
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
        jbe public_6b42433
        mov dword ptr ds : [ebx+0xC], eax
        public_6b42433 : nop
        mov ecx, dword ptr ds : [edi+0x1C]
        test ecx, ecx
        jne public_6b42684
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
        jbe public_6b4245d
        mov dword ptr ds : [ebx+0xC], eax
        public_6b4245d : nop
        mov ecx, dword ptr ds : [edi+0x1C]
        test ecx, ecx
        jne public_6b42684
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
        jbe public_6b42483
        mov dword ptr ds : [ebx+0xC], eax
        public_6b42483 : nop
        mov ecx, dword ptr ds : [edi+0x1C]
        test ecx, ecx
        jne public_6b42684
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
        jbe public_6b424ab
        mov dword ptr ds : [ebx+0xC], eax
        public_6b424ab : nop
        mov ecx, dword ptr ds : [edi+0x1C]
        test ecx, ecx
        jne public_6b42684
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
        jbe public_6b424da
        mov dword ptr ds : [ebx+0xC], eax
        public_6b424da : nop
        mov ecx, dword ptr ds : [edi+0x1C]
        test ecx, ecx
        jne public_6b42684
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
        jne public_6b42392
        mov esi, dword ptr ss : [esp+0x28]
        public_6b42527 : nop
        mov edi, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [ebx+4]
        mov edx, dword ptr ds : [esi+0x270]
        add edi, 4
        mov eax, edi
        cmp eax, ecx
        mov dword ptr ds : [ebx], edi
        jbe public_6b42544
        mov dword ptr ds : [ebx+0xC], 0x16
        public_6b42544 : nop
        mov edi, dword ptr ss : [esp+0x10]
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        jne public_6b42638
        mov ecx, dword ptr ss : [ebp]
        mov dword ptr ds : [ecx], edx
        add ecx, 4
        mov dword ptr ss : [ebp], ecx
        mov esi, dword ptr ds : [esi+0x26C]
        mov ecx, dword ptr ds : [esi]
        cmp ecx, esi
        je public_6b425d0
        lea ebx, ds:[ebx]
        public_6b42570 : nop
        mov edx, dword ptr ds : [ebx]
        mov eax, dword ptr ds : [ebx+4]
        add edx, 2
        cmp edx, eax
        mov dword ptr ds : [ebx], edx
        jbe public_6b42585
        mov dword ptr ds : [ebx+0xC], 0x16
        public_6b42585 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        jne public_6b42638
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
        jbe public_6b425b5
        mov dword ptr ds : [ebx+0xC], 0x16
        public_6b425b5 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        jne public_6b42638
        fld dword ptr ds : [ecx+0xC]
        mov edx, dword ptr ss : [ebp]
        fstp dword ptr ds : [edx]
        add edx, 4
        mov dword ptr ss : [ebp], edx
        mov ecx, dword ptr ds : [ecx]
        cmp ecx, esi
        jne public_6b42570
        public_6b425d0 : nop
        mov ecx, dword ptr ss : [esp+0x14]
        mov eax, dword ptr ds : [ecx]
        mov edx, dword ptr ss : [esp+0x10]
        cmp eax, dword ptr ds : [edx+0x28]
        mov dword ptr ss : [esp+0x14], eax
        jne public_6b41b43
        mov esi, edx
        public_6b425e9 : nop
        mov edx, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [ebx+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [ebx], edx
        jbe public_6b42600
        mov dword ptr ds : [ebx+0xC], 0x16
        public_6b42600 : nop
        mov eax, dword ptr ds : [esi+0x1C]
        test eax, eax
        je public_6b42616
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        add esp, 0x10
        ret 0xC
        public_6b42616 : nop
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
        call public_6b4e790
        test eax, eax
        mov dword ptr ds : [esi+0x1C], eax
        je public_6b42647
        public_6b42638 : nop
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        add esp, 0x10
        ret 0xC
        public_6b42647 : nop
        mov eax, dword ptr ds : [ebx]
        mov ecx, dword ptr ss : [esp+0x2C]
        mov dword ptr ds : [ecx], eax
        mov edx, dword ptr ds : [esi+0xC]
        push edx
        call public_6b4ecd0
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
        jbe public_6b42678
        mov dword ptr ds : [ecx+0x10], ebx
        public_6b42678 : nop
        mov eax, dword ptr ds : [ecx+0x18]
        xor edx, edx
        div esi
        mov dword ptr ds : [ecx+8], eax
        xor eax, eax
        public_6b42684 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        add esp, 0x10
        ret 0xC
        UNREACHABLE_TRAP(0x6b41aa0)
    }
}

#undef public_6b41af3
#undef public_6b41b0b
#undef public_6b41b21
#undef public_6b41b43
#undef public_6b41b79
#undef public_6b41bb1
#undef public_6b41bfa
#undef public_6b41c27
#undef public_6b41c57
#undef public_6b41c89
#undef public_6b41c99
#undef public_6b41cd9
#undef public_6b41d15
#undef public_6b41d25
#undef public_6b41d5f
#undef public_6b41d90
#undef public_6b41dbd
#undef public_6b41dea
#undef public_6b41e17
#undef public_6b41e44
#undef public_6b41e71
#undef public_6b41e9e
#undef public_6b41ecb
#undef public_6b41ef8
#undef public_6b41f25
#undef public_6b41f52
#undef public_6b41f80
#undef public_6b41fad
#undef public_6b41fda
#undef public_6b42013
#undef public_6b42039
#undef public_6b42069
#undef public_6b42098
#undef public_6b420c8
#undef public_6b420f8
#undef public_6b42133
#undef public_6b42177
#undef public_6b42181
#undef public_6b42193
#undef public_6b421b3
#undef public_6b421d9
#undef public_6b42209
#undef public_6b42238
#undef public_6b42268
#undef public_6b42298
#undef public_6b422d3
#undef public_6b42315
#undef public_6b42326
#undef public_6b42338
#undef public_6b4234c
#undef public_6b42392
#undef public_6b423b1
#undef public_6b423df
#undef public_6b4240a
#undef public_6b42433
#undef public_6b4245d
#undef public_6b42483
#undef public_6b424ab
#undef public_6b424da
#undef public_6b42527
#undef public_6b42544
#undef public_6b42570
#undef public_6b42585
#undef public_6b425b5
#undef public_6b425d0
#undef public_6b425e9
#undef public_6b42600
#undef public_6b42616
#undef public_6b42638
#undef public_6b42647
#undef public_6b42678
#undef public_6b42684
