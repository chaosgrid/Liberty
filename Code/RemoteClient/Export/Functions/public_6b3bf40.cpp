#include "RemoteClient-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b3bf40);
CLANG_FORWARD_PROC_SYMBOL(public_6b3c2f0);
CLANG_FORWARD_PROC_SYMBOL(public_6b6a134);

#define public_6b3bfa9 _public_6b3bfa9
#define public_6b3bfbd _public_6b3bfbd
#define public_6b3bfc3 _public_6b3bfc3
#define public_6b3bfd1 _public_6b3bfd1
#define public_6b3c012 _public_6b3c012
#define public_6b3c02b _public_6b3c02b
#define public_6b3c03e _public_6b3c03e
#define public_6b3c049 _public_6b3c049
#define public_6b3c04c _public_6b3c04c
#define public_6b3c051 _public_6b3c051
#define public_6b3c07a _public_6b3c07a
#define public_6b3c093 _public_6b3c093
#define public_6b3c0a6 _public_6b3c0a6
#define public_6b3c0b0 _public_6b3c0b0
#define public_6b3c0d3 _public_6b3c0d3
#define public_6b3c0eb _public_6b3c0eb
#define public_6b3c0fe _public_6b3c0fe
#define public_6b3c10b _public_6b3c10b
#define public_6b3c10d _public_6b3c10d
#define public_6b3c113 _public_6b3c113
#define public_6b3c13c _public_6b3c13c
#define public_6b3c14f _public_6b3c14f
#define public_6b3c15a _public_6b3c15a
#define public_6b3c15d _public_6b3c15d
#define public_6b3c15f _public_6b3c15f
#define public_6b3c162 _public_6b3c162
#define public_6b3c16e _public_6b3c16e

