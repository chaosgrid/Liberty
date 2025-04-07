#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6da1e10);
CLANG_FORWARD_PROC_SYMBOL(public_6da2190);
CLANG_FORWARD_PROC_SYMBOL(public_6db1f8a);

#define public_6da1e79 _public_6da1e79
#define public_6da1e8d _public_6da1e8d
#define public_6da1e93 _public_6da1e93
#define public_6da1ea1 _public_6da1ea1
#define public_6da1ee2 _public_6da1ee2
#define public_6da1efb _public_6da1efb
#define public_6da1f0e _public_6da1f0e
#define public_6da1f19 _public_6da1f19
#define public_6da1f1c _public_6da1f1c
#define public_6da1f21 _public_6da1f21
#define public_6da1f4a _public_6da1f4a
#define public_6da1f63 _public_6da1f63
#define public_6da1f76 _public_6da1f76
#define public_6da1f80 _public_6da1f80
#define public_6da1fa3 _public_6da1fa3
#define public_6da1fbb _public_6da1fbb
#define public_6da1fce _public_6da1fce
#define public_6da1fdb _public_6da1fdb
#define public_6da1fdd _public_6da1fdd
#define public_6da1fe3 _public_6da1fe3
#define public_6da200c _public_6da200c
#define public_6da201f _public_6da201f
#define public_6da202a _public_6da202a
#define public_6da202d _public_6da202d
#define public_6da202f _public_6da202f
#define public_6da2032 _public_6da2032
#define public_6da203e _public_6da203e

