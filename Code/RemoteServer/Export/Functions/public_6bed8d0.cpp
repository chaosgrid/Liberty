#include "RemoteServer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6bed8d0);
CLANG_FORWARD_PROC_SYMBOL(public_6bedf90);
CLANG_FORWARD_PROC_SYMBOL(public_6bee1f0);
CLANG_FORWARD_PROC_SYMBOL(public_6bee240);
CLANG_FORWARD_PROC_SYMBOL(public_6bee2a0);
CLANG_FORWARD_PROC_SYMBOL(public_6bee2c0);
CLANG_FORWARD_PROC_SYMBOL(public_6bee370);

#define public_6bed8e8 _public_6bed8e8
#define public_6bed901 _public_6bed901
#define public_6bed904 _public_6bed904
#define public_6bed90d _public_6bed90d
#define public_6bed977 _public_6bed977
#define public_6bed98f _public_6bed98f
#define public_6bed999 _public_6bed999
#define public_6bed99d _public_6bed99d
#define public_6bed9b0 _public_6bed9b0
#define public_6bed9eb _public_6bed9eb
#define public_6bed9fa _public_6bed9fa
#define public_6beda1b _public_6beda1b
#define public_6beda3c _public_6beda3c
#define public_6beda4a _public_6beda4a
#define public_6beda69 _public_6beda69
#define public_6beda75 _public_6beda75
#define public_6beda91 _public_6beda91
#define public_6bedac3 _public_6bedac3
#define public_6bedacc _public_6bedacc
#define public_6bedb09 _public_6bedb09

