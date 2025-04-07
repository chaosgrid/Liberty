#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f54d80);
CLANG_FORWARD_PROC_SYMBOL(public_6f558f0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6f54de9 _public_6f54de9
#define public_6f54dfd _public_6f54dfd
#define public_6f54e03 _public_6f54e03
#define public_6f54e11 _public_6f54e11
#define public_6f54e52 _public_6f54e52
#define public_6f54e6b _public_6f54e6b
#define public_6f54e7e _public_6f54e7e
#define public_6f54e89 _public_6f54e89
#define public_6f54e8c _public_6f54e8c
#define public_6f54e91 _public_6f54e91
#define public_6f54eba _public_6f54eba
#define public_6f54ed3 _public_6f54ed3
#define public_6f54ee6 _public_6f54ee6
#define public_6f54ef0 _public_6f54ef0
#define public_6f54f13 _public_6f54f13
#define public_6f54f2b _public_6f54f2b
#define public_6f54f3e _public_6f54f3e
#define public_6f54f4b _public_6f54f4b
#define public_6f54f4d _public_6f54f4d
#define public_6f54f53 _public_6f54f53
#define public_6f54f7c _public_6f54f7c
#define public_6f54f8f _public_6f54f8f
#define public_6f54f9a _public_6f54f9a
#define public_6f54f9d _public_6f54f9d
#define public_6f54f9f _public_6f54f9f
#define public_6f54fa2 _public_6f54fa2
#define public_6f54fae _public_6f54fae

PROC_DECLARE(0x6f54d80, internal_6f54d80, public_6f54d80);
extern "C" NAKED register_t __cdecl internal_6f54d80()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        push edi
        push 0x34
        mov esi, ecx
        call public_6fa912a
        mov edi, dword ptr ss : [esp+0x20]
        mov ebp, dword ptr ss : [esp+0x24]
        mov ebx, eax
        mov dword ptr ds : [ebx+4], edi
        mov byte ptr ds : [ebx+0x30], 0
        mov byte ptr ds : [ebx+0x31], 0
        mov eax, dword ptr ds : [esi+8]
        mov dword ptr ds : [ebx], eax
        mov ecx, dword ptr ds : [esi+8]
        lea edx, ds:[ebx+0xC]
        push ebp
        push edx
        mov dword ptr ds : [ebx+8], ecx
        call public_6f558f0
        mov ecx, dword ptr ds : [esi+0x10]
        mov eax, dword ptr ds : [esi+4]
        add esp, 0xC
        inc ecx
        cmp edi, eax
        mov dword ptr ds : [esi+0x10], ecx
        je public_6f54de9
        mov eax, dword ptr ss : [esp+0x18]
        cmp eax, dword ptr ds : [esi+8]
        jne public_6f54de9
        mov ecx, dword ptr ss : [ebp]
        cmp ecx, dword ptr ds : [edi+0xC]
        jb public_6f54de9
        mov dword ptr ds : [edi+8], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, dword ptr ds : [eax+8]
        jne public_6f54e03
        mov dword ptr ds : [eax+8], ebx
        jmp public_6f54e03
        public_6f54de9 : nop
        mov dword ptr ds : [edi], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, eax
        jne public_6f54dfd
        mov dword ptr ds : [eax+4], ebx
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [edx+8], ebx
        jmp public_6f54e03
        public_6f54dfd : nop
        cmp edi, dword ptr ds : [eax]
        jne public_6f54e03
        mov dword ptr ds : [eax], ebx
        public_6f54e03 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp ebx, dword ptr ds : [ecx+4]
        mov eax, ebx
        je public_6f54fae
        public_6f54e11 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [ecx+0x30]
        test dl, dl
        jne public_6f54fae
        mov edi, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [edi]
        cmp ecx, edx
        jne public_6f54ef0
        mov edx, dword ptr ds : [edi+8]
        cmp byte ptr ds : [edx+0x30], 0
        jne public_6f54e52
        mov byte ptr ds : [ecx+0x30], 1
        mov byte ptr ds : [edx+0x30], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x30], 0
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [edx+4]
        jmp public_6f54fa2
        public_6f54e52 : nop
        cmp eax, dword ptr ds : [ecx+8]
        jne public_6f54e91
        mov eax, ecx
        mov ecx, dword ptr ds : [eax+8]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax+8], edx
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [esi+8]
        je public_6f54e6b
        mov dword ptr ds : [edx+4], eax
        public_6f54e6b : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_6f54e7e
        mov dword ptr ds : [edx+4], ecx
        jmp public_6f54e8c
        public_6f54e7e : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx]
        jne public_6f54e89
        mov dword ptr ds : [edx], ecx
        jmp public_6f54e8c
        public_6f54e89 : nop
        mov dword ptr ds : [edx+8], ecx
        public_6f54e8c : nop
        mov dword ptr ds : [ecx], eax
        mov dword ptr ds : [eax+4], ecx
        public_6f54e91 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x30], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x30], 0
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [ecx]
        mov edi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], edi
        mov edi, dword ptr ds : [edx+8]
        cmp edi, dword ptr ds : [esi+8]
        je public_6f54eba
        mov dword ptr ds : [edi+4], ecx
        public_6f54eba : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_6f54ed3
        mov dword ptr ds : [edi+4], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_6f54f9f
        public_6f54ed3 : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_6f54ee6
        mov dword ptr ds : [edi+8], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_6f54f9f
        public_6f54ee6 : nop
        mov dword ptr ds : [edi], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_6f54f9f
        public_6f54ef0 : nop
        cmp byte ptr ds : [edx+0x30], 0
        jne public_6f54f13
        mov byte ptr ds : [ecx+0x30], 1
        mov byte ptr ds : [edx+0x30], 1
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x30], 0
        mov eax, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+4]
        jmp public_6f54fa2
        public_6f54f13 : nop
        cmp eax, dword ptr ds : [ecx]
        jne public_6f54f53
        mov eax, ecx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ds : [ecx+8]
        cmp edx, dword ptr ds : [esi+8]
        je public_6f54f2b
        mov dword ptr ds : [edx+4], eax
        public_6f54f2b : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_6f54f3e
        mov dword ptr ds : [edx+4], ecx
        jmp public_6f54f4d
        public_6f54f3e : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx+8]
        jne public_6f54f4b
        mov dword ptr ds : [edx+8], ecx
        jmp public_6f54f4d
        public_6f54f4b : nop
        mov dword ptr ds : [edx], ecx
        public_6f54f4d : nop
        mov dword ptr ds : [ecx+8], eax
        mov dword ptr ds : [eax+4], ecx
        public_6f54f53 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x30], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x30], 0
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [ecx+8]
        mov edi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], edi
        mov edi, dword ptr ds : [edx]
        cmp edi, dword ptr ds : [esi+8]
        je public_6f54f7c
        mov dword ptr ds : [edi+4], ecx
        public_6f54f7c : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_6f54f8f
        mov dword ptr ds : [edi+4], edx
        jmp public_6f54f9d
        public_6f54f8f : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi]
        jne public_6f54f9a
        mov dword ptr ds : [edi], edx
        jmp public_6f54f9d
        public_6f54f9a : nop
        mov dword ptr ds : [edi+8], edx
        public_6f54f9d : nop
        mov dword ptr ds : [edx], ecx
        public_6f54f9f : nop
        mov dword ptr ds : [ecx+4], edx
        public_6f54fa2 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_6f54e11
        public_6f54fae : nop
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        pop edi
        mov byte ptr ds : [eax+0x30], 1
        mov eax, dword ptr ss : [esp+0x10]
        pop esi
        pop ebp
        mov dword ptr ds : [eax], ebx
        pop ebx
        ret 0x10
        UNREACHABLE_TRAP(0x6f54d80)
    }
}

#undef public_6f54de9
#undef public_6f54dfd
#undef public_6f54e03
#undef public_6f54e11
#undef public_6f54e52
#undef public_6f54e6b
#undef public_6f54e7e
#undef public_6f54e89
#undef public_6f54e8c
#undef public_6f54e91
#undef public_6f54eba
#undef public_6f54ed3
#undef public_6f54ee6
#undef public_6f54ef0
#undef public_6f54f13
#undef public_6f54f2b
#undef public_6f54f3e
#undef public_6f54f4b
#undef public_6f54f4d
#undef public_6f54f53
#undef public_6f54f7c
#undef public_6f54f8f
#undef public_6f54f9a
#undef public_6f54f9d
#undef public_6f54f9f
#undef public_6f54fa2
#undef public_6f54fae
