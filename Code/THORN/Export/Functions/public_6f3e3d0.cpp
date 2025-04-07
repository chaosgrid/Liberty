#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f3e3d0);
CLANG_FORWARD_PROC_SYMBOL(public_6f3fbd0);
CLANG_FORWARD_PROC_SYMBOL(public_6f57e9c);

#define public_6f3e439 _public_6f3e439
#define public_6f3e44d _public_6f3e44d
#define public_6f3e453 _public_6f3e453
#define public_6f3e461 _public_6f3e461
#define public_6f3e4a2 _public_6f3e4a2
#define public_6f3e4bb _public_6f3e4bb
#define public_6f3e4ce _public_6f3e4ce
#define public_6f3e4d9 _public_6f3e4d9
#define public_6f3e4dc _public_6f3e4dc
#define public_6f3e4e1 _public_6f3e4e1
#define public_6f3e50a _public_6f3e50a
#define public_6f3e523 _public_6f3e523
#define public_6f3e536 _public_6f3e536
#define public_6f3e540 _public_6f3e540
#define public_6f3e563 _public_6f3e563
#define public_6f3e57b _public_6f3e57b
#define public_6f3e58e _public_6f3e58e
#define public_6f3e59b _public_6f3e59b
#define public_6f3e59d _public_6f3e59d
#define public_6f3e5a3 _public_6f3e5a3
#define public_6f3e5cc _public_6f3e5cc
#define public_6f3e5df _public_6f3e5df
#define public_6f3e5ea _public_6f3e5ea
#define public_6f3e5ed _public_6f3e5ed
#define public_6f3e5ef _public_6f3e5ef
#define public_6f3e5f2 _public_6f3e5f2
#define public_6f3e5fe _public_6f3e5fe

