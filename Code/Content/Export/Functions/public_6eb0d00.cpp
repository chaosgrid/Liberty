#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb0d00);
CLANG_FORWARD_PROC_SYMBOL(public_6eb1cd0);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6eb0d72 _public_6eb0d72
#define public_6eb0d86 _public_6eb0d86
#define public_6eb0d8c _public_6eb0d8c
#define public_6eb0da0 _public_6eb0da0
#define public_6eb0df0 _public_6eb0df0
#define public_6eb0e09 _public_6eb0e09
#define public_6eb0e1c _public_6eb0e1c
#define public_6eb0e27 _public_6eb0e27
#define public_6eb0e2a _public_6eb0e2a
#define public_6eb0e2f _public_6eb0e2f
#define public_6eb0e5e _public_6eb0e5e
#define public_6eb0e77 _public_6eb0e77
#define public_6eb0e8a _public_6eb0e8a
#define public_6eb0e94 _public_6eb0e94
#define public_6eb0ec3 _public_6eb0ec3
#define public_6eb0edb _public_6eb0edb
#define public_6eb0eee _public_6eb0eee
#define public_6eb0efb _public_6eb0efb
#define public_6eb0efd _public_6eb0efd
#define public_6eb0f03 _public_6eb0f03
#define public_6eb0f32 _public_6eb0f32
#define public_6eb0f45 _public_6eb0f45
#define public_6eb0f50 _public_6eb0f50
#define public_6eb0f53 _public_6eb0f53
#define public_6eb0f55 _public_6eb0f55
#define public_6eb0f58 _public_6eb0f58
#define public_6eb0f64 _public_6eb0f64