PROC_DECLARE(0x6b3bf40, internal_6b3bf40, public_6b3bf40);
extern "C" NAKED register_t __cdecl internal_6b3bf40()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        push edi
        push 0x18
        mov esi, ecx
        call public_6b6a134
        mov edi, dword ptr ss : [esp+0x20]
        mov ebp, dword ptr ss : [esp+0x24]
        mov ebx, eax
        mov dword ptr ds : [ebx+4], edi
        mov byte ptr ds : [ebx+0x14], 0
        mov byte ptr ds : [ebx+0x15], 0
        mov eax, dword ptr ds : [esi+8]
        mov dword ptr ds : [ebx], eax
        mov ecx, dword ptr ds : [esi+8]
        lea edx, ds:[ebx+0xC]
        push ebp
        push edx
        mov dword ptr ds : [ebx+8], ecx
        call public_6b3c2f0
        mov ecx, dword ptr ds : [esi+0x10]
        mov eax, dword ptr ds : [esi+4]
        add esp, 0xC
        inc ecx
        cmp edi, eax
        mov dword ptr ds : [esi+0x10], ecx
        je public_6b3bfa9
        mov eax, dword ptr ss : [esp+0x18]
        cmp eax, dword ptr ds : [esi+8]
        jne public_6b3bfa9
        mov ecx, dword ptr ss : [ebp]
        cmp ecx, dword ptr ds : [edi+0xC]
        jb public_6b3bfa9
        mov dword ptr ds : [edi+8], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, dword ptr ds : [eax+8]
        jne public_6b3bfc3
        mov dword ptr ds : [eax+8], ebx
        jmp public_6b3bfc3
        public_6b3bfa9 : nop
        mov dword ptr ds : [edi], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, eax
        jne public_6b3bfbd
        mov dword ptr ds : [eax+4], ebx
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [edx+8], ebx
        jmp public_6b3bfc3
        public_6b3bfbd : nop
        cmp edi, dword ptr ds : [eax]
        jne public_6b3bfc3
        mov dword ptr ds : [eax], ebx
        public_6b3bfc3 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp ebx, dword ptr ds : [ecx+4]
        mov eax, ebx
        je public_6b3c16e
        public_6b3bfd1 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [ecx+0x14]
        test dl, dl
        jne public_6b3c16e
        mov edi, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [edi]
        cmp ecx, edx
        jne public_6b3c0b0
        mov edx, dword ptr ds : [edi+8]
        cmp byte ptr ds : [edx+0x14], 0
        jne public_6b3c012
        mov byte ptr ds : [ecx+0x14], 1
        mov byte ptr ds : [edx+0x14], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x14], 0
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [edx+4]
        jmp public_6b3c162
        public_6b3c012 : nop
        cmp eax, dword ptr ds : [ecx+8]
        jne public_6b3c051
        mov eax, ecx
        mov ecx, dword ptr ds : [eax+8]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax+8], edx
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [esi+8]
        je public_6b3c02b
        mov dword ptr ds : [edx+4], eax
        public_6b3c02b : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_6b3c03e
        mov dword ptr ds : [edx+4], ecx
        jmp public_6b3c04c
        public_6b3c03e : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx]
        jne public_6b3c049
        mov dword ptr ds : [edx], ecx
        jmp public_6b3c04c
        public_6b3c049 : nop
        mov dword ptr ds : [edx+8], ecx
        public_6b3c04c : nop
        mov dword ptr ds : [ecx], eax
        mov dword ptr ds : [eax+4], ecx
        public_6b3c051 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x14], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x14], 0
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [ecx]
        mov edi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], edi
        mov edi, dword ptr ds : [edx+8]
        cmp edi, dword ptr ds : [esi+8]
        je public_6b3c07a
        mov dword ptr ds : [edi+4], ecx
        public_6b3c07a : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_6b3c093
        mov dword ptr ds : [edi+4], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_6b3c15f
        public_6b3c093 : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_6b3c0a6
        mov dword ptr ds : [edi+8], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_6b3c15f
        public_6b3c0a6 : nop
        mov dword ptr ds : [edi], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_6b3c15f
        public_6b3c0b0 : nop
        cmp byte ptr ds : [edx+0x14], 0
        jne public_6b3c0d3
        mov byte ptr ds : [ecx+0x14], 1
        mov byte ptr ds : [edx+0x14], 1
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x14], 0
        mov eax, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+4]
        jmp public_6b3c162
        public_6b3c0d3 : nop
        cmp eax, dword ptr ds : [ecx]
        jne public_6b3c113
        mov eax, ecx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ds : [ecx+8]
        cmp edx, dword ptr ds : [esi+8]
        je public_6b3c0eb
        mov dword ptr ds : [edx+4], eax
        public_6b3c0eb : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_6b3c0fe
        mov dword ptr ds : [edx+4], ecx
        jmp public_6b3c10d
        public_6b3c0fe : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx+8]
        jne public_6b3c10b
        mov dword ptr ds : [edx+8], ecx
        jmp public_6b3c10d
        public_6b3c10b : nop
        mov dword ptr ds : [edx], ecx
        public_6b3c10d : nop
        mov dword ptr ds : [ecx+8], eax
        mov dword ptr ds : [eax+4], ecx
        public_6b3c113 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x14], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x14], 0
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [ecx+8]
        mov edi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], edi
        mov edi, dword ptr ds : [edx]
        cmp edi, dword ptr ds : [esi+8]
        je public_6b3c13c
        mov dword ptr ds : [edi+4], ecx
        public_6b3c13c : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_6b3c14f
        mov dword ptr ds : [edi+4], edx
        jmp public_6b3c15d
        public_6b3c14f : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi]
        jne public_6b3c15a
        mov dword ptr ds : [edi], edx
        jmp public_6b3c15d
        public_6b3c15a : nop
        mov dword ptr ds : [edi+8], edx
        public_6b3c15d : nop
        mov dword ptr ds : [edx], ecx
        public_6b3c15f : nop
        mov dword ptr ds : [ecx+4], edx
        public_6b3c162 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_6b3bfd1
        public_6b3c16e : nop
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        pop edi
        mov byte ptr ds : [eax+0x14], 1
        mov eax, dword ptr ss : [esp+0x10]
        pop esi
        pop ebp
        mov dword ptr ds : [eax], ebx
        pop ebx
        ret 0x10
        UNREACHABLE_TRAP(0x6b3bf40)
    }
}

#undef public_6b3bfa9
#undef public_6b3bfbd
#undef public_6b3bfc3
#undef public_6b3bfd1
#undef public_6b3c012
#undef public_6b3c02b
#undef public_6b3c03e
#undef public_6b3c049
#undef public_6b3c04c
#undef public_6b3c051
#undef public_6b3c07a
#undef public_6b3c093
#undef public_6b3c0a6
#undef public_6b3c0b0
#undef public_6b3c0d3
#undef public_6b3c0eb
#undef public_6b3c0fe
#undef public_6b3c10b
#undef public_6b3c10d
#undef public_6b3c113
#undef public_6b3c13c
#undef public_6b3c14f
#undef public_6b3c15a
#undef public_6b3c15d
#undef public_6b3c15f
#undef public_6b3c162
#undef public_6b3c16e
