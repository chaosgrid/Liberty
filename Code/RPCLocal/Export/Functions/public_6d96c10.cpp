#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d85500);
CLANG_FORWARD_PROC_SYMBOL(public_6d96c10);
CLANG_FORWARD_PROC_SYMBOL(public_6db1f8a);

#define public_6d96c79 _public_6d96c79
#define public_6d96c8d _public_6d96c8d
#define public_6d96c93 _public_6d96c93
#define public_6d96ca1 _public_6d96ca1
#define public_6d96ce2 _public_6d96ce2
#define public_6d96cfb _public_6d96cfb
#define public_6d96d0e _public_6d96d0e
#define public_6d96d19 _public_6d96d19
#define public_6d96d1c _public_6d96d1c
#define public_6d96d21 _public_6d96d21
#define public_6d96d4a _public_6d96d4a
#define public_6d96d63 _public_6d96d63
#define public_6d96d76 _public_6d96d76
#define public_6d96d80 _public_6d96d80
#define public_6d96da3 _public_6d96da3
#define public_6d96dbb _public_6d96dbb
#define public_6d96dce _public_6d96dce
#define public_6d96ddb _public_6d96ddb
#define public_6d96ddd _public_6d96ddd
#define public_6d96de3 _public_6d96de3
#define public_6d96e0c _public_6d96e0c
#define public_6d96e1f _public_6d96e1f
#define public_6d96e2a _public_6d96e2a
#define public_6d96e2d _public_6d96e2d
#define public_6d96e2f _public_6d96e2f
#define public_6d96e32 _public_6d96e32
#define public_6d96e3e _public_6d96e3e

PROC_DECLARE(0x6d96c10, internal_6d96c10, public_6d96c10);
extern "C" NAKED register_t __cdecl internal_6d96c10()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        push edi
        push 0x18
        mov esi, ecx
        call public_6db1f8a
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
        call public_6d85500
        mov ecx, dword ptr ds : [esi+0x10]
        mov eax, dword ptr ds : [esi+4]
        add esp, 0xC
        inc ecx
        cmp edi, eax
        mov dword ptr ds : [esi+0x10], ecx
        je public_6d96c79
        mov eax, dword ptr ss : [esp+0x18]
        cmp eax, dword ptr ds : [esi+8]
        jne public_6d96c79
        mov ecx, dword ptr ss : [ebp]
        cmp ecx, dword ptr ds : [edi+0xC]
        jb public_6d96c79
        mov dword ptr ds : [edi+8], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, dword ptr ds : [eax+8]
        jne public_6d96c93
        mov dword ptr ds : [eax+8], ebx
        jmp public_6d96c93
        public_6d96c79 : nop
        mov dword ptr ds : [edi], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, eax
        jne public_6d96c8d
        mov dword ptr ds : [eax+4], ebx
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [edx+8], ebx
        jmp public_6d96c93
        public_6d96c8d : nop
        cmp edi, dword ptr ds : [eax]
        jne public_6d96c93
        mov dword ptr ds : [eax], ebx
        public_6d96c93 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp ebx, dword ptr ds : [ecx+4]
        mov eax, ebx
        je public_6d96e3e
        public_6d96ca1 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [ecx+0x14]
        test dl, dl
        jne public_6d96e3e
        mov edi, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [edi]
        cmp ecx, edx
        jne public_6d96d80
        mov edx, dword ptr ds : [edi+8]
        cmp byte ptr ds : [edx+0x14], 0
        jne public_6d96ce2
        mov byte ptr ds : [ecx+0x14], 1
        mov byte ptr ds : [edx+0x14], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x14], 0
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [edx+4]
        jmp public_6d96e32
        public_6d96ce2 : nop
        cmp eax, dword ptr ds : [ecx+8]
        jne public_6d96d21
        mov eax, ecx
        mov ecx, dword ptr ds : [eax+8]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax+8], edx
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [esi+8]
        je public_6d96cfb
        mov dword ptr ds : [edx+4], eax
        public_6d96cfb : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_6d96d0e
        mov dword ptr ds : [edx+4], ecx
        jmp public_6d96d1c
        public_6d96d0e : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx]
        jne public_6d96d19
        mov dword ptr ds : [edx], ecx
        jmp public_6d96d1c
        public_6d96d19 : nop
        mov dword ptr ds : [edx+8], ecx
        public_6d96d1c : nop
        mov dword ptr ds : [ecx], eax
        mov dword ptr ds : [eax+4], ecx
        public_6d96d21 : nop
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
        je public_6d96d4a
        mov dword ptr ds : [edi+4], ecx
        public_6d96d4a : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_6d96d63
        mov dword ptr ds : [edi+4], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_6d96e2f
        public_6d96d63 : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_6d96d76
        mov dword ptr ds : [edi+8], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_6d96e2f
        public_6d96d76 : nop
        mov dword ptr ds : [edi], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_6d96e2f
        public_6d96d80 : nop
        cmp byte ptr ds : [edx+0x14], 0
        jne public_6d96da3
        mov byte ptr ds : [ecx+0x14], 1
        mov byte ptr ds : [edx+0x14], 1
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x14], 0
        mov eax, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+4]
        jmp public_6d96e32
        public_6d96da3 : nop
        cmp eax, dword ptr ds : [ecx]
        jne public_6d96de3
        mov eax, ecx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ds : [ecx+8]
        cmp edx, dword ptr ds : [esi+8]
        je public_6d96dbb
        mov dword ptr ds : [edx+4], eax
        public_6d96dbb : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_6d96dce
        mov dword ptr ds : [edx+4], ecx
        jmp public_6d96ddd
        public_6d96dce : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx+8]
        jne public_6d96ddb
        mov dword ptr ds : [edx+8], ecx
        jmp public_6d96ddd
        public_6d96ddb : nop
        mov dword ptr ds : [edx], ecx
        public_6d96ddd : nop
        mov dword ptr ds : [ecx+8], eax
        mov dword ptr ds : [eax+4], ecx
        public_6d96de3 : nop
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
        je public_6d96e0c
        mov dword ptr ds : [edi+4], ecx
        public_6d96e0c : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_6d96e1f
        mov dword ptr ds : [edi+4], edx
        jmp public_6d96e2d
        public_6d96e1f : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi]
        jne public_6d96e2a
        mov dword ptr ds : [edi], edx
        jmp public_6d96e2d
        public_6d96e2a : nop
        mov dword ptr ds : [edi+8], edx
        public_6d96e2d : nop
        mov dword ptr ds : [edx], ecx
        public_6d96e2f : nop
        mov dword ptr ds : [ecx+4], edx
        public_6d96e32 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_6d96ca1
        public_6d96e3e : nop
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
        UNREACHABLE_TRAP(0x6d96c10)
    }
}

#undef public_6d96c79
#undef public_6d96c8d
#undef public_6d96c93
#undef public_6d96ca1
#undef public_6d96ce2
#undef public_6d96cfb
#undef public_6d96d0e
#undef public_6d96d19
#undef public_6d96d1c
#undef public_6d96d21
#undef public_6d96d4a
#undef public_6d96d63
#undef public_6d96d76
#undef public_6d96d80
#undef public_6d96da3
#undef public_6d96dbb
#undef public_6d96dce
#undef public_6d96ddb
#undef public_6d96ddd
#undef public_6d96de3
#undef public_6d96e0c
#undef public_6d96e1f
#undef public_6d96e2a
#undef public_6d96e2d
#undef public_6d96e2f
#undef public_6d96e32
#undef public_6d96e3e
