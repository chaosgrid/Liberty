#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f6a070);
CLANG_FORWARD_PROC_SYMBOL(public_6f6a760);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6f6a0d9 _public_6f6a0d9
#define public_6f6a0ed _public_6f6a0ed
#define public_6f6a0f3 _public_6f6a0f3
#define public_6f6a101 _public_6f6a101
#define public_6f6a142 _public_6f6a142
#define public_6f6a15b _public_6f6a15b
#define public_6f6a16e _public_6f6a16e
#define public_6f6a179 _public_6f6a179
#define public_6f6a17c _public_6f6a17c
#define public_6f6a181 _public_6f6a181
#define public_6f6a1aa _public_6f6a1aa
#define public_6f6a1c3 _public_6f6a1c3
#define public_6f6a1d6 _public_6f6a1d6
#define public_6f6a1e0 _public_6f6a1e0
#define public_6f6a203 _public_6f6a203
#define public_6f6a21b _public_6f6a21b
#define public_6f6a22e _public_6f6a22e
#define public_6f6a23b _public_6f6a23b
#define public_6f6a23d _public_6f6a23d
#define public_6f6a243 _public_6f6a243
#define public_6f6a26c _public_6f6a26c
#define public_6f6a27f _public_6f6a27f
#define public_6f6a28a _public_6f6a28a
#define public_6f6a28d _public_6f6a28d
#define public_6f6a28f _public_6f6a28f
#define public_6f6a292 _public_6f6a292
#define public_6f6a29e _public_6f6a29e

