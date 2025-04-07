#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eee080);
CLANG_FORWARD_PROC_SYMBOL(public_6eee7c0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6eee0e9 _public_6eee0e9
#define public_6eee0fd _public_6eee0fd
#define public_6eee103 _public_6eee103
#define public_6eee111 _public_6eee111
#define public_6eee152 _public_6eee152
#define public_6eee16b _public_6eee16b
#define public_6eee17e _public_6eee17e
#define public_6eee189 _public_6eee189
#define public_6eee18c _public_6eee18c
#define public_6eee191 _public_6eee191
#define public_6eee1ba _public_6eee1ba
#define public_6eee1d3 _public_6eee1d3
#define public_6eee1e6 _public_6eee1e6
#define public_6eee1f0 _public_6eee1f0
#define public_6eee213 _public_6eee213
#define public_6eee22b _public_6eee22b
#define public_6eee23e _public_6eee23e
#define public_6eee24b _public_6eee24b
#define public_6eee24d _public_6eee24d
#define public_6eee253 _public_6eee253
#define public_6eee27c _public_6eee27c
#define public_6eee28f _public_6eee28f
#define public_6eee29a _public_6eee29a
#define public_6eee29d _public_6eee29d
#define public_6eee29f _public_6eee29f
#define public_6eee2a2 _public_6eee2a2
#define public_6eee2ae _public_6eee2ae

PROC_DECLARE(0x6eee080, internal_6eee080, public_6eee080);
extern "C" NAKED register_t __cdecl internal_6eee080()
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
        call public_6eee7c0
        mov ecx, dword ptr ds : [esi+0x10]
        mov eax, dword ptr ds : [esi+4]
        add esp, 0xC
        inc ecx
        cmp edi, eax
        mov dword ptr ds : [esi+0x10], ecx
        je public_6eee0e9
        mov eax, dword ptr ss : [esp+0x18]
        cmp eax, dword ptr ds : [esi+8]
        jne public_6eee0e9
        mov ecx, dword ptr ss : [ebp]
        cmp ecx, dword ptr ds : [edi+0xC]
        jb public_6eee0e9
        mov dword ptr ds : [edi+8], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, dword ptr ds : [eax+8]
        jne public_6eee103
        mov dword ptr ds : [eax+8], ebx
        jmp public_6eee103
        public_6eee0e9 : nop
        mov dword ptr ds : [edi], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, eax
        jne public_6eee0fd
        mov dword ptr ds : [eax+4], ebx
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [edx+8], ebx
        jmp public_6eee103
        public_6eee0fd : nop
        cmp edi, dword ptr ds : [eax]
        jne public_6eee103
        mov dword ptr ds : [eax], ebx
        public_6eee103 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp ebx, dword ptr ds : [ecx+4]
        mov eax, ebx
        je public_6eee2ae
        public_6eee111 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [ecx+0x24]
        test dl, dl
        jne public_6eee2ae
        mov edi, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [edi]
        cmp ecx, edx
        jne public_6eee1f0
        mov edx, dword ptr ds : [edi+8]
        cmp byte ptr ds : [edx+0x24], 0
        jne public_6eee152
        mov byte ptr ds : [ecx+0x24], 1
        mov byte ptr ds : [edx+0x24], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x24], 0
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [edx+4]
        jmp public_6eee2a2
        public_6eee152 : nop
        cmp eax, dword ptr ds : [ecx+8]
        jne public_6eee191
        mov eax, ecx
        mov ecx, dword ptr ds : [eax+8]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax+8], edx
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [esi+8]
        je public_6eee16b
        mov dword ptr ds : [edx+4], eax
        public_6eee16b : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_6eee17e
        mov dword ptr ds : [edx+4], ecx
        jmp public_6eee18c
        public_6eee17e : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx]
        jne public_6eee189
        mov dword ptr ds : [edx], ecx
        jmp public_6eee18c
        public_6eee189 : nop
        mov dword ptr ds : [edx+8], ecx
        public_6eee18c : nop
        mov dword ptr ds : [ecx], eax
        mov dword ptr ds : [eax+4], ecx
        public_6eee191 : nop
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
        je public_6eee1ba
        mov dword ptr ds : [edi+4], ecx
        public_6eee1ba : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_6eee1d3
        mov dword ptr ds : [edi+4], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_6eee29f
        public_6eee1d3 : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_6eee1e6
        mov dword ptr ds : [edi+8], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_6eee29f
        public_6eee1e6 : nop
        mov dword ptr ds : [edi], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_6eee29f
        public_6eee1f0 : nop
        cmp byte ptr ds : [edx+0x24], 0
        jne public_6eee213
        mov byte ptr ds : [ecx+0x24], 1
        mov byte ptr ds : [edx+0x24], 1
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x24], 0
        mov eax, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+4]
        jmp public_6eee2a2
        public_6eee213 : nop
        cmp eax, dword ptr ds : [ecx]
        jne public_6eee253
        mov eax, ecx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ds : [ecx+8]
        cmp edx, dword ptr ds : [esi+8]
        je public_6eee22b
        mov dword ptr ds : [edx+4], eax
        public_6eee22b : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_6eee23e
        mov dword ptr ds : [edx+4], ecx
        jmp public_6eee24d
        public_6eee23e : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx+8]
        jne public_6eee24b
        mov dword ptr ds : [edx+8], ecx
        jmp public_6eee24d
        public_6eee24b : nop
        mov dword ptr ds : [edx], ecx
        public_6eee24d : nop
        mov dword ptr ds : [ecx+8], eax
        mov dword ptr ds : [eax+4], ecx
        public_6eee253 : nop
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
        je public_6eee27c
        mov dword ptr ds : [edi+4], ecx
        public_6eee27c : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_6eee28f
        mov dword ptr ds : [edi+4], edx
        jmp public_6eee29d
        public_6eee28f : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi]
        jne public_6eee29a
        mov dword ptr ds : [edi], edx
        jmp public_6eee29d
        public_6eee29a : nop
        mov dword ptr ds : [edi+8], edx
        public_6eee29d : nop
        mov dword ptr ds : [edx], ecx
        public_6eee29f : nop
        mov dword ptr ds : [ecx+4], edx
        public_6eee2a2 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_6eee111
        public_6eee2ae : nop
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
        UNREACHABLE_TRAP(0x6eee080)
    }
}

#undef public_6eee0e9
#undef public_6eee0fd
#undef public_6eee103
#undef public_6eee111
#undef public_6eee152
#undef public_6eee16b
#undef public_6eee17e
#undef public_6eee189
#undef public_6eee18c
#undef public_6eee191
#undef public_6eee1ba
#undef public_6eee1d3
#undef public_6eee1e6
#undef public_6eee1f0
#undef public_6eee213
#undef public_6eee22b
#undef public_6eee23e
#undef public_6eee24b
#undef public_6eee24d
#undef public_6eee253
#undef public_6eee27c
#undef public_6eee28f
#undef public_6eee29a
#undef public_6eee29d
#undef public_6eee29f
#undef public_6eee2a2
#undef public_6eee2ae
