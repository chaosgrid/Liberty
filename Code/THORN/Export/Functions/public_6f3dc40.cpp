#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f3dc40);
CLANG_FORWARD_PROC_SYMBOL(public_6f3fbb0);
CLANG_FORWARD_PROC_SYMBOL(public_6f57e9c);

#define public_6f3dca9 _public_6f3dca9
#define public_6f3dcbd _public_6f3dcbd
#define public_6f3dcc3 _public_6f3dcc3
#define public_6f3dcd1 _public_6f3dcd1
#define public_6f3dd12 _public_6f3dd12
#define public_6f3dd2b _public_6f3dd2b
#define public_6f3dd3e _public_6f3dd3e
#define public_6f3dd49 _public_6f3dd49
#define public_6f3dd4c _public_6f3dd4c
#define public_6f3dd51 _public_6f3dd51
#define public_6f3dd7a _public_6f3dd7a
#define public_6f3dd93 _public_6f3dd93
#define public_6f3dda6 _public_6f3dda6
#define public_6f3ddb0 _public_6f3ddb0
#define public_6f3ddd3 _public_6f3ddd3
#define public_6f3ddeb _public_6f3ddeb
#define public_6f3ddfe _public_6f3ddfe
#define public_6f3de0b _public_6f3de0b
#define public_6f3de0d _public_6f3de0d
#define public_6f3de13 _public_6f3de13
#define public_6f3de3c _public_6f3de3c
#define public_6f3de4f _public_6f3de4f
#define public_6f3de5a _public_6f3de5a
#define public_6f3de5d _public_6f3de5d
#define public_6f3de5f _public_6f3de5f
#define public_6f3de62 _public_6f3de62
#define public_6f3de6e _public_6f3de6e