PROC_DECLARE(0x6f6a070, internal_6f6a070, public_6f6a070);
extern "C" NAKED register_t __cdecl internal_6f6a070()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        push edi
        push 0x20
        mov esi, ecx
        call public_6fa912a
        mov edi, dword ptr ss : [esp+0x20]
        mov ebp, dword ptr ss : [esp+0x24]
        mov ebx, eax
        mov dword ptr ds : [ebx+4], edi
        mov byte ptr ds : [ebx+0x1C], 0
        mov byte ptr ds : [ebx+0x1D], 0
        mov eax, dword ptr ds : [esi+8]
        mov dword ptr ds : [ebx], eax
        mov ecx, dword ptr ds : [esi+8]
        lea edx, ds:[ebx+0xC]
        push ebp
        push edx
        mov dword ptr ds : [ebx+8], ecx
        call public_6f6a760
        mov ecx, dword ptr ds : [esi+0x10]
        mov eax, dword ptr ds : [esi+4]
        add esp, 0xC
        inc ecx
        cmp edi, eax
        mov dword ptr ds : [esi+0x10], ecx
        je public_6f6a0d9
        mov eax, dword ptr ss : [esp+0x18]
        cmp eax, dword ptr ds : [esi+8]
        jne public_6f6a0d9
        mov ecx, dword ptr ss : [ebp]
        cmp ecx, dword ptr ds : [edi+0xC]
        jb public_6f6a0d9
        mov dword ptr ds : [edi+8], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, dword ptr ds : [eax+8]
        jne public_6f6a0f3
        mov dword ptr ds : [eax+8], ebx
        jmp public_6f6a0f3
        public_6f6a0d9 : nop
        mov dword ptr ds : [edi], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, eax
        jne public_6f6a0ed
        mov dword ptr ds : [eax+4], ebx
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [edx+8], ebx
        jmp public_6f6a0f3
        public_6f6a0ed : nop
        cmp edi, dword ptr ds : [eax]
        jne public_6f6a0f3
        mov dword ptr ds : [eax], ebx
        public_6f6a0f3 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp ebx, dword ptr ds : [ecx+4]
        mov eax, ebx
        je public_6f6a29e
        public_6f6a101 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [ecx+0x1C]
        test dl, dl
        jne public_6f6a29e
        mov edi, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [edi]
        cmp ecx, edx
        jne public_6f6a1e0
        mov edx, dword ptr ds : [edi+8]
        cmp byte ptr ds : [edx+0x1C], 0
        jne public_6f6a142
        mov byte ptr ds : [ecx+0x1C], 1
        mov byte ptr ds : [edx+0x1C], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x1C], 0
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [edx+4]
        jmp public_6f6a292
        public_6f6a142 : nop
        cmp eax, dword ptr ds : [ecx+8]
        jne public_6f6a181
        mov eax, ecx
        mov ecx, dword ptr ds : [eax+8]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax+8], edx
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [esi+8]
        je public_6f6a15b
        mov dword ptr ds : [edx+4], eax
        public_6f6a15b : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_6f6a16e
        mov dword ptr ds : [edx+4], ecx
        jmp public_6f6a17c
        public_6f6a16e : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx]
        jne public_6f6a179
        mov dword ptr ds : [edx], ecx
        jmp public_6f6a17c
        public_6f6a179 : nop
        mov dword ptr ds : [edx+8], ecx
        public_6f6a17c : nop
        mov dword ptr ds : [ecx], eax
        mov dword ptr ds : [eax+4], ecx
        public_6f6a181 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x1C], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x1C], 0
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [ecx]
        mov edi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], edi
        mov edi, dword ptr ds : [edx+8]
        cmp edi, dword ptr ds : [esi+8]
        je public_6f6a1aa
        mov dword ptr ds : [edi+4], ecx
        public_6f6a1aa : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_6f6a1c3
        mov dword ptr ds : [edi+4], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_6f6a28f
        public_6f6a1c3 : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_6f6a1d6
        mov dword ptr ds : [edi+8], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_6f6a28f
        public_6f6a1d6 : nop
        mov dword ptr ds : [edi], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_6f6a28f
        public_6f6a1e0 : nop
        cmp byte ptr ds : [edx+0x1C], 0
        jne public_6f6a203
        mov byte ptr ds : [ecx+0x1C], 1
        mov byte ptr ds : [edx+0x1C], 1
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x1C], 0
        mov eax, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+4]
        jmp public_6f6a292
        public_6f6a203 : nop
        cmp eax, dword ptr ds : [ecx]
        jne public_6f6a243
        mov eax, ecx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ds : [ecx+8]
        cmp edx, dword ptr ds : [esi+8]
        je public_6f6a21b
        mov dword ptr ds : [edx+4], eax
        public_6f6a21b : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_6f6a22e
        mov dword ptr ds : [edx+4], ecx
        jmp public_6f6a23d
        public_6f6a22e : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx+8]
        jne public_6f6a23b
        mov dword ptr ds : [edx+8], ecx
        jmp public_6f6a23d
        public_6f6a23b : nop
        mov dword ptr ds : [edx], ecx
        public_6f6a23d : nop
        mov dword ptr ds : [ecx+8], eax
        mov dword ptr ds : [eax+4], ecx
        public_6f6a243 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x1C], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x1C], 0
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [ecx+8]
        mov edi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], edi
        mov edi, dword ptr ds : [edx]
        cmp edi, dword ptr ds : [esi+8]
        je public_6f6a26c
        mov dword ptr ds : [edi+4], ecx
        public_6f6a26c : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_6f6a27f
        mov dword ptr ds : [edi+4], edx
        jmp public_6f6a28d
        public_6f6a27f : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi]
        jne public_6f6a28a
        mov dword ptr ds : [edi], edx
        jmp public_6f6a28d
        public_6f6a28a : nop
        mov dword ptr ds : [edi+8], edx
        public_6f6a28d : nop
        mov dword ptr ds : [edx], ecx
        public_6f6a28f : nop
        mov dword ptr ds : [ecx+4], edx
        public_6f6a292 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_6f6a101
        public_6f6a29e : nop
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        pop edi
        mov byte ptr ds : [eax+0x1C], 1
        mov eax, dword ptr ss : [esp+0x10]
        pop esi
        pop ebp
        mov dword ptr ds : [eax], ebx
        pop ebx
        ret 0x10
        UNREACHABLE_TRAP(0x6f6a070)
    }
}

#undef public_6f6a0d9
#undef public_6f6a0ed
#undef public_6f6a0f3
#undef public_6f6a101
#undef public_6f6a142
#undef public_6f6a15b
#undef public_6f6a16e
#undef public_6f6a179
#undef public_6f6a17c
#undef public_6f6a181
#undef public_6f6a1aa
#undef public_6f6a1c3
#undef public_6f6a1d6
#undef public_6f6a1e0
#undef public_6f6a203
#undef public_6f6a21b
#undef public_6f6a22e
#undef public_6f6a23b
#undef public_6f6a23d
#undef public_6f6a243
#undef public_6f6a26c
#undef public_6f6a27f
#undef public_6f6a28a
#undef public_6f6a28d
#undef public_6f6a28f
#undef public_6f6a292
#undef public_6f6a29e
