#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f2dfd0);
CLANG_FORWARD_PROC_SYMBOL(public_6f2f0e0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6f2e039 _public_6f2e039
#define public_6f2e04d _public_6f2e04d
#define public_6f2e053 _public_6f2e053
#define public_6f2e061 _public_6f2e061
#define public_6f2e0a2 _public_6f2e0a2
#define public_6f2e0bb _public_6f2e0bb
#define public_6f2e0ce _public_6f2e0ce
#define public_6f2e0d9 _public_6f2e0d9
#define public_6f2e0dc _public_6f2e0dc
#define public_6f2e0e1 _public_6f2e0e1
#define public_6f2e10a _public_6f2e10a
#define public_6f2e123 _public_6f2e123
#define public_6f2e136 _public_6f2e136
#define public_6f2e140 _public_6f2e140
#define public_6f2e163 _public_6f2e163
#define public_6f2e17b _public_6f2e17b
#define public_6f2e18e _public_6f2e18e
#define public_6f2e19b _public_6f2e19b
#define public_6f2e19d _public_6f2e19d
#define public_6f2e1a3 _public_6f2e1a3
#define public_6f2e1cc _public_6f2e1cc
#define public_6f2e1df _public_6f2e1df
#define public_6f2e1ea _public_6f2e1ea
#define public_6f2e1ed _public_6f2e1ed
#define public_6f2e1ef _public_6f2e1ef
#define public_6f2e1f2 _public_6f2e1f2
#define public_6f2e1fe _public_6f2e1fe

PROC_DECLARE(0x6f2dfd0, internal_6f2dfd0, public_6f2dfd0);
extern "C" NAKED register_t __cdecl internal_6f2dfd0()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        push edi
        push 0x28
        mov esi, ecx
        call public_6fa912a
        mov edi, dword ptr ss : [esp+0x20]
        mov ebp, dword ptr ss : [esp+0x24]
        mov ebx, eax
        mov dword ptr ds : [ebx+4], edi
        mov byte ptr ds : [ebx+0x24], 0
        mov byte ptr ds : [ebx+0x25], 0
        mov eax, dword ptr ds : [esi+8]
        mov dword ptr ds : [ebx], eax
        mov ecx, dword ptr ds : [esi+8]
        lea edx, ds:[ebx+0xC]
        push ebp
        push edx
        mov dword ptr ds : [ebx+8], ecx
        call public_6f2f0e0
        mov ecx, dword ptr ds : [esi+0x10]
        mov eax, dword ptr ds : [esi+4]
        add esp, 0xC
        inc ecx
        cmp edi, eax
        mov dword ptr ds : [esi+0x10], ecx
        je public_6f2e039
        mov eax, dword ptr ss : [esp+0x18]
        cmp eax, dword ptr ds : [esi+8]
        jne public_6f2e039
        mov ecx, dword ptr ss : [ebp]
        cmp ecx, dword ptr ds : [edi+0xC]
        jb public_6f2e039
        mov dword ptr ds : [edi+8], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, dword ptr ds : [eax+8]
        jne public_6f2e053
        mov dword ptr ds : [eax+8], ebx
        jmp public_6f2e053
        public_6f2e039 : nop
        mov dword ptr ds : [edi], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, eax
        jne public_6f2e04d
        mov dword ptr ds : [eax+4], ebx
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [edx+8], ebx
        jmp public_6f2e053
        public_6f2e04d : nop
        cmp edi, dword ptr ds : [eax]
        jne public_6f2e053
        mov dword ptr ds : [eax], ebx
        public_6f2e053 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp ebx, dword ptr ds : [ecx+4]
        mov eax, ebx
        je public_6f2e1fe
        public_6f2e061 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [ecx+0x24]
        test dl, dl
        jne public_6f2e1fe
        mov edi, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [edi]
        cmp ecx, edx
        jne public_6f2e140
        mov edx, dword ptr ds : [edi+8]
        cmp byte ptr ds : [edx+0x24], 0
        jne public_6f2e0a2
        mov byte ptr ds : [ecx+0x24], 1
        mov byte ptr ds : [edx+0x24], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x24], 0
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [edx+4]
        jmp public_6f2e1f2
        public_6f2e0a2 : nop
        cmp eax, dword ptr ds : [ecx+8]
        jne public_6f2e0e1
        mov eax, ecx
        mov ecx, dword ptr ds : [eax+8]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax+8], edx
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [esi+8]
        je public_6f2e0bb
        mov dword ptr ds : [edx+4], eax
        public_6f2e0bb : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_6f2e0ce
        mov dword ptr ds : [edx+4], ecx
        jmp public_6f2e0dc
        public_6f2e0ce : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx]
        jne public_6f2e0d9
        mov dword ptr ds : [edx], ecx
        jmp public_6f2e0dc
        public_6f2e0d9 : nop
        mov dword ptr ds : [edx+8], ecx
        public_6f2e0dc : nop
        mov dword ptr ds : [ecx], eax
        mov dword ptr ds : [eax+4], ecx
        public_6f2e0e1 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x24], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x24], 0
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [ecx]
        mov edi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], edi
        mov edi, dword ptr ds : [edx+8]
        cmp edi, dword ptr ds : [esi+8]
        je public_6f2e10a
        mov dword ptr ds : [edi+4], ecx
        public_6f2e10a : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_6f2e123
        mov dword ptr ds : [edi+4], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_6f2e1ef
        public_6f2e123 : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_6f2e136
        mov dword ptr ds : [edi+8], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_6f2e1ef
        public_6f2e136 : nop
        mov dword ptr ds : [edi], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_6f2e1ef
        public_6f2e140 : nop
        cmp byte ptr ds : [edx+0x24], 0
        jne public_6f2e163
        mov byte ptr ds : [ecx+0x24], 1
        mov byte ptr ds : [edx+0x24], 1
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x24], 0
        mov eax, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+4]
        jmp public_6f2e1f2
        public_6f2e163 : nop
        cmp eax, dword ptr ds : [ecx]
        jne public_6f2e1a3
        mov eax, ecx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ds : [ecx+8]
        cmp edx, dword ptr ds : [esi+8]
        je public_6f2e17b
        mov dword ptr ds : [edx+4], eax
        public_6f2e17b : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_6f2e18e
        mov dword ptr ds : [edx+4], ecx
        jmp public_6f2e19d
        public_6f2e18e : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx+8]
        jne public_6f2e19b
        mov dword ptr ds : [edx+8], ecx
        jmp public_6f2e19d
        public_6f2e19b : nop
        mov dword ptr ds : [edx], ecx
        public_6f2e19d : nop
        mov dword ptr ds : [ecx+8], eax
        mov dword ptr ds : [eax+4], ecx
        public_6f2e1a3 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x24], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x24], 0
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [ecx+8]
        mov edi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], edi
        mov edi, dword ptr ds : [edx]
        cmp edi, dword ptr ds : [esi+8]
        je public_6f2e1cc
        mov dword ptr ds : [edi+4], ecx
        public_6f2e1cc : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_6f2e1df
        mov dword ptr ds : [edi+4], edx
        jmp public_6f2e1ed
        public_6f2e1df : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi]
        jne public_6f2e1ea
        mov dword ptr ds : [edi], edx
        jmp public_6f2e1ed
        public_6f2e1ea : nop
        mov dword ptr ds : [edi+8], edx
        public_6f2e1ed : nop
        mov dword ptr ds : [edx], ecx
        public_6f2e1ef : nop
        mov dword ptr ds : [ecx+4], edx
        public_6f2e1f2 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_6f2e061
        public_6f2e1fe : nop
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        pop edi
        mov byte ptr ds : [eax+0x24], 1
        mov eax, dword ptr ss : [esp+0x10]
        pop esi
        pop ebp
        mov dword ptr ds : [eax], ebx
        pop ebx
        ret 0x10
        UNREACHABLE_TRAP(0x6f2dfd0)
    }
}

#undef public_6f2e039
#undef public_6f2e04d
#undef public_6f2e053
#undef public_6f2e061
#undef public_6f2e0a2
#undef public_6f2e0bb
#undef public_6f2e0ce
#undef public_6f2e0d9
#undef public_6f2e0dc
#undef public_6f2e0e1
#undef public_6f2e10a
#undef public_6f2e123
#undef public_6f2e136
#undef public_6f2e140
#undef public_6f2e163
#undef public_6f2e17b
#undef public_6f2e18e
#undef public_6f2e19b
#undef public_6f2e19d
#undef public_6f2e1a3
#undef public_6f2e1cc
#undef public_6f2e1df
#undef public_6f2e1ea
#undef public_6f2e1ed
#undef public_6f2e1ef
#undef public_6f2e1f2
#undef public_6f2e1fe