PROC_DECLARE(0x6f3dc40, internal_6f3dc40, public_6f3dc40);
extern "C" NAKED register_t __cdecl internal_6f3dc40()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        push edi
        push 0x18
        mov esi, ecx
        call public_6f57e9c
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
        call public_6f3fbb0
        mov ecx, dword ptr ds : [esi+0x10]
        mov eax, dword ptr ds : [esi+4]
        add esp, 0xC
        inc ecx
        cmp edi, eax
        mov dword ptr ds : [esi+0x10], ecx
        je public_6f3dca9
        mov eax, dword ptr ss : [esp+0x18]
        cmp eax, dword ptr ds : [esi+8]
        jne public_6f3dca9
        mov ecx, dword ptr ss : [ebp]
        cmp ecx, dword ptr ds : [edi+0xC]
        jl public_6f3dca9
        mov dword ptr ds : [edi+8], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, dword ptr ds : [eax+8]
        jne public_6f3dcc3
        mov dword ptr ds : [eax+8], ebx
        jmp public_6f3dcc3
        public_6f3dca9 : nop
        mov dword ptr ds : [edi], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, eax
        jne public_6f3dcbd
        mov dword ptr ds : [eax+4], ebx
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [edx+8], ebx
        jmp public_6f3dcc3
        public_6f3dcbd : nop
        cmp edi, dword ptr ds : [eax]
        jne public_6f3dcc3
        mov dword ptr ds : [eax], ebx
        public_6f3dcc3 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp ebx, dword ptr ds : [ecx+4]
        mov eax, ebx
        je public_6f3de6e
        public_6f3dcd1 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [ecx+0x14]
        test dl, dl
        jne public_6f3de6e
        mov edi, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [edi]
        cmp ecx, edx
        jne public_6f3ddb0
        mov edx, dword ptr ds : [edi+8]
        cmp byte ptr ds : [edx+0x14], 0
        jne public_6f3dd12
        mov byte ptr ds : [ecx+0x14], 1
        mov byte ptr ds : [edx+0x14], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x14], 0
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [edx+4]
        jmp public_6f3de62
        public_6f3dd12 : nop
        cmp eax, dword ptr ds : [ecx+8]
        jne public_6f3dd51
        mov eax, ecx
        mov ecx, dword ptr ds : [eax+8]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax+8], edx
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [esi+8]
        je public_6f3dd2b
        mov dword ptr ds : [edx+4], eax
        public_6f3dd2b : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_6f3dd3e
        mov dword ptr ds : [edx+4], ecx
        jmp public_6f3dd4c
        public_6f3dd3e : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx]
        jne public_6f3dd49
        mov dword ptr ds : [edx], ecx
        jmp public_6f3dd4c
        public_6f3dd49 : nop
        mov dword ptr ds : [edx+8], ecx
        public_6f3dd4c : nop
        mov dword ptr ds : [ecx], eax
        mov dword ptr ds : [eax+4], ecx
        public_6f3dd51 : nop
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
        je public_6f3dd7a
        mov dword ptr ds : [edi+4], ecx
        public_6f3dd7a : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_6f3dd93
        mov dword ptr ds : [edi+4], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_6f3de5f
        public_6f3dd93 : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_6f3dda6
        mov dword ptr ds : [edi+8], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_6f3de5f
        public_6f3dda6 : nop
        mov dword ptr ds : [edi], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_6f3de5f
        public_6f3ddb0 : nop
        cmp byte ptr ds : [edx+0x14], 0
        jne public_6f3ddd3
        mov byte ptr ds : [ecx+0x14], 1
        mov byte ptr ds : [edx+0x14], 1
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x14], 0
        mov eax, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+4]
        jmp public_6f3de62
        public_6f3ddd3 : nop
        cmp eax, dword ptr ds : [ecx]
        jne public_6f3de13
        mov eax, ecx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ds : [ecx+8]
        cmp edx, dword ptr ds : [esi+8]
        je public_6f3ddeb
        mov dword ptr ds : [edx+4], eax
        public_6f3ddeb : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_6f3ddfe
        mov dword ptr ds : [edx+4], ecx
        jmp public_6f3de0d
        public_6f3ddfe : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx+8]
        jne public_6f3de0b
        mov dword ptr ds : [edx+8], ecx
        jmp public_6f3de0d
        public_6f3de0b : nop
        mov dword ptr ds : [edx], ecx
        public_6f3de0d : nop
        mov dword ptr ds : [ecx+8], eax
        mov dword ptr ds : [eax+4], ecx
        public_6f3de13 : nop
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
        je public_6f3de3c
        mov dword ptr ds : [edi+4], ecx
        public_6f3de3c : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_6f3de4f
        mov dword ptr ds : [edi+4], edx
        jmp public_6f3de5d
        public_6f3de4f : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi]
        jne public_6f3de5a
        mov dword ptr ds : [edi], edx
        jmp public_6f3de5d
        public_6f3de5a : nop
        mov dword ptr ds : [edi+8], edx
        public_6f3de5d : nop
        mov dword ptr ds : [edx], ecx
        public_6f3de5f : nop
        mov dword ptr ds : [ecx+4], edx
        public_6f3de62 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_6f3dcd1
        public_6f3de6e : nop
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
        UNREACHABLE_TRAP(0x6f3dc40)
    }
}

#undef public_6f3dca9
#undef public_6f3dcbd
#undef public_6f3dcc3
#undef public_6f3dcd1
#undef public_6f3dd12
#undef public_6f3dd2b
#undef public_6f3dd3e
#undef public_6f3dd49
#undef public_6f3dd4c
#undef public_6f3dd51
#undef public_6f3dd7a
#undef public_6f3dd93
#undef public_6f3dda6
#undef public_6f3ddb0
#undef public_6f3ddd3
#undef public_6f3ddeb
#undef public_6f3ddfe
#undef public_6f3de0b
#undef public_6f3de0d
#undef public_6f3de13
#undef public_6f3de3c
#undef public_6f3de4f
#undef public_6f3de5a
#undef public_6f3de5d
#undef public_6f3de5f
#undef public_6f3de62
#undef public_6f3de6e
