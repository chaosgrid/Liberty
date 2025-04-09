#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4e5d70);
CLANG_FORWARD_PROC_SYMBOL(public_4e5fc0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);

#define public_4e5ddb _public_4e5ddb
#define public_4e5def _public_4e5def
#define public_4e5df5 _public_4e5df5
#define public_4e5e03 _public_4e5e03
#define public_4e5e44 _public_4e5e44
#define public_4e5e5d _public_4e5e5d
#define public_4e5e70 _public_4e5e70
#define public_4e5e7b _public_4e5e7b
#define public_4e5e7e _public_4e5e7e
#define public_4e5e83 _public_4e5e83
#define public_4e5eac _public_4e5eac
#define public_4e5ec5 _public_4e5ec5
#define public_4e5ed8 _public_4e5ed8
#define public_4e5ee2 _public_4e5ee2
#define public_4e5f05 _public_4e5f05
#define public_4e5f1d _public_4e5f1d
#define public_4e5f30 _public_4e5f30
#define public_4e5f3d _public_4e5f3d
#define public_4e5f3f _public_4e5f3f
#define public_4e5f45 _public_4e5f45
#define public_4e5f6e _public_4e5f6e
#define public_4e5f81 _public_4e5f81
#define public_4e5f8c _public_4e5f8c
#define public_4e5f8f _public_4e5f8f
#define public_4e5f91 _public_4e5f91
#define public_4e5f94 _public_4e5f94
#define public_4e5fa0 _public_4e5fa0

PROC_DECLARE(0x4e5d70, internal_4e5d70, public_4e5d70);
extern "C" NAKED register_t __cdecl internal_4e5d70()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        push edi
        push 0x18
        mov esi, ecx
        call public_5b7e84
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
        call public_4e5fc0
        mov ecx, dword ptr ds : [esi+0x10]
        mov eax, dword ptr ds : [esi+4]
        add esp, 0xC
        inc ecx
        cmp edi, eax
        mov dword ptr ds : [esi+0x10], ecx
        je public_4e5ddb
        mov eax, dword ptr ss : [esp+0x18]
        cmp eax, dword ptr ds : [esi+8]
        jne public_4e5ddb
        mov cx, word ptr ss : [ebp]
        cmp cx, word ptr ds : [edi+0xC]
        jb public_4e5ddb
        mov dword ptr ds : [edi+8], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, dword ptr ds : [eax+8]
        jne public_4e5df5
        mov dword ptr ds : [eax+8], ebx
        jmp public_4e5df5
        public_4e5ddb : nop
        mov dword ptr ds : [edi], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, eax
        jne public_4e5def
        mov dword ptr ds : [eax+4], ebx
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [edx+8], ebx
        jmp public_4e5df5
        public_4e5def : nop
        cmp edi, dword ptr ds : [eax]
        jne public_4e5df5
        mov dword ptr ds : [eax], ebx
        public_4e5df5 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp ebx, dword ptr ds : [ecx+4]
        mov eax, ebx
        je public_4e5fa0
        public_4e5e03 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [ecx+0x14]
        test dl, dl
        jne public_4e5fa0
        mov edi, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [edi]
        cmp ecx, edx
        jne public_4e5ee2
        mov edx, dword ptr ds : [edi+8]
        cmp byte ptr ds : [edx+0x14], 0
        jne public_4e5e44
        mov byte ptr ds : [ecx+0x14], 1
        mov byte ptr ds : [edx+0x14], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x14], 0
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [edx+4]
        jmp public_4e5f94
        public_4e5e44 : nop
        cmp eax, dword ptr ds : [ecx+8]
        jne public_4e5e83
        mov eax, ecx
        mov ecx, dword ptr ds : [eax+8]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax+8], edx
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [esi+8]
        je public_4e5e5d
        mov dword ptr ds : [edx+4], eax
        public_4e5e5d : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_4e5e70
        mov dword ptr ds : [edx+4], ecx
        jmp public_4e5e7e
        public_4e5e70 : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx]
        jne public_4e5e7b
        mov dword ptr ds : [edx], ecx
        jmp public_4e5e7e
        public_4e5e7b : nop
        mov dword ptr ds : [edx+8], ecx
        public_4e5e7e : nop
        mov dword ptr ds : [ecx], eax
        mov dword ptr ds : [eax+4], ecx
        public_4e5e83 : nop
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
        je public_4e5eac
        mov dword ptr ds : [edi+4], ecx
        public_4e5eac : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_4e5ec5
        mov dword ptr ds : [edi+4], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_4e5f91
        public_4e5ec5 : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_4e5ed8
        mov dword ptr ds : [edi+8], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_4e5f91
        public_4e5ed8 : nop
        mov dword ptr ds : [edi], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_4e5f91
        public_4e5ee2 : nop
        cmp byte ptr ds : [edx+0x14], 0
        jne public_4e5f05
        mov byte ptr ds : [ecx+0x14], 1
        mov byte ptr ds : [edx+0x14], 1
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x14], 0
        mov eax, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+4]
        jmp public_4e5f94
        public_4e5f05 : nop
        cmp eax, dword ptr ds : [ecx]
        jne public_4e5f45
        mov eax, ecx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ds : [ecx+8]
        cmp edx, dword ptr ds : [esi+8]
        je public_4e5f1d
        mov dword ptr ds : [edx+4], eax
        public_4e5f1d : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_4e5f30
        mov dword ptr ds : [edx+4], ecx
        jmp public_4e5f3f
        public_4e5f30 : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx+8]
        jne public_4e5f3d
        mov dword ptr ds : [edx+8], ecx
        jmp public_4e5f3f
        public_4e5f3d : nop
        mov dword ptr ds : [edx], ecx
        public_4e5f3f : nop
        mov dword ptr ds : [ecx+8], eax
        mov dword ptr ds : [eax+4], ecx
        public_4e5f45 : nop
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
        je public_4e5f6e
        mov dword ptr ds : [edi+4], ecx
        public_4e5f6e : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_4e5f81
        mov dword ptr ds : [edi+4], edx
        jmp public_4e5f8f
        public_4e5f81 : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi]
        jne public_4e5f8c
        mov dword ptr ds : [edi], edx
        jmp public_4e5f8f
        public_4e5f8c : nop
        mov dword ptr ds : [edi+8], edx
        public_4e5f8f : nop
        mov dword ptr ds : [edx], ecx
        public_4e5f91 : nop
        mov dword ptr ds : [ecx+4], edx
        public_4e5f94 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_4e5e03
        public_4e5fa0 : nop
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
        UNREACHABLE_TRAP(0x4e5d70)
    }
}

#undef public_4e5ddb
#undef public_4e5def
#undef public_4e5df5
#undef public_4e5e03
#undef public_4e5e44
#undef public_4e5e5d
#undef public_4e5e70
#undef public_4e5e7b
#undef public_4e5e7e
#undef public_4e5e83
#undef public_4e5eac
#undef public_4e5ec5
#undef public_4e5ed8
#undef public_4e5ee2
#undef public_4e5f05
#undef public_4e5f1d
#undef public_4e5f30
#undef public_4e5f3d
#undef public_4e5f3f
#undef public_4e5f45
#undef public_4e5f6e
#undef public_4e5f81
#undef public_4e5f8c
#undef public_4e5f8f
#undef public_4e5f91
#undef public_4e5f94
#undef public_4e5fa0
