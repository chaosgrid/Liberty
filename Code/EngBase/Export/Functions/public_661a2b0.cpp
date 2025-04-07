#include "EngBase-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_661a2b0);
CLANG_FORWARD_PROC_SYMBOL(public_661aa80);
CLANG_FORWARD_PROC_SYMBOL(public_66281dc);

#define public_661a31d _public_661a31d
#define public_661a331 _public_661a331
#define public_661a337 _public_661a337
#define public_661a345 _public_661a345
#define public_661a386 _public_661a386
#define public_661a39f _public_661a39f
#define public_661a3b2 _public_661a3b2
#define public_661a3bd _public_661a3bd
#define public_661a3c0 _public_661a3c0
#define public_661a3c5 _public_661a3c5
#define public_661a3ee _public_661a3ee
#define public_661a407 _public_661a407
#define public_661a41a _public_661a41a
#define public_661a424 _public_661a424
#define public_661a447 _public_661a447
#define public_661a45f _public_661a45f
#define public_661a472 _public_661a472
#define public_661a47f _public_661a47f
#define public_661a481 _public_661a481
#define public_661a487 _public_661a487
#define public_661a4b0 _public_661a4b0
#define public_661a4c3 _public_661a4c3
#define public_661a4ce _public_661a4ce
#define public_661a4d1 _public_661a4d1
#define public_661a4d3 _public_661a4d3
#define public_661a4d6 _public_661a4d6
#define public_661a4e2 _public_661a4e2

