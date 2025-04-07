#include "RendComp-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c21f20);
CLANG_FORWARD_PROC_SYMBOL(public_6c22170);
CLANG_FORWARD_PROC_SYMBOL(public_6c223f0);
CLANG_FORWARD_PROC_SYMBOL(public_6c2a060);
CLANG_FORWARD_PROC_SYMBOL(public_6c2a320);
CLANG_FORWARD_PROC_SYMBOL(public_6c2a340);
CLANG_FORWARD_PROC_SYMBOL(public_6c349f0);

#define public_6c2a080 _public_6c2a080
#define public_6c2a093 _public_6c2a093
#define public_6c2a096 _public_6c2a096
#define public_6c2a09a _public_6c2a09a
#define public_6c2a0f9 _public_6c2a0f9
#define public_6c2a111 _public_6c2a111
#define public_6c2a11b _public_6c2a11b
#define public_6c2a11f _public_6c2a11f
#define public_6c2a130 _public_6c2a130
#define public_6c2a16b _public_6c2a16b
#define public_6c2a17a _public_6c2a17a
#define public_6c2a19b _public_6c2a19b
#define public_6c2a1bc _public_6c2a1bc
#define public_6c2a1ca _public_6c2a1ca
#define public_6c2a1e9 _public_6c2a1e9
#define public_6c2a1f5 _public_6c2a1f5
#define public_6c2a211 _public_6c2a211
#define public_6c2a22c _public_6c2a22c
#define public_6c2a233 _public_6c2a233
#define public_6c2a256 _public_6c2a256

