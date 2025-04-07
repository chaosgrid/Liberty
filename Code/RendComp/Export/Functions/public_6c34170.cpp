#include "RendComp-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c22170);
CLANG_FORWARD_PROC_SYMBOL(public_6c34170);
CLANG_FORWARD_PROC_SYMBOL(public_6c347a0);
CLANG_FORWARD_PROC_SYMBOL(public_6c349f0);
CLANG_FORWARD_PROC_SYMBOL(public_6c34ae0);
CLANG_FORWARD_PROC_SYMBOL(public_6c34b00);
CLANG_FORWARD_PROC_SYMBOL(public_6c34de0);

#define public_6c34190 _public_6c34190
#define public_6c341a3 _public_6c341a3
#define public_6c341a6 _public_6c341a6
#define public_6c341aa _public_6c341aa
#define public_6c34209 _public_6c34209
#define public_6c34221 _public_6c34221
#define public_6c3422b _public_6c3422b
#define public_6c3422f _public_6c3422f
#define public_6c34240 _public_6c34240
#define public_6c3427b _public_6c3427b
#define public_6c3428a _public_6c3428a
#define public_6c342ab _public_6c342ab
#define public_6c342cc _public_6c342cc
#define public_6c342da _public_6c342da
#define public_6c342f9 _public_6c342f9
#define public_6c34305 _public_6c34305
#define public_6c34321 _public_6c34321
#define public_6c3433c _public_6c3433c
#define public_6c34343 _public_6c34343
#define public_6c34366 _public_6c34366

