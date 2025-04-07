#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d8f4f0);
CLANG_FORWARD_PROC_SYMBOL(public_6d8f510);
CLANG_FORWARD_PROC_SYMBOL(public_6d931e0);
CLANG_FORWARD_PROC_SYMBOL(public_6da1380);
CLANG_FORWARD_PROC_SYMBOL(public_6da13c0);
CLANG_FORWARD_PROC_SYMBOL(public_6da16b0);

#define public_6d9290f _public_6d9290f
#define public_6d92926 _public_6d92926
#define public_6d9293c _public_6d9293c
#define public_6d9295d _public_6d9295d
#define public_6d92973 _public_6d92973
#define public_6d92995 _public_6d92995
#define public_6d929ab _public_6d929ab
#define public_6d929d0 _public_6d929d0
#define public_6d929e7 _public_6d929e7
#define public_6d92a27 _public_6d92a27
#define public_6d92a4d _public_6d92a4d
#define public_6d92a7a _public_6d92a7a
#define public_6d92abc _public_6d92abc
#define public_6d92ae4 _public_6d92ae4
#define public_6d92b12 _public_6d92b12
#define public_6d92b40 _public_6d92b40
#define public_6d92ba4 _public_6d92ba4
#define public_6d92bfa _public_6d92bfa
#define public_6d92c3a _public_6d92c3a
#define public_6d92c4f _public_6d92c4f
#define public_6d92c79 _public_6d92c79
#define public_6d92ca1 _public_6d92ca1
#define public_6d92cb5 _public_6d92cb5
#define public_6d92cc4 _public_6d92cc4
#define public_6d92cd0 _public_6d92cd0
#define public_6d92d03 _public_6d92d03

