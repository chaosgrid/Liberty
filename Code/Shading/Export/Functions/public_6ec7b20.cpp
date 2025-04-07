#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ec7b20);
CLANG_FORWARD_PROC_SYMBOL(public_6ec8210);
CLANG_FORWARD_PROC_SYMBOL(public_6ed0c5c);

#define public_6ec7b89 _public_6ec7b89
#define public_6ec7b9d _public_6ec7b9d
#define public_6ec7ba3 _public_6ec7ba3
#define public_6ec7bb1 _public_6ec7bb1
#define public_6ec7bf2 _public_6ec7bf2
#define public_6ec7c0b _public_6ec7c0b
#define public_6ec7c1e _public_6ec7c1e
#define public_6ec7c29 _public_6ec7c29
#define public_6ec7c2c _public_6ec7c2c
#define public_6ec7c31 _public_6ec7c31
#define public_6ec7c5a _public_6ec7c5a
#define public_6ec7c73 _public_6ec7c73
#define public_6ec7c86 _public_6ec7c86
#define public_6ec7c90 _public_6ec7c90
#define public_6ec7cb3 _public_6ec7cb3
#define public_6ec7ccb _public_6ec7ccb
#define public_6ec7cde _public_6ec7cde
#define public_6ec7ceb _public_6ec7ceb
#define public_6ec7ced _public_6ec7ced
#define public_6ec7cf3 _public_6ec7cf3
#define public_6ec7d1c _public_6ec7d1c
#define public_6ec7d2f _public_6ec7d2f
#define public_6ec7d3a _public_6ec7d3a
#define public_6ec7d3d _public_6ec7d3d
#define public_6ec7d3f _public_6ec7d3f
#define public_6ec7d42 _public_6ec7d42
#define public_6ec7d4e _public_6ec7d4e