PROC_DECLARE(0x6c2a060, internal_6c2a060, public_6c2a060);
extern "C" NAKED register_t __cdecl internal_6c2a060()
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
        je public_6c2a09a
        lea esp, ss:[esp]
        public_6c2a080 : nop
        mov eax, dword ptr ds : [ebx]
        cmp eax, dword ptr ss : [ebp+0xC]
        mov esi, ebp
        setl al
        test al, al
        je public_6c2a093
        mov ebp, dword ptr ss : [ebp]
        jmp public_6c2a096
        public_6c2a093 : nop
        mov ebp, dword ptr ss : [ebp+8]
        public_6c2a096 : nop
        cmp ebp, edx
        jne public_6c2a080
        public_6c2a09a : nop
        mov dl, byte ptr ds : [edi+0xC]
        test dl, dl
        je public_6c2a211
        push 0
        push esi
        mov ecx, edi
        call public_6c2a320
        mov ecx, dword ptr ds : [edi+8]
        mov dword ptr ds : [eax], ecx
        mov edx, dword ptr ds : [edi+8]
        mov dword ptr ss : [esp+0x1C], eax
        mov dword ptr ds : [eax+8], edx
        add eax, 0xC
        push ebx
        push eax
        call public_6c223f0
        mov ecx, dword ptr ds : [edi+0x10]
        mov eax, dword ptr ds : [edi+4]
        add esp, 8
        inc ecx
        cmp esi, eax
        mov dword ptr ds : [edi+0x10], ecx
        je public_6c2a0f9
        cmp ebp, dword ptr ds : [edi+8]
        jne public_6c2a0f9
        mov eax, dword ptr ds : [ebx]
        cmp eax, dword ptr ds : [esi+0xC]
        jl public_6c2a0f9
        mov ebx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi+8], ebx
        mov eax, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [eax+8]
        jne public_6c2a11f
        mov dword ptr ds : [eax+8], ebx
        jmp public_6c2a11f
        public_6c2a0f9 : nop
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [esi], ecx
        mov eax, dword ptr ds : [edi+4]
        cmp esi, eax
        jne public_6c2a111
        mov dword ptr ds : [eax+4], ecx
        mov edx, dword ptr ds : [edi+4]
        mov dword ptr ds : [edx+8], ecx
        jmp public_6c2a11b
        public_6c2a111 : nop
        cmp esi, dword ptr ds : [eax]
        jne public_6c2a11b
        mov ecx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [eax], ecx
        public_6c2a11b : nop
        mov ebx, dword ptr ss : [esp+0x1C]
        public_6c2a11f : nop
        mov edx, dword ptr ds : [edi+4]
        cmp ebx, dword ptr ds : [edx+4]
        mov esi, ebx
        je public_6c2a1f5
        lea ecx, ds:[ecx]
        public_6c2a130 : nop
        mov eax, dword ptr ds : [esi+4]
        mov cl, byte ptr ds : [eax+0x14]
        test cl, cl
        jne public_6c2a1f5
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx]
        cmp eax, ecx
        jne public_6c2a19b
        mov ecx, dword ptr ds : [edx+8]
        mov dl, byte ptr ds : [ecx+0x14]
        test dl, dl
        jne public_6c2a16b
        mov byte ptr ds : [eax+0x14], 1
        mov byte ptr ds : [ecx+0x14], 1
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x14], 0
        mov edx, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [edx+4]
        jmp public_6c2a1e9
        public_6c2a16b : nop
        cmp esi, dword ptr ds : [eax+8]
        jne public_6c2a17a
        mov esi, eax
        push esi
        mov ecx, edi
        call public_6c349f0
        public_6c2a17a : nop
        mov eax, dword ptr ds : [esi+4]
        mov byte ptr ds : [eax+0x14], 1
        mov ecx, dword ptr ds : [esi+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x14], 0
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        push ecx
        mov ecx, edi
        call public_6c22170
        jmp public_6c2a1e9
        public_6c2a19b : nop
        mov dl, byte ptr ds : [ecx+0x14]
        test dl, dl
        jne public_6c2a1bc
        mov byte ptr ds : [eax+0x14], 1
        mov byte ptr ds : [ecx+0x14], 1
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        mov byte ptr ds : [eax+0x14], 0
        mov ecx, dword ptr ds : [esi+4]
        mov esi, dword ptr ds : [ecx+4]
        jmp public_6c2a1e9
        public_6c2a1bc : nop
        cmp esi, dword ptr ds : [eax]
        jne public_6c2a1ca
        mov esi, eax
        push esi
        mov ecx, edi
        call public_6c22170
        public_6c2a1ca : nop
        mov edx, dword ptr ds : [esi+4]
        mov byte ptr ds : [edx+0x14], 1
        mov eax, dword ptr ds : [esi+4]
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x14], 0
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        push eax
        mov ecx, edi
        call public_6c349f0
        public_6c2a1e9 : nop
        mov ecx, dword ptr ds : [edi+4]
        cmp esi, dword ptr ds : [ecx+4]
        jne public_6c2a130
        public_6c2a1f5 : nop
        mov edx, dword ptr ds : [edi+4]
        mov eax, dword ptr ds : [edx+4]
        pop edi
        mov byte ptr ds : [eax+0x14], 1
        mov eax, dword ptr ss : [esp+0x14]
        pop esi
        pop ebp
        mov dword ptr ds : [eax], ebx
        mov byte ptr ds : [eax+4], 1
        pop ebx
        pop ecx
        ret 8
        public_6c2a211 : nop
        test al, al
        mov edx, esi
        mov dword ptr ss : [esp+0x10], edx
        je public_6c2a22c
        cmp esi, dword ptr ds : [ecx]
        je public_6c2a233
        lea ecx, ss:[esp+0x10]
        call public_6c2a340
        mov edx, dword ptr ss : [esp+0x10]
        public_6c2a22c : nop
        mov eax, dword ptr ds : [edx+0xC]
        cmp eax, dword ptr ds : [ebx]
        jge public_6c2a256
        public_6c2a233 : nop
        push ebx
        push esi
        push ebp
        lea ecx, ss:[esp+0x28]
        push ecx
        mov ecx, edi
        call public_6c21f20
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
        public_6c2a256 : nop
        mov eax, dword ptr ss : [esp+0x18]
        pop edi
        pop esi
        pop ebp
        mov byte ptr ds : [eax+4], 0
        mov dword ptr ds : [eax], edx
        pop ebx
        pop ecx
        ret 8
        UNREACHABLE_TRAP(0x6c2a060)
    }
}

#undef public_6c2a080
#undef public_6c2a093
#undef public_6c2a096
#undef public_6c2a09a
#undef public_6c2a0f9
#undef public_6c2a111
#undef public_6c2a11b
#undef public_6c2a11f
#undef public_6c2a130
#undef public_6c2a16b
#undef public_6c2a17a
#undef public_6c2a19b
#undef public_6c2a1bc
#undef public_6c2a1ca
#undef public_6c2a1e9
#undef public_6c2a1f5
#undef public_6c2a211
#undef public_6c2a22c
#undef public_6c2a233
#undef public_6c2a256