PROC_DECLARE(0x6f3e3d0, internal_6f3e3d0, public_6f3e3d0);
extern "C" NAKED register_t __cdecl internal_6f3e3d0()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        push edi
        push 0x28
        mov esi, ecx
        call public_6f57e9c
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
        call public_6f3fbd0
        mov ecx, dword ptr ds : [esi+0x10]
        mov eax, dword ptr ds : [esi+4]
        add esp, 0xC
        inc ecx
        cmp edi, eax
        mov dword ptr ds : [esi+0x10], ecx
        je public_6f3e439
        mov eax, dword ptr ss : [esp+0x18]
        cmp eax, dword ptr ds : [esi+8]
        jne public_6f3e439
        mov ecx, dword ptr ss : [ebp]
        cmp ecx, dword ptr ds : [edi+0xC]
        jl public_6f3e439
        mov dword ptr ds : [edi+8], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, dword ptr ds : [eax+8]
        jne public_6f3e453
        mov dword ptr ds : [eax+8], ebx
        jmp public_6f3e453
        public_6f3e439 : nop
        mov dword ptr ds : [edi], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, eax
        jne public_6f3e44d
        mov dword ptr ds : [eax+4], ebx
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [edx+8], ebx
        jmp public_6f3e453
        public_6f3e44d : nop
        cmp edi, dword ptr ds : [eax]
        jne public_6f3e453
        mov dword ptr ds : [eax], ebx
        public_6f3e453 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp ebx, dword ptr ds : [ecx+4]
        mov eax, ebx
        je public_6f3e5fe
        public_6f3e461 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [ecx+0x24]
        test dl, dl
        jne public_6f3e5fe
        mov edi, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [edi]
        cmp ecx, edx
        jne public_6f3e540
        mov edx, dword ptr ds : [edi+8]
        cmp byte ptr ds : [edx+0x24], 0
        jne public_6f3e4a2
        mov byte ptr ds : [ecx+0x24], 1
        mov byte ptr ds : [edx+0x24], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x24], 0
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [edx+4]
        jmp public_6f3e5f2
        public_6f3e4a2 : nop
        cmp eax, dword ptr ds : [ecx+8]
        jne public_6f3e4e1
        mov eax, ecx
        mov ecx, dword ptr ds : [eax+8]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax+8], edx
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [esi+8]
        je public_6f3e4bb
        mov dword ptr ds : [edx+4], eax
        public_6f3e4bb : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_6f3e4ce
        mov dword ptr ds : [edx+4], ecx
        jmp public_6f3e4dc
        public_6f3e4ce : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx]
        jne public_6f3e4d9
        mov dword ptr ds : [edx], ecx
        jmp public_6f3e4dc
        public_6f3e4d9 : nop
        mov dword ptr ds : [edx+8], ecx
        public_6f3e4dc : nop
        mov dword ptr ds : [ecx], eax
        mov dword ptr ds : [eax+4], ecx
        public_6f3e4e1 : nop
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
        je public_6f3e50a
        mov dword ptr ds : [edi+4], ecx
        public_6f3e50a : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_6f3e523
        mov dword ptr ds : [edi+4], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_6f3e5ef
        public_6f3e523 : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_6f3e536
        mov dword ptr ds : [edi+8], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_6f3e5ef
        public_6f3e536 : nop
        mov dword ptr ds : [edi], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_6f3e5ef
        public_6f3e540 : nop
        cmp byte ptr ds : [edx+0x24], 0
        jne public_6f3e563
        mov byte ptr ds : [ecx+0x24], 1
        mov byte ptr ds : [edx+0x24], 1
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x24], 0
        mov eax, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+4]
        jmp public_6f3e5f2
        public_6f3e563 : nop
        cmp eax, dword ptr ds : [ecx]
        jne public_6f3e5a3
        mov eax, ecx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ds : [ecx+8]
        cmp edx, dword ptr ds : [esi+8]
        je public_6f3e57b
        mov dword ptr ds : [edx+4], eax
        public_6f3e57b : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_6f3e58e
        mov dword ptr ds : [edx+4], ecx
        jmp public_6f3e59d
        public_6f3e58e : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx+8]
        jne public_6f3e59b
        mov dword ptr ds : [edx+8], ecx
        jmp public_6f3e59d
        public_6f3e59b : nop
        mov dword ptr ds : [edx], ecx
        public_6f3e59d : nop
        mov dword ptr ds : [ecx+8], eax
        mov dword ptr ds : [eax+4], ecx
        public_6f3e5a3 : nop
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
        je public_6f3e5cc
        mov dword ptr ds : [edi+4], ecx
        public_6f3e5cc : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_6f3e5df
        mov dword ptr ds : [edi+4], edx
        jmp public_6f3e5ed
        public_6f3e5df : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi]
        jne public_6f3e5ea
        mov dword ptr ds : [edi], edx
        jmp public_6f3e5ed
        public_6f3e5ea : nop
        mov dword ptr ds : [edi+8], edx
        public_6f3e5ed : nop
        mov dword ptr ds : [edx], ecx
        public_6f3e5ef : nop
        mov dword ptr ds : [ecx+4], edx
        public_6f3e5f2 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_6f3e461
        public_6f3e5fe : nop
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
        UNREACHABLE_TRAP(0x6f3e3d0)
    }
}

#undef public_6f3e439
#undef public_6f3e44d
#undef public_6f3e453
#undef public_6f3e461
#undef public_6f3e4a2
#undef public_6f3e4bb
#undef public_6f3e4ce
#undef public_6f3e4d9
#undef public_6f3e4dc
#undef public_6f3e4e1
#undef public_6f3e50a
#undef public_6f3e523
#undef public_6f3e536
#undef public_6f3e540
#undef public_6f3e563
#undef public_6f3e57b
#undef public_6f3e58e
#undef public_6f3e59b
#undef public_6f3e59d
#undef public_6f3e5a3
#undef public_6f3e5cc
#undef public_6f3e5df
#undef public_6f3e5ea
#undef public_6f3e5ed
#undef public_6f3e5ef
#undef public_6f3e5f2
#undef public_6f3e5fe