PROC_DECLARE(0x6ec7b20, internal_6ec7b20, public_6ec7b20);
extern "C" NAKED register_t __cdecl internal_6ec7b20()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        push edi
        push 0x18
        mov esi, ecx
        call public_6ed0c5c
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
        call public_6ec8210
        mov ecx, dword ptr ds : [esi+0x10]
        mov eax, dword ptr ds : [esi+4]
        add esp, 0xC
        inc ecx
        cmp edi, eax
        mov dword ptr ds : [esi+0x10], ecx
        je public_6ec7b89
        mov eax, dword ptr ss : [esp+0x18]
        cmp eax, dword ptr ds : [esi+8]
        jne public_6ec7b89
        mov ecx, dword ptr ss : [ebp]
        cmp ecx, dword ptr ds : [edi+0xC]
        jb public_6ec7b89
        mov dword ptr ds : [edi+8], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, dword ptr ds : [eax+8]
        jne public_6ec7ba3
        mov dword ptr ds : [eax+8], ebx
        jmp public_6ec7ba3
        public_6ec7b89 : nop
        mov dword ptr ds : [edi], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, eax
        jne public_6ec7b9d
        mov dword ptr ds : [eax+4], ebx
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [edx+8], ebx
        jmp public_6ec7ba3
        public_6ec7b9d : nop
        cmp edi, dword ptr ds : [eax]
        jne public_6ec7ba3
        mov dword ptr ds : [eax], ebx
        public_6ec7ba3 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp ebx, dword ptr ds : [ecx+4]
        mov eax, ebx
        je public_6ec7d4e
        public_6ec7bb1 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [ecx+0x14]
        test dl, dl
        jne public_6ec7d4e
        mov edi, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [edi]
        cmp ecx, edx
        jne public_6ec7c90
        mov edx, dword ptr ds : [edi+8]
        cmp byte ptr ds : [edx+0x14], 0
        jne public_6ec7bf2
        mov byte ptr ds : [ecx+0x14], 1
        mov byte ptr ds : [edx+0x14], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x14], 0
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [edx+4]
        jmp public_6ec7d42
        public_6ec7bf2 : nop
        cmp eax, dword ptr ds : [ecx+8]
        jne public_6ec7c31
        mov eax, ecx
        mov ecx, dword ptr ds : [eax+8]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax+8], edx
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [esi+8]
        je public_6ec7c0b
        mov dword ptr ds : [edx+4], eax
        public_6ec7c0b : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_6ec7c1e
        mov dword ptr ds : [edx+4], ecx
        jmp public_6ec7c2c
        public_6ec7c1e : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx]
        jne public_6ec7c29
        mov dword ptr ds : [edx], ecx
        jmp public_6ec7c2c
        public_6ec7c29 : nop
        mov dword ptr ds : [edx+8], ecx
        public_6ec7c2c : nop
        mov dword ptr ds : [ecx], eax
        mov dword ptr ds : [eax+4], ecx
        public_6ec7c31 : nop
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
        je public_6ec7c5a
        mov dword ptr ds : [edi+4], ecx
        public_6ec7c5a : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_6ec7c73
        mov dword ptr ds : [edi+4], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_6ec7d3f
        public_6ec7c73 : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_6ec7c86
        mov dword ptr ds : [edi+8], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_6ec7d3f
        public_6ec7c86 : nop
        mov dword ptr ds : [edi], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_6ec7d3f
        public_6ec7c90 : nop
        cmp byte ptr ds : [edx+0x14], 0
        jne public_6ec7cb3
        mov byte ptr ds : [ecx+0x14], 1
        mov byte ptr ds : [edx+0x14], 1
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x14], 0
        mov eax, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+4]
        jmp public_6ec7d42
        public_6ec7cb3 : nop
        cmp eax, dword ptr ds : [ecx]
        jne public_6ec7cf3
        mov eax, ecx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ds : [ecx+8]
        cmp edx, dword ptr ds : [esi+8]
        je public_6ec7ccb
        mov dword ptr ds : [edx+4], eax
        public_6ec7ccb : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_6ec7cde
        mov dword ptr ds : [edx+4], ecx
        jmp public_6ec7ced
        public_6ec7cde : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx+8]
        jne public_6ec7ceb
        mov dword ptr ds : [edx+8], ecx
        jmp public_6ec7ced
        public_6ec7ceb : nop
        mov dword ptr ds : [edx], ecx
        public_6ec7ced : nop
        mov dword ptr ds : [ecx+8], eax
        mov dword ptr ds : [eax+4], ecx
        public_6ec7cf3 : nop
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
        je public_6ec7d1c
        mov dword ptr ds : [edi+4], ecx
        public_6ec7d1c : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_6ec7d2f
        mov dword ptr ds : [edi+4], edx
        jmp public_6ec7d3d
        public_6ec7d2f : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi]
        jne public_6ec7d3a
        mov dword ptr ds : [edi], edx
        jmp public_6ec7d3d
        public_6ec7d3a : nop
        mov dword ptr ds : [edi+8], edx
        public_6ec7d3d : nop
        mov dword ptr ds : [edx], ecx
        public_6ec7d3f : nop
        mov dword ptr ds : [ecx+4], edx
        public_6ec7d42 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_6ec7bb1
        public_6ec7d4e : nop
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
        UNREACHABLE_TRAP(0x6ec7b20)
    }
}

#undef public_6ec7b89
#undef public_6ec7b9d
#undef public_6ec7ba3
#undef public_6ec7bb1
#undef public_6ec7bf2
#undef public_6ec7c0b
#undef public_6ec7c1e
#undef public_6ec7c29
#undef public_6ec7c2c
#undef public_6ec7c31
#undef public_6ec7c5a
#undef public_6ec7c73
#undef public_6ec7c86
#undef public_6ec7c90
#undef public_6ec7cb3
#undef public_6ec7ccb
#undef public_6ec7cde
#undef public_6ec7ceb
#undef public_6ec7ced
#undef public_6ec7cf3
#undef public_6ec7d1c
#undef public_6ec7d2f
#undef public_6ec7d3a
#undef public_6ec7d3d
#undef public_6ec7d3f
#undef public_6ec7d42
#undef public_6ec7d4e