PROC_DECLARE(0x6c34170, internal_6c34170, public_6c34170);
extern "C" NAKED register_t __cdecl internal_6c34170()
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
        mov ecx, dword ptr ds : [edi+4]
        mov ebp, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [edi+8]
        cmp ebp, edx
        mov esi, ecx
        mov al, 1
        je public_6c341aa
        lea esp, ss:[esp]
        public_6c34190 : nop
        mov eax, dword ptr ds : [ebx]
        cmp eax, dword ptr ss : [ebp+0xC]
        mov esi, ebp
        setl al
        test al, al
        je public_6c341a3
        mov ebp, dword ptr ss : [ebp]
        jmp public_6c341a6
        public_6c341a3 : nop
        mov ebp, dword ptr ss : [ebp+8]
        public_6c341a6 : nop
        cmp ebp, edx
        jne public_6c34190
        public_6c341aa : nop
        mov dl, byte ptr ds : [edi+0xC]
        test dl, dl
        je public_6c34321
        push 0
        push esi
        mov ecx, edi
        call public_6c34ae0
        mov ecx, dword ptr ds : [edi+8]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [edi+8]
        mov dword ptr ss : [esp+0x1C], eax
        mov dword ptr ds : [eax+8], edx
        add eax, 0xC
        push ebx
        push eax
        call public_6c34de0
        mov ecx, dword ptr ds : [edi+0x10]
        mov eax, dword ptr ds : [edi+4]
        add esp, 8
        inc ecx
        cmp esi, eax
        mov dword ptr ds : [edi+0x10], ecx
        je public_6c34209
        cmp ebp, dword ptr ds : [edi+8]
        jne public_6c34209
        mov eax, dword ptr ds : [ebx]
        cmp eax, dword ptr ds : [esi+0xC]
        jl public_6c34209
        mov ebx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi+8], ebx
        mov eax, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [eax+8]
        jne public_6c3422f
        mov dword ptr ds : [eax+8], ebx
        jmp public_6c3422f
        public_6c34209 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi], ecx
        mov eax, dword ptr ds : [edi+4]
        cmp esi, eax
        jne public_6c34221
        mov dword ptr ds : [eax+4], ecx
        mov edx, dword ptr ds : [edi+4]
        mov dword ptr ds : [edx+8], ecx
        jmp public_6c3422b
        public_6c34221 : nop
        cmp esi, dword ptr ds : [eax]
        jne public_6c3422b
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [eax], ecx
        public_6c3422b : nop
        mov ebx, dword ptr ss : [esp+0x1C]
        public_6c3422f : nop
        mov edx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [edx+4]
        mov esi, ebx
        je public_6c34305
        lea ecx, ds:[ecx]
        public_6c34240 : nop
        mov eax, dword ptr ds : [esi+4]
        mov cl, byte ptr ds : [eax+0x24]
        test cl, cl
        jne public_6c34305
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        cmp eax, ecx
        jne public_6c342ab
        mov ecx, dword ptr ds : [edx+8]
        mov dl, byte ptr ds : [ecx+0x24]
        test dl, dl
        jne public_6c3427b
        mov byte ptr ds : [eax+0x24], 1
        mov byte ptr ds : [ecx+0x24], 1
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x24], 0
        mov edx, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [edx+4]
        jmp public_6c342f9
        public_6c3427b : nop
        cmp esi, dword ptr ds : [eax+8]
        jne public_6c3428a
        mov esi, eax
        push esi
        mov ecx, edi
        call public_6c349f0
        public_6c3428a : nop
        mov eax, dword ptr ds : [esi+4]
        mov byte ptr ds : [eax+0x24], 1
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x24], 0
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        push ecx
        mov ecx, edi
        call public_6c22170
        jmp public_6c342f9
        public_6c342ab : nop
        mov dl, byte ptr ds : [ecx+0x24]
        test dl, dl
        jne public_6c342cc
        mov byte ptr ds : [eax+0x24], 1
        mov byte ptr ds : [ecx+0x24], 1
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        mov byte ptr ds : [eax+0x24], 0
        mov ecx, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [ecx+4]
        jmp public_6c342f9
        public_6c342cc : nop
        cmp esi, dword ptr ds : [eax]
        jne public_6c342da
        mov esi, eax
        push esi
        mov ecx, edi
        call public_6c22170
        public_6c342da : nop
        mov edx, dword ptr ds : [esi+4]
        mov byte ptr ds : [edx+0x24], 1
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x24], 0
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        push eax
        mov ecx, edi
        call public_6c349f0
        public_6c342f9 : nop
        mov ecx, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [ecx+4]
        jne public_6c34240
        public_6c34305 : nop
        mov edx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [edx+4]
        pop edi
        mov byte ptr ds : [eax+0x24], 1
        mov eax, dword ptr ss : [esp+0x14]
        pop esi
        pop ebp
        mov dword ptr ds : [eax], ebx
        mov byte ptr ds : [eax+4], 1
        pop ebx
        pop ecx
        ret 8
        public_6c34321 : nop
        test al, al
        mov edx, esi
        mov dword ptr ss : [esp+0x10], edx
        je public_6c3433c
        cmp esi, dword ptr ds : [ecx]
        je public_6c34343
        lea ecx, ss:[esp+0x10]
        call public_6c34b00
        mov edx, dword ptr ss : [esp+0x10]
        public_6c3433c : nop
        mov eax, dword ptr ds : [edx+0xC]
        cmp eax, dword ptr ds : [ebx]
        jge public_6c34366
        public_6c34343 : nop
        push ebx
        push esi
        push ebp
        lea ecx, ss:[esp+0x28]
        push ecx
        mov ecx, edi
        call public_6c347a0
        mov edx, dword ptr ds : [eax]
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        pop ebp
        mov byte ptr ds : [eax+4], 1
        mov dword ptr ds : [eax], edx
        pop ebx
        pop ecx
        ret 8
        public_6c34366 : nop
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        pop ebp
        mov byte ptr ds : [eax+4], 0
        mov dword ptr ds : [eax], edx
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6c34170)
    }
}

#undef public_6c34190
#undef public_6c341a3
#undef public_6c341a6
#undef public_6c341aa
#undef public_6c34209
#undef public_6c34221
#undef public_6c3422b
#undef public_6c3422f
#undef public_6c34240
#undef public_6c3427b
#undef public_6c3428a
#undef public_6c342ab
#undef public_6c342cc
#undef public_6c342da
#undef public_6c342f9
#undef public_6c34305
#undef public_6c34321
#undef public_6c3433c
#undef public_6c34343
#undef public_6c34366