PROC_DECLARE(0x6bed8d0, internal_6bed8d0, public_6bed8d0);
extern "C" NAKED register_t __cdecl internal_6bed8d0()
{
    __asm
    {
        push ecx
        push ebx
        mov ebx, dword ptr ss : [esp+0x10]
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov esi, dword ptr ds : [edi+4]
        mov ebp, dword ptr ds : [esi+4]
        cmp ebp, dword ptr ds : [edi+8]
        mov al, 1
        je public_6bed90d
        public_6bed8e8 : nop
        lea eax, ss:[ebp+0xC]
        push eax
        push ebx
        mov esi, ebp
        call dword ptr ds : [public_6c0b188]
        add esp, 8
        test al, al
        je public_6bed901
        mov ebp, dword ptr ss : [ebp]
        jmp public_6bed904
        public_6bed901 : nop
        mov ebp, dword ptr ss : [ebp+8]
        public_6bed904 : nop
        cmp ebp, dword ptr ds : [edi+8]
        mov ebx, dword ptr ss : [esp+0x1C]
        jne public_6bed8e8
        public_6bed90d : nop
        mov cl, byte ptr ds : [edi+0xC]
        test cl, cl
        je public_6beda91
        push 0
        push esi
        mov ecx, edi
        call public_6bee2a0
        mov ecx, dword ptr ds : [edi+8]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [edi+8]
        mov dword ptr ss : [esp+0x1C], eax
        mov dword ptr ds : [eax+8], edx
        add eax, 0xC
        push ebx
        push eax
        call public_6bee370
        mov ecx, dword ptr ds : [edi+0x10]
        mov eax, dword ptr ds : [edi+4]
        add esp, 8
        inc ecx
        cmp esi, eax
        mov dword ptr ds : [edi+0x10], ecx
        je public_6bed977
        cmp ebp, dword ptr ds : [edi+8]
        jne public_6bed977
        lea eax, ds:[esi+0xC]
        push eax
        push ebx
        call dword ptr ds : [public_6c0b188]
        add esp, 8
        test al, al
        jne public_6bed977
        mov ebx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi+8], ebx
        mov eax, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [eax+8]
        jne public_6bed99d
        mov dword ptr ds : [eax+8], ebx
        jmp public_6bed99d
        public_6bed977 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi], ecx
        mov eax, dword ptr ds : [edi+4]
        cmp esi, eax
        jne public_6bed98f
        mov dword ptr ds : [eax+4], ecx
        mov edx, dword ptr ds : [edi+4]
        mov dword ptr ds : [edx+8], ecx
        jmp public_6bed999
        public_6bed98f : nop
        cmp esi, dword ptr ds : [eax]
        jne public_6bed999
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [eax], ecx
        public_6bed999 : nop
        mov ebx, dword ptr ss : [esp+0x1C]
        public_6bed99d : nop
        mov edx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [edx+4]
        mov esi, ebx
        je public_6beda75
        nop 
        lea esp, ss:[esp]
        public_6bed9b0 : nop
        mov eax, dword ptr ds : [esi+4]
        mov cl, byte ptr ds : [eax+0x20]
        test cl, cl
        jne public_6beda75
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        cmp eax, ecx
        jne public_6beda1b
        mov ecx, dword ptr ds : [edx+8]
        mov dl, byte ptr ds : [ecx+0x20]
        test dl, dl
        jne public_6bed9eb
        mov byte ptr ds : [eax+0x20], 1
        mov byte ptr ds : [ecx+0x20], 1
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x20], 0
        mov edx, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [edx+4]
        jmp public_6beda69
        public_6bed9eb : nop
        cmp esi, dword ptr ds : [eax+8]
        jne public_6bed9fa
        mov esi, eax
        push esi
        mov ecx, edi
        call public_6bee1f0
        public_6bed9fa : nop
        mov eax, dword ptr ds : [esi+4]
        mov byte ptr ds : [eax+0x20], 1
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x20], 0
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        push ecx
        mov ecx, edi
        call public_6bee240
        jmp public_6beda69
        public_6beda1b : nop
        mov dl, byte ptr ds : [ecx+0x20]
        test dl, dl
        jne public_6beda3c
        mov byte ptr ds : [eax+0x20], 1
        mov byte ptr ds : [ecx+0x20], 1
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        mov byte ptr ds : [eax+0x20], 0
        mov ecx, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [ecx+4]
        jmp public_6beda69
        public_6beda3c : nop
        cmp esi, dword ptr ds : [eax]
        jne public_6beda4a
        mov esi, eax
        push esi
        mov ecx, edi
        call public_6bee240
        public_6beda4a : nop
        mov edx, dword ptr ds : [esi+4]
        mov byte ptr ds : [edx+0x20], 1
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x20], 0
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        push eax
        mov ecx, edi
        call public_6bee1f0
        public_6beda69 : nop
        mov ecx, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [ecx+4]
        jne public_6bed9b0
        public_6beda75 : nop
        mov edx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [edx+4]
        pop edi
        mov byte ptr ds : [eax+0x20], 1
        mov eax, dword ptr ss : [esp+0x14]
        pop esi
        pop ebp
        mov dword ptr ds : [eax], ebx
        mov byte ptr ds : [eax+4], 1
        pop ebx
        pop ecx
        ret 8
        public_6beda91 : nop
        test al, al
        mov dword ptr ss : [esp+0x10], esi
        je public_6bedacc
        mov ecx, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [ecx]
        jne public_6bedac3
        push ebx
        push esi
        push ebp
        lea edx, ss:[esp+0x28]
        push edx
        mov ecx, edi
        call public_6bedf90
        mov ecx, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        pop ebp
        mov byte ptr ds : [eax+4], 1
        mov dword ptr ds : [eax], ecx
        pop ebx
        pop ecx
        ret 8
        public_6bedac3 : nop
        lea ecx, ss:[esp+0x10]
        call public_6bee2c0
        public_6bedacc : nop
        mov edx, dword ptr ss : [esp+0x10]
        lea eax, ds:[edx+0xC]
        push ebx
        push eax
        call dword ptr ds : [public_6c0b188]
        add esp, 8
        test al, al
        je public_6bedb09
        mov eax, dword ptr ss : [esp+0x1C]
        push eax
        push esi
        push ebp
        lea ecx, ss:[esp+0x28]
        push ecx
        mov ecx, edi
        call public_6bedf90
        mov edx, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        pop ebp
        mov dword ptr ds : [eax], edx
        mov byte ptr ds : [eax+4], 1
        pop ebx
        pop ecx
        ret 8
        public_6bedb09 : nop
        mov eax, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ss : [esp+0x10]
        pop edi
        pop esi
        pop ebp
        mov byte ptr ds : [eax+4], 0
        mov dword ptr ds : [eax], ecx
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6bed8d0)
    }
}

#undef public_6bed8e8
#undef public_6bed901
#undef public_6bed904
#undef public_6bed90d
#undef public_6bed977
#undef public_6bed98f
#undef public_6bed999
#undef public_6bed99d
#undef public_6bed9b0
#undef public_6bed9eb
#undef public_6bed9fa
#undef public_6beda1b
#undef public_6beda3c
#undef public_6beda4a
#undef public_6beda69
#undef public_6beda75
#undef public_6beda91
#undef public_6bedac3
#undef public_6bedacc
#undef public_6bedb09
