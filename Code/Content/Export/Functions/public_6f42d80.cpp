#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eee7a0);
CLANG_FORWARD_PROC_SYMBOL(public_6f42d80);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6f42de9 _public_6f42de9
#define public_6f42dfd _public_6f42dfd
#define public_6f42e03 _public_6f42e03
#define public_6f42e11 _public_6f42e11
#define public_6f42e52 _public_6f42e52
#define public_6f42e6b _public_6f42e6b
#define public_6f42e7e _public_6f42e7e
#define public_6f42e89 _public_6f42e89
#define public_6f42e8c _public_6f42e8c
#define public_6f42e91 _public_6f42e91
#define public_6f42eba _public_6f42eba
#define public_6f42ed3 _public_6f42ed3
#define public_6f42ee6 _public_6f42ee6
#define public_6f42ef0 _public_6f42ef0
#define public_6f42f13 _public_6f42f13
#define public_6f42f2b _public_6f42f2b
#define public_6f42f3e _public_6f42f3e
#define public_6f42f4b _public_6f42f4b
#define public_6f42f4d _public_6f42f4d
#define public_6f42f53 _public_6f42f53
#define public_6f42f7c _public_6f42f7c
#define public_6f42f8f _public_6f42f8f
#define public_6f42f9a _public_6f42f9a
#define public_6f42f9d _public_6f42f9d
#define public_6f42f9f _public_6f42f9f
#define public_6f42fa2 _public_6f42fa2
#define public_6f42fae _public_6f42fae

PROC_DECLARE(0x6f42d80, internal_6f42d80, public_6f42d80);
extern "C" NAKED register_t __cdecl internal_6f42d80()
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
        call public_6eee7a0
        mov ecx, dword ptr ds : [esi+0x10]
        mov eax, dword ptr ds : [esi+4]
        add esp, 0xC
        inc ecx
        cmp edi, eax
        mov dword ptr ds : [esi+0x10], ecx
        je public_6f42de9
        mov eax, dword ptr ss : [esp+0x18]
        cmp eax, dword ptr ds : [esi+8]
        jne public_6f42de9
        mov ecx, dword ptr ss : [ebp]
        cmp ecx, dword ptr ds : [edi+0xC]
        jb public_6f42de9
        mov dword ptr ds : [edi+8], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, dword ptr ds : [eax+8]
        jne public_6f42e03
        mov dword ptr ds : [eax+8], ebx
        jmp public_6f42e03
        public_6f42de9 : nop
        mov dword ptr ds : [edi], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, eax
        jne public_6f42dfd
        mov dword ptr ds : [eax+4], ebx
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [edx+8], ebx
        jmp public_6f42e03
        public_6f42dfd : nop
        cmp edi, dword ptr ds : [eax]
        jne public_6f42e03
        mov dword ptr ds : [eax], ebx
        public_6f42e03 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp ebx, dword ptr ds : [ecx+4]
        mov eax, ebx
        je public_6f42fae
        public_6f42e11 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [ecx+0x24]
        test dl, dl
        jne public_6f42fae
        mov edi, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [edi]
        cmp ecx, edx
        jne public_6f42ef0
        mov edx, dword ptr ds : [edi+8]
        cmp byte ptr ds : [edx+0x24], 0
        jne public_6f42e52
        mov byte ptr ds : [ecx+0x24], 1
        mov byte ptr ds : [edx+0x24], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x24], 0
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [edx+4]
        jmp public_6f42fa2
        public_6f42e52 : nop
        cmp eax, dword ptr ds : [ecx+8]
        jne public_6f42e91
        mov eax, ecx
        mov ecx, dword ptr ds : [eax+8]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax+8], edx
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [esi+8]
        je public_6f42e6b
        mov dword ptr ds : [edx+4], eax
        public_6f42e6b : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_6f42e7e
        mov dword ptr ds : [edx+4], ecx
        jmp public_6f42e8c
        public_6f42e7e : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx]
        jne public_6f42e89
        mov dword ptr ds : [edx], ecx
        jmp public_6f42e8c
        public_6f42e89 : nop
        mov dword ptr ds : [edx+8], ecx
        public_6f42e8c : nop
        mov dword ptr ds : [ecx], eax
        mov dword ptr ds : [eax+4], ecx
        public_6f42e91 : nop
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
        je public_6f42eba
        mov dword ptr ds : [edi+4], ecx
        public_6f42eba : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_6f42ed3
        mov dword ptr ds : [edi+4], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_6f42f9f
        public_6f42ed3 : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_6f42ee6
        mov dword ptr ds : [edi+8], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_6f42f9f
        public_6f42ee6 : nop
        mov dword ptr ds : [edi], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_6f42f9f
        public_6f42ef0 : nop
        cmp byte ptr ds : [edx+0x24], 0
        jne public_6f42f13
        mov byte ptr ds : [ecx+0x24], 1
        mov byte ptr ds : [edx+0x24], 1
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x24], 0
        mov eax, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+4]
        jmp public_6f42fa2
        public_6f42f13 : nop
        cmp eax, dword ptr ds : [ecx]
        jne public_6f42f53
        mov eax, ecx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ds : [ecx+8]
        cmp edx, dword ptr ds : [esi+8]
        je public_6f42f2b
        mov dword ptr ds : [edx+4], eax
        public_6f42f2b : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_6f42f3e
        mov dword ptr ds : [edx+4], ecx
        jmp public_6f42f4d
        public_6f42f3e : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx+8]
        jne public_6f42f4b
        mov dword ptr ds : [edx+8], ecx
        jmp public_6f42f4d
        public_6f42f4b : nop
        mov dword ptr ds : [edx], ecx
        public_6f42f4d : nop
        mov dword ptr ds : [ecx+8], eax
        mov dword ptr ds : [eax+4], ecx
        public_6f42f53 : nop
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
        je public_6f42f7c
        mov dword ptr ds : [edi+4], ecx
        public_6f42f7c : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_6f42f8f
        mov dword ptr ds : [edi+4], edx
        jmp public_6f42f9d
        public_6f42f8f : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi]
        jne public_6f42f9a
        mov dword ptr ds : [edi], edx
        jmp public_6f42f9d
        public_6f42f9a : nop
        mov dword ptr ds : [edi+8], edx
        public_6f42f9d : nop
        mov dword ptr ds : [edx], ecx
        public_6f42f9f : nop
        mov dword ptr ds : [ecx+4], edx
        public_6f42fa2 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_6f42e11
        public_6f42fae : nop
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
        UNREACHABLE_TRAP(0x6f42d80)
    }
}

#undef public_6f42de9
#undef public_6f42dfd
#undef public_6f42e03
#undef public_6f42e11
#undef public_6f42e52
#undef public_6f42e6b
#undef public_6f42e7e
#undef public_6f42e89
#undef public_6f42e8c
#undef public_6f42e91
#undef public_6f42eba
#undef public_6f42ed3
#undef public_6f42ee6
#undef public_6f42ef0
#undef public_6f42f13
#undef public_6f42f2b
#undef public_6f42f3e
#undef public_6f42f4b
#undef public_6f42f4d
#undef public_6f42f53
#undef public_6f42f7c
#undef public_6f42f8f
#undef public_6f42f9a
#undef public_6f42f9d
#undef public_6f42f9f
#undef public_6f42fa2
#undef public_6f42fae