PROC_DECLARE(0x6d928c0, internal_6d928c0, public_6d928c0);
extern "C" NAKED register_t __cdecl internal_6d928c0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        sub esp, 0x28
        push ebx
        push ebp
        mov ebp, ecx
        mov ecx, dword ptr ss : [esp+0x34]
        push esi
        lea esi, ss:[ebp+0x10]
        push edi
        mov dword ptr ds : [esi+4], eax
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [esi+8], edx
        mov dword ptr ds : [esi], 0
        mov dword ptr ds : [esi+0xC], 0
        mov eax, dword ptr ss : [ebp+0x14]
        push esi
        push eax
        lea edi, ss:[ebp+0x18]
        push edi
        mov ecx, ebp
        call public_6da1380
        test eax, eax
        mov dword ptr ss : [ebp+0x1C], eax
        je public_6d9290f
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        add esp, 0x28
        ret 0xC
        public_6d9290f : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6d92926
        mov dword ptr ds : [esi+0xC], 0x16
        public_6d92926 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        je public_6d9293c
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        add esp, 0x28
        ret 0xC
        public_6d9293c : nop
        mov eax, dword ptr ds : [edi]
        mov ecx, dword ptr ss : [ebp+0x20]
        mov dword ptr ds : [eax], ecx
        add eax, 4
        mov dword ptr ds : [edi], eax
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        inc edx
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6d9295d
        mov dword ptr ds : [esi+0xC], 0x16
        public_6d9295d : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        je public_6d92973
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        add esp, 0x28
        ret 0xC
        public_6d92973 : nop
        mov eax, dword ptr ds : [edi]
        mov dl, byte ptr ss : [ebp+0x24]
        mov byte ptr ds : [eax], dl
        mov cl, byte ptr ss : [ebp+0x30]
        inc eax
        mov dword ptr ds : [edi], eax
        mov ebx, dword ptr ds : [esi]
        mov edx, dword ptr ds : [esi+4]
        inc ebx
        mov eax, ebx
        cmp eax, edx
        mov dword ptr ds : [esi], ebx
        jbe public_6d92995
        mov dword ptr ds : [esi+0xC], 0x16
        public_6d92995 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        je public_6d929ab
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        add esp, 0x28
        ret 0xC
        public_6d929ab : nop
        mov eax, dword ptr ds : [edi]
        mov byte ptr ds : [eax], cl
        inc eax
        test cl, cl
        mov dword ptr ds : [edi], eax
        jbe public_6d92ca1
        mov eax, dword ptr ss : [ebp+0x2C]
        mov ecx, dword ptr ds : [eax]
        cmp ecx, eax
        mov dword ptr ss : [esp+0x40], ecx
        je public_6d92ca1
        nop 
        lea esp, ss:[esp]
        public_6d929d0 : nop
        mov ebx, dword ptr ds : [esi]
        mov edx, dword ptr ds : [esi+4]
        add ebx, 4
        mov eax, ebx
        cmp eax, edx
        mov dword ptr ds : [esi], ebx
        jbe public_6d929e7
        mov dword ptr ds : [esi+0xC], 0x16
        public_6d929e7 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6d92cb5
        mov eax, dword ptr ds : [edi]
        mov ecx, dword ptr ds : [ecx+8]
        mov ebx, dword ptr ds : [public_6db3108]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ss : [esp+0x40]
        add eax, 4
        mov dword ptr ds : [edi], eax
        mov eax, dword ptr ds : [edx+0xC]
        push eax
        call ebx
        mov ecx, dword ptr ds : [esi]
        mov edx, dword ptr ds : [esi+4]
        add ecx, 2
        add esp, 4
        cmp ecx, edx
        mov dword ptr ds : [esi], ecx
        mov edx, 0x16
        jbe public_6d92a27
        mov dword ptr ds : [esi+0xC], edx
        public_6d92a27 : nop
        mov ecx, dword ptr ss : [ebp+0x1C]
        test ecx, ecx
        jne public_6d92cc4
        mov ecx, dword ptr ds : [edi]
        mov word ptr ds : [ecx], ax
        add ecx, 2
        mov dword ptr ds : [edi], ecx
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add eax, 4
        cmp eax, ecx
        mov dword ptr ds : [esi], eax
        jbe public_6d92a4d
        mov dword ptr ds : [esi+0xC], edx
        public_6d92a4d : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6d92cc4
        mov ecx, dword ptr ss : [esp+0x40]
        fld dword ptr ds : [ecx+0x10]
        mov eax, dword ptr ds : [edi]
        add eax, 4
        fstp dword ptr ds : [eax-4]
        mov dword ptr ds : [edi], eax
        mov eax, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add eax, 2
        cmp eax, ecx
        mov dword ptr ds : [esi], eax
        jbe public_6d92a7a
        mov dword ptr ds : [esi+0xC], edx
        public_6d92a7a : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6d92cc4
        mov edx, dword ptr ss : [esp+0x40]
        mov eax, dword ptr ds : [edi]
        mov cx, word ptr ds : [edx+0x14]
        mov word ptr ds : [eax], cx
        mov edx, dword ptr ss : [esp+0x40]
        add eax, 2
        mov dword ptr ds : [edi], eax
        mov eax, dword ptr ds : [edx+0x18]
        push eax
        call ebx
        mov ebx, dword ptr ds : [esi]
        mov edx, dword ptr ds : [esi+4]
        add ebx, 2
        mov ecx, ebx
        add esp, 4
        cmp ecx, edx
        mov dword ptr ds : [esi], ebx
        mov edx, 0x16
        jbe public_6d92abc
        mov dword ptr ds : [esi+0xC], edx
        public_6d92abc : nop
        mov ecx, dword ptr ss : [ebp+0x1C]
        test ecx, ecx
        jne public_6d92cc4
        mov ecx, dword ptr ds : [edi]
        mov word ptr ds : [ecx], ax
        add ecx, 2
        mov dword ptr ds : [edi], ecx
        mov ebx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add ebx, 4
        mov eax, ebx
        cmp eax, ecx
        mov dword ptr ds : [esi], ebx
        jbe public_6d92ae4
        mov dword ptr ds : [esi+0xC], edx
        public_6d92ae4 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6d92cc4
        mov ecx, dword ptr ss : [esp+0x40]
        fld dword ptr ds : [ecx+0x1C]
        mov eax, dword ptr ds : [edi]
        fstp dword ptr ds : [eax]
        add eax, 4
        mov dword ptr ds : [edi], eax
        mov ebx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add ebx, 4
        mov eax, ebx
        cmp eax, ecx
        mov dword ptr ds : [esi], ebx
        jbe public_6d92b12
        mov dword ptr ds : [esi+0xC], edx
        public_6d92b12 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6d92cc4
        mov eax, dword ptr ds : [edi]
        mov ecx, dword ptr ss : [esp+0x40]
        mov ecx, dword ptr ds : [ecx+0x20]
        mov dword ptr ds : [eax], ecx
        add eax, 4
        mov dword ptr ds : [edi], eax
        mov ebx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add ebx, 0xC
        mov eax, ebx
        cmp eax, ecx
        mov dword ptr ds : [esi], ebx
        jbe public_6d92b40
        mov dword ptr ds : [esi+0xC], edx
        public_6d92b40 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6d92cc4
        lea ecx, ss:[esp+0x40]
        call public_6d931e0
        mov edx, dword ptr ds : [eax+0x1C]
        mov ecx, dword ptr ds : [eax+0x20]
        mov ebx, dword ptr ds : [edi]
        add eax, 0x1C
        mov dword ptr ss : [esp+0x10], edx
        mov edx, dword ptr ds : [eax+8]
        lea eax, ss:[esp+0x10]
        mov dword ptr ss : [esp+0x14], ecx
        push eax
        mov ecx, ebx
        mov dword ptr ss : [esp+0x1C], edx
        call public_6d8f510
        add ebx, 0xC
        mov dword ptr ds : [edi], ebx
        call dword ptr ds : [public_6db305c]
        test al, al
        je public_6d92c3a
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 0xC
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6d92ba4
        mov dword ptr ds : [esi+0xC], 0x16
        public_6d92ba4 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6d92cb5
        lea ecx, ss:[esp+0x40]
        call public_6d931e0
        mov ecx, dword ptr ds : [eax+0x28]
        mov edx, dword ptr ds : [eax+0x2C]
        mov ebx, dword ptr ds : [edi]
        add eax, 0x28
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ss : [esp+0x1C], ecx
        lea ecx, ss:[esp+0x1C]
        push ecx
        mov ecx, ebx
        mov dword ptr ss : [esp+0x24], edx
        mov dword ptr ss : [esp+0x28], eax
        call public_6d8f510
        add ebx, 0xC
        mov dword ptr ds : [edi], ebx
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 0x10
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6d92bfa
        mov dword ptr ds : [esi+0xC], 0x16
        public_6d92bfa : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6d92cb5
        mov edx, dword ptr ss : [esp+0x40]
        mov ebx, dword ptr ds : [edi]
        add edx, 0x3C
        mov eax, dword ptr ds : [edx]
        mov ecx, dword ptr ds : [edx+4]
        mov dword ptr ss : [esp+0x28], eax
        mov eax, dword ptr ds : [edx+8]
        mov dword ptr ss : [esp+0x2C], ecx
        mov ecx, dword ptr ds : [edx+0xC]
        lea edx, ss:[esp+0x28]
        mov dword ptr ss : [esp+0x34], ecx
        push edx
        mov ecx, ebx
        mov dword ptr ss : [esp+0x34], eax
        call public_6d8f4f0
        add ebx, 0x10
        mov dword ptr ds : [edi], ebx
        public_6d92c3a : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        inc edx
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6d92c4f
        mov dword ptr ds : [esi+0xC], 0x16
        public_6d92c4f : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6d92cb5
        mov ecx, dword ptr ss : [esp+0x40]
        mov dl, byte ptr ds : [ecx+0x4C]
        mov eax, dword ptr ds : [edi]
        mov byte ptr ds : [eax], dl
        inc eax
        mov dword ptr ds : [edi], eax
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        inc edx
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6d92c79
        mov dword ptr ds : [esi+0xC], 0x16
        public_6d92c79 : nop
        mov eax, dword ptr ss : [ebp+0x1C]
        test eax, eax
        jne public_6d92cb5
        mov ecx, dword ptr ss : [esp+0x40]
        mov dl, byte ptr ds : [ecx+0x4D]
        mov eax, dword ptr ds : [edi]
        mov byte ptr ds : [eax], dl
        inc eax
        mov dword ptr ds : [edi], eax
        mov eax, dword ptr ss : [esp+0x40]
        mov ecx, dword ptr ds : [eax]
        cmp ecx, dword ptr ss : [ebp+0x2C]
        mov dword ptr ss : [esp+0x40], ecx
        jne public_6d929d0
        public_6d92ca1 : nop
        mov ecx, dword ptr ss : [ebp+0x14]
        push esi
        push ecx
        push edi
        mov ecx, ebp
        call public_6da13c0
        test eax, eax
        mov dword ptr ss : [ebp+0x1C], eax
        je public_6d92cd0
        public_6d92cb5 : nop
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        add esp, 0x28
        ret 0xC
        public_6d92cc4 : nop
        pop edi
        pop esi
        pop ebp
        mov eax, edx
        pop ebx
        add esp, 0x28
        ret 0xC
        public_6d92cd0 : nop
        mov edx, dword ptr ds : [esi]
        mov eax, dword ptr ss : [esp+0x44]
        mov dword ptr ds : [eax], edx
        mov ecx, dword ptr ss : [ebp+0xC]
        push ecx
        call public_6da16b0
        mov ecx, eax
        mov ebp, dword ptr ds : [ecx]
        mov ebx, dword ptr ds : [ecx+0x18]
        mov eax, dword ptr ds : [ecx+0x10]
        add esp, 4
        inc ebp
        mov dword ptr ds : [ecx], ebp
        mov edx, dword ptr ds : [esi]
        add ebx, edx
        mov dword ptr ds : [ecx+0x18], ebx
        mov esi, dword ptr ds : [esi]
        cmp esi, eax
        mov edi, ebp
        jbe public_6d92d03
        mov dword ptr ds : [ecx+0x10], esi
        public_6d92d03 : nop
        mov eax, dword ptr ds : [ecx+0x18]
        xor edx, edx
        div edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr ds : [ecx+8], eax
        xor eax, eax
        add esp, 0x28
        ret 0xC
        UNREACHABLE_TRAP(0x6d928c0)
    }
}

#undef public_6d9290f
#undef public_6d92926
#undef public_6d9293c
#undef public_6d9295d
#undef public_6d92973
#undef public_6d92995
#undef public_6d929ab
#undef public_6d929d0
#undef public_6d929e7
#undef public_6d92a27
#undef public_6d92a4d
#undef public_6d92a7a
#undef public_6d92abc
#undef public_6d92ae4
#undef public_6d92b12
#undef public_6d92b40
#undef public_6d92ba4
#undef public_6d92bfa
#undef public_6d92c3a
#undef public_6d92c4f
#undef public_6d92c79
#undef public_6d92ca1
#undef public_6d92cb5
#undef public_6d92cc4
#undef public_6d92cd0
#undef public_6d92d03