PROC_DECLARE(0x661a2b0, internal_661a2b0, public_661a2b0);
extern "C" NAKED register_t __cdecl internal_661a2b0()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        push edi
        push 0x28
        mov esi, ecx
        call public_66281dc
        mov edi, dword ptr ss : [esp+0x20]
        mov ebp, dword ptr ss : [esp+0x24]
        mov ebx, eax
        push ebp
        mov dword ptr ds : [ebx+4], edi
        mov byte ptr ds : [ebx+0x24], 0
        mov byte ptr ds : [ebx+0x25], 0
        mov eax, dword ptr ds : [esi+8]
        mov dword ptr ds : [ebx], eax
        mov ecx, dword ptr ds : [esi+8]
        lea edx, ds:[ebx+0xC]
        mov dword ptr ds : [ebx+8], ecx
        push edx
        call public_661aa80
        mov ecx, dword ptr ds : [esi+0x10]
        mov eax, dword ptr ds : [esi+4]
        add esp, 0xC
        inc ecx
        cmp edi, eax
        mov dword ptr ds : [esi+0x10], ecx
        je public_661a31d
        mov eax, dword ptr ss : [esp+0x18]
        mov ecx, dword ptr ds : [esi+8]
        cmp eax, ecx
        jne public_661a31d
        mov ecx, dword ptr ss : [ebp]
        mov eax, dword ptr ds : [edi+0xC]
        cmp ecx, eax
        jl public_661a31d
        mov dword ptr ds : [edi+8], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, dword ptr ds : [eax+8]
        jne public_661a337
        mov dword ptr ds : [eax+8], ebx
        jmp public_661a337
        public_661a31d : nop
        mov dword ptr ds : [edi], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, eax
        jne public_661a331
        mov dword ptr ds : [eax+4], ebx
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [edx+8], ebx
        jmp public_661a337
        public_661a331 : nop
        cmp edi, dword ptr ds : [eax]
        jne public_661a337
        mov dword ptr ds : [eax], ebx
        public_661a337 : nop
        mov ecx, dword ptr ds : [esi+4]
        mov eax, ebx
        cmp ebx, dword ptr ds : [ecx+4]
        je public_661a4e2
        public_661a345 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [ecx+0x24]
        test dl, dl
        jne public_661a4e2
        mov edi, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [edi]
        cmp ecx, edx
        jne public_661a424
        mov edx, dword ptr ds : [edi+8]
        cmp byte ptr ds : [edx+0x24], 0
        jne public_661a386
        mov byte ptr ds : [ecx+0x24], 1
        mov byte ptr ds : [edx+0x24], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x24], 0
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [edx+4]
        jmp public_661a4d6
        public_661a386 : nop
        cmp eax, dword ptr ds : [ecx+8]
        jne public_661a3c5
        mov eax, ecx
        mov ecx, dword ptr ds : [eax+8]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax+8], edx
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [esi+8]
        je public_661a39f
        mov dword ptr ds : [edx+4], eax
        public_661a39f : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_661a3b2
        mov dword ptr ds : [edx+4], ecx
        jmp public_661a3c0
        public_661a3b2 : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx]
        jne public_661a3bd
        mov dword ptr ds : [edx], ecx
        jmp public_661a3c0
        public_661a3bd : nop
        mov dword ptr ds : [edx+8], ecx
        public_661a3c0 : nop
        mov dword ptr ds : [ecx], eax
        mov dword ptr ds : [eax+4], ecx
        public_661a3c5 : nop
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
        je public_661a3ee
        mov dword ptr ds : [edi+4], ecx
        public_661a3ee : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_661a407
        mov dword ptr ds : [edi+4], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_661a4d3
        public_661a407 : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_661a41a
        mov dword ptr ds : [edi+8], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_661a4d3
        public_661a41a : nop
        mov dword ptr ds : [edi], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_661a4d3
        public_661a424 : nop
        cmp byte ptr ds : [edx+0x24], 0
        jne public_661a447
        mov byte ptr ds : [ecx+0x24], 1
        mov byte ptr ds : [edx+0x24], 1
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x24], 0
        mov eax, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+4]
        jmp public_661a4d6
        public_661a447 : nop
        cmp eax, dword ptr ds : [ecx]
        jne public_661a487
        mov eax, ecx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ds : [ecx+8]
        cmp edx, dword ptr ds : [esi+8]
        je public_661a45f
        mov dword ptr ds : [edx+4], eax
        public_661a45f : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_661a472
        mov dword ptr ds : [edx+4], ecx
        jmp public_661a481
        public_661a472 : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx+8]
        jne public_661a47f
        mov dword ptr ds : [edx+8], ecx
        jmp public_661a481
        public_661a47f : nop
        mov dword ptr ds : [edx], ecx
        public_661a481 : nop
        mov dword ptr ds : [ecx+8], eax
        mov dword ptr ds : [eax+4], ecx
        public_661a487 : nop
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
        je public_661a4b0
        mov dword ptr ds : [edi+4], ecx
        public_661a4b0 : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_661a4c3
        mov dword ptr ds : [edi+4], edx
        jmp public_661a4d1
        public_661a4c3 : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi]
        jne public_661a4ce
        mov dword ptr ds : [edi], edx
        jmp public_661a4d1
        public_661a4ce : nop
        mov dword ptr ds : [edi+8], edx
        public_661a4d1 : nop
        mov dword ptr ds : [edx], ecx
        public_661a4d3 : nop
        mov dword ptr ds : [ecx+4], edx
        public_661a4d6 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_661a345
        public_661a4e2 : nop
        mov edx, dword ptr ds : [esi+4]
        pop edi
        pop esi
        pop ebp
        mov eax, dword ptr ds : [edx+4]
        mov byte ptr ds : [eax+0x24], 1
        mov eax, dword ptr ss : [esp+8]
        mov dword ptr ds : [eax], ebx
        pop ebx
        ret 0x10
        UNREACHABLE_TRAP(0x661a2b0)
    }
}

#undef public_661a31d
#undef public_661a331
#undef public_661a337
#undef public_661a345
#undef public_661a386
#undef public_661a39f
#undef public_661a3b2
#undef public_661a3bd
#undef public_661a3c0
#undef public_661a3c5
#undef public_661a3ee
#undef public_661a407
#undef public_661a41a
#undef public_661a424
#undef public_661a447
#undef public_661a45f
#undef public_661a472
#undef public_661a47f
#undef public_661a481
#undef public_661a487
#undef public_661a4b0
#undef public_661a4c3
#undef public_661a4ce
#undef public_661a4d1
#undef public_661a4d3
#undef public_661a4d6
#undef public_661a4e2