PROC_DECLARE(0x6da1e10, internal_6da1e10, public_6da1e10);
extern "C" NAKED register_t __cdecl internal_6da1e10()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        push edi
        push 0x50
        mov esi, ecx
        call public_6db1f8a
        mov edi, dword ptr ss : [esp+0x20]
        mov ebp, dword ptr ss : [esp+0x24]
        mov ebx, eax
        mov dword ptr ds : [ebx+4], edi
        mov byte ptr ds : [ebx+0x48], 0
        mov byte ptr ds : [ebx+0x49], 0
        mov eax, dword ptr ds : [esi+8]
        mov dword ptr ds : [ebx], eax
        mov ecx, dword ptr ds : [esi+8]
        lea edx, ds:[ebx+0x10]
        push ebp
        push edx
        mov dword ptr ds : [ebx+8], ecx
        call public_6da2190
        mov ecx, dword ptr ds : [esi+0x10]
        mov eax, dword ptr ds : [esi+4]
        add esp, 0xC
        inc ecx
        cmp edi, eax
        mov dword ptr ds : [esi+0x10], ecx
        je public_6da1e79
        mov eax, dword ptr ss : [esp+0x18]
        cmp eax, dword ptr ds : [esi+8]
        jne public_6da1e79
        mov ecx, dword ptr ss : [ebp]
        cmp ecx, dword ptr ds : [edi+0x10]
        jb public_6da1e79
        mov dword ptr ds : [edi+8], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, dword ptr ds : [eax+8]
        jne public_6da1e93
        mov dword ptr ds : [eax+8], ebx
        jmp public_6da1e93
        public_6da1e79 : nop
        mov dword ptr ds : [edi], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, eax
        jne public_6da1e8d
        mov dword ptr ds : [eax+4], ebx
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [edx+8], ebx
        jmp public_6da1e93
        public_6da1e8d : nop
        cmp edi, dword ptr ds : [eax]
        jne public_6da1e93
        mov dword ptr ds : [eax], ebx
        public_6da1e93 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp ebx, dword ptr ds : [ecx+4]
        mov eax, ebx
        je public_6da203e
        public_6da1ea1 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [ecx+0x48]
        test dl, dl
        jne public_6da203e
        mov edi, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [edi]
        cmp ecx, edx
        jne public_6da1f80
        mov edx, dword ptr ds : [edi+8]
        cmp byte ptr ds : [edx+0x48], 0
        jne public_6da1ee2
        mov byte ptr ds : [ecx+0x48], 1
        mov byte ptr ds : [edx+0x48], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x48], 0
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [edx+4]
        jmp public_6da2032
        public_6da1ee2 : nop
        cmp eax, dword ptr ds : [ecx+8]
        jne public_6da1f21
        mov eax, ecx
        mov ecx, dword ptr ds : [eax+8]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax+8], edx
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [esi+8]
        je public_6da1efb
        mov dword ptr ds : [edx+4], eax
        public_6da1efb : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_6da1f0e
        mov dword ptr ds : [edx+4], ecx
        jmp public_6da1f1c
        public_6da1f0e : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx]
        jne public_6da1f19
        mov dword ptr ds : [edx], ecx
        jmp public_6da1f1c
        public_6da1f19 : nop
        mov dword ptr ds : [edx+8], ecx
        public_6da1f1c : nop
        mov dword ptr ds : [ecx], eax
        mov dword ptr ds : [eax+4], ecx
        public_6da1f21 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x48], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x48], 0
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [ecx]
        mov edi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], edi
        mov edi, dword ptr ds : [edx+8]
        cmp edi, dword ptr ds : [esi+8]
        je public_6da1f4a
        mov dword ptr ds : [edi+4], ecx
        public_6da1f4a : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_6da1f63
        mov dword ptr ds : [edi+4], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_6da202f
        public_6da1f63 : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_6da1f76
        mov dword ptr ds : [edi+8], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_6da202f
        public_6da1f76 : nop
        mov dword ptr ds : [edi], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_6da202f
        public_6da1f80 : nop
        cmp byte ptr ds : [edx+0x48], 0
        jne public_6da1fa3
        mov byte ptr ds : [ecx+0x48], 1
        mov byte ptr ds : [edx+0x48], 1
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x48], 0
        mov eax, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+4]
        jmp public_6da2032
        public_6da1fa3 : nop
        cmp eax, dword ptr ds : [ecx]
        jne public_6da1fe3
        mov eax, ecx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ds : [ecx+8]
        cmp edx, dword ptr ds : [esi+8]
        je public_6da1fbb
        mov dword ptr ds : [edx+4], eax
        public_6da1fbb : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_6da1fce
        mov dword ptr ds : [edx+4], ecx
        jmp public_6da1fdd
        public_6da1fce : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx+8]
        jne public_6da1fdb
        mov dword ptr ds : [edx+8], ecx
        jmp public_6da1fdd
        public_6da1fdb : nop
        mov dword ptr ds : [edx], ecx
        public_6da1fdd : nop
        mov dword ptr ds : [ecx+8], eax
        mov dword ptr ds : [eax+4], ecx
        public_6da1fe3 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x48], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x48], 0
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [ecx+8]
        mov edi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], edi
        mov edi, dword ptr ds : [edx]
        cmp edi, dword ptr ds : [esi+8]
        je public_6da200c
        mov dword ptr ds : [edi+4], ecx
        public_6da200c : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_6da201f
        mov dword ptr ds : [edi+4], edx
        jmp public_6da202d
        public_6da201f : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi]
        jne public_6da202a
        mov dword ptr ds : [edi], edx
        jmp public_6da202d
        public_6da202a : nop
        mov dword ptr ds : [edi+8], edx
        public_6da202d : nop
        mov dword ptr ds : [edx], ecx
        public_6da202f : nop
        mov dword ptr ds : [ecx+4], edx
        public_6da2032 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_6da1ea1
        public_6da203e : nop
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        pop edi
        mov byte ptr ds : [eax+0x48], 1
        mov eax, dword ptr ss : [esp+0x10]
        pop esi
        pop ebp
        mov dword ptr ds : [eax], ebx
        pop ebx
        ret 0x10
        UNREACHABLE_TRAP(0x6da1e10)
    }
}

#undef public_6da1e79
#undef public_6da1e8d
#undef public_6da1e93
#undef public_6da1ea1
#undef public_6da1ee2
#undef public_6da1efb
#undef public_6da1f0e
#undef public_6da1f19
#undef public_6da1f1c
#undef public_6da1f21
#undef public_6da1f4a
#undef public_6da1f63
#undef public_6da1f76
#undef public_6da1f80
#undef public_6da1fa3
#undef public_6da1fbb
#undef public_6da1fce
#undef public_6da1fdb
#undef public_6da1fdd
#undef public_6da1fe3
#undef public_6da200c
#undef public_6da201f
#undef public_6da202a
#undef public_6da202d
#undef public_6da202f
#undef public_6da2032
#undef public_6da203e