PROC_DECLARE(0x6eb0d00, internal_6eb0d00, public_6eb0d00);
extern "C" NAKED register_t __cdecl internal_6eb0d00()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        push edi
        push 0xC8
        mov esi, ecx
        call public_6fa912a
        mov edi, dword ptr ss : [esp+0x20]
        mov ebp, dword ptr ss : [esp+0x24]
        mov ebx, eax
        mov dword ptr ds : [ebx+4], edi
        mov byte ptr ds : [ebx+0xC4], 0
        mov byte ptr ds : [ebx+0xC5], 0
        mov eax, dword ptr ds : [esi+8]
        mov dword ptr ds : [ebx], eax
        mov ecx, dword ptr ds : [esi+8]
        lea edx, ds:[ebx+0xC]
        push ebp
        push edx
        mov dword ptr ds : [ebx+8], ecx
        call public_6eb1cd0
        mov ecx, dword ptr ds : [esi+0x10]
        mov eax, dword ptr ds : [esi+4]
        add esp, 0xC
        inc ecx
        cmp edi, eax
        mov dword ptr ds : [esi+0x10], ecx
        je public_6eb0d72
        mov eax, dword ptr ss : [esp+0x18]
        cmp eax, dword ptr ds : [esi+8]
        jne public_6eb0d72
        mov ecx, dword ptr ss : [ebp]
        cmp ecx, dword ptr ds : [edi+0xC]
        jb public_6eb0d72
        mov dword ptr ds : [edi+8], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, dword ptr ds : [eax+8]
        jne public_6eb0d8c
        mov dword ptr ds : [eax+8], ebx
        jmp public_6eb0d8c
        public_6eb0d72 : nop
        mov dword ptr ds : [edi], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, eax
        jne public_6eb0d86
        mov dword ptr ds : [eax+4], ebx
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [edx+8], ebx
        jmp public_6eb0d8c
        public_6eb0d86 : nop
        cmp edi, dword ptr ds : [eax]
        jne public_6eb0d8c
        mov dword ptr ds : [eax], ebx
        public_6eb0d8c : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp ebx, dword ptr ds : [ecx+4]
        mov eax, ebx
        je public_6eb0f64
        lea ebx, ds:[ebx]
        public_6eb0da0 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [ecx+0xC4]
        test dl, dl
        jne public_6eb0f64
        mov edi, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [edi]
        cmp ecx, edx
        jne public_6eb0e94
        mov edx, dword ptr ds : [edi+8]
        cmp byte ptr ds : [edx+0xC4], 0
        jne public_6eb0df0
        mov byte ptr ds : [ecx+0xC4], 1
        mov byte ptr ds : [edx+0xC4], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0xC4], 0
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [edx+4]
        jmp public_6eb0f58
        public_6eb0df0 : nop
        cmp eax, dword ptr ds : [ecx+8]
        jne public_6eb0e2f
        mov eax, ecx
        mov ecx, dword ptr ds : [eax+8]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax+8], edx
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [esi+8]
        je public_6eb0e09
        mov dword ptr ds : [edx+4], eax
        public_6eb0e09 : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_6eb0e1c
        mov dword ptr ds : [edx+4], ecx
        jmp public_6eb0e2a
        public_6eb0e1c : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx]
        jne public_6eb0e27
        mov dword ptr ds : [edx], ecx
        jmp public_6eb0e2a
        public_6eb0e27 : nop
        mov dword ptr ds : [edx+8], ecx
        public_6eb0e2a : nop
        mov dword ptr ds : [ecx], eax
        mov dword ptr ds : [eax+4], ecx
        public_6eb0e2f : nop
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0xC4], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0xC4], 0
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [ecx]
        mov edi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], edi
        mov edi, dword ptr ds : [edx+8]
        cmp edi, dword ptr ds : [esi+8]
        je public_6eb0e5e
        mov dword ptr ds : [edi+4], ecx
        public_6eb0e5e : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_6eb0e77
        mov dword ptr ds : [edi+4], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_6eb0f55
        public_6eb0e77 : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_6eb0e8a
        mov dword ptr ds : [edi+8], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_6eb0f55
        public_6eb0e8a : nop
        mov dword ptr ds : [edi], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_6eb0f55
        public_6eb0e94 : nop
        cmp byte ptr ds : [edx+0xC4], 0
        jne public_6eb0ec3
        mov byte ptr ds : [ecx+0xC4], 1
        mov byte ptr ds : [edx+0xC4], 1
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0xC4], 0
        mov eax, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+4]
        jmp public_6eb0f58
        public_6eb0ec3 : nop
        cmp eax, dword ptr ds : [ecx]
        jne public_6eb0f03
        mov eax, ecx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ds : [ecx+8]
        cmp edx, dword ptr ds : [esi+8]
        je public_6eb0edb
        mov dword ptr ds : [edx+4], eax
        public_6eb0edb : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_6eb0eee
        mov dword ptr ds : [edx+4], ecx
        jmp public_6eb0efd
        public_6eb0eee : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx+8]
        jne public_6eb0efb
        mov dword ptr ds : [edx+8], ecx
        jmp public_6eb0efd
        public_6eb0efb : nop
        mov dword ptr ds : [edx], ecx
        public_6eb0efd : nop
        mov dword ptr ds : [ecx+8], eax
        mov dword ptr ds : [eax+4], ecx
        public_6eb0f03 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0xC4], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0xC4], 0
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [ecx+8]
        mov edi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], edi
        mov edi, dword ptr ds : [edx]
        cmp edi, dword ptr ds : [esi+8]
        je public_6eb0f32
        mov dword ptr ds : [edi+4], ecx
        public_6eb0f32 : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_6eb0f45
        mov dword ptr ds : [edi+4], edx
        jmp public_6eb0f53
        public_6eb0f45 : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi]
        jne public_6eb0f50
        mov dword ptr ds : [edi], edx
        jmp public_6eb0f53
        public_6eb0f50 : nop
        mov dword ptr ds : [edi+8], edx
        public_6eb0f53 : nop
        mov dword ptr ds : [edx], ecx
        public_6eb0f55 : nop
        mov dword ptr ds : [ecx+4], edx
        public_6eb0f58 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_6eb0da0
        public_6eb0f64 : nop
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        pop edi
        mov byte ptr ds : [eax+0xC4], 1
        mov eax, dword ptr ss : [esp+0x10]
        pop esi
        pop ebp
        mov dword ptr ds : [eax], ebx
        pop ebx
        ret 0x10
        UNREACHABLE_TRAP(0x6eb0d00)
    }
}

#undef public_6eb0d72
#undef public_6eb0d86
#undef public_6eb0d8c
#undef public_6eb0da0
#undef public_6eb0df0
#undef public_6eb0e09
#undef public_6eb0e1c
#undef public_6eb0e27
#undef public_6eb0e2a
#undef public_6eb0e2f
#undef public_6eb0e5e
#undef public_6eb0e77
#undef public_6eb0e8a
#undef public_6eb0e94
#undef public_6eb0ec3
#undef public_6eb0edb
#undef public_6eb0eee
#undef public_6eb0efb
#undef public_6eb0efd
#undef public_6eb0f03
#undef public_6eb0f32
#undef public_6eb0f45
#undef public_6eb0f50
#undef public_6eb0f53
#undef public_6eb0f55
#undef public_6eb0f58
#undef public_6eb0f64
