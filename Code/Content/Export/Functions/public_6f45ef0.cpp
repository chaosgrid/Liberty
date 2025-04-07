#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f45ef0);
CLANG_FORWARD_PROC_SYMBOL(public_6f46920);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6f45f62 _public_6f45f62
#define public_6f45f76 _public_6f45f76
#define public_6f45f7c _public_6f45f7c
#define public_6f45f90 _public_6f45f90
#define public_6f45fe0 _public_6f45fe0
#define public_6f45ff9 _public_6f45ff9
#define public_6f4600c _public_6f4600c
#define public_6f46017 _public_6f46017
#define public_6f4601a _public_6f4601a
#define public_6f4601f _public_6f4601f
#define public_6f4604e _public_6f4604e
#define public_6f46067 _public_6f46067
#define public_6f4607a _public_6f4607a
#define public_6f46084 _public_6f46084
#define public_6f460b3 _public_6f460b3
#define public_6f460cb _public_6f460cb
#define public_6f460de _public_6f460de
#define public_6f460eb _public_6f460eb
#define public_6f460ed _public_6f460ed
#define public_6f460f3 _public_6f460f3
#define public_6f46122 _public_6f46122
#define public_6f46135 _public_6f46135
#define public_6f46140 _public_6f46140
#define public_6f46143 _public_6f46143
#define public_6f46145 _public_6f46145
#define public_6f46148 _public_6f46148
#define public_6f46154 _public_6f46154

PROC_DECLARE(0x6f45ef0, internal_6f45ef0, public_6f45ef0);
extern "C" NAKED register_t __cdecl internal_6f45ef0()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        push edi
        push 0x14C
        mov esi, ecx
        call public_6fa912a
        mov edi, dword ptr ss : [esp+0x20]
        mov ebp, dword ptr ss : [esp+0x24]
        mov ebx, eax
        mov dword ptr ds : [ebx+4], edi
        mov byte ptr ds : [ebx+0x148], 0
        mov byte ptr ds : [ebx+0x149], 0
        mov eax, dword ptr ds : [esi+8]
        mov dword ptr ds : [ebx], eax
        mov ecx, dword ptr ds : [esi+8]
        lea edx, ds:[ebx+0xC]
        push ebp
        push edx
        mov dword ptr ds : [ebx+8], ecx
        call public_6f46920
        mov ecx, dword ptr ds : [esi+0x10]
        mov eax, dword ptr ds : [esi+4]
        add esp, 0xC
        inc ecx
        cmp edi, eax
        mov dword ptr ds : [esi+0x10], ecx
        je public_6f45f62
        mov eax, dword ptr ss : [esp+0x18]
        cmp eax, dword ptr ds : [esi+8]
        jne public_6f45f62
        mov ecx, dword ptr ss : [ebp]
        cmp ecx, dword ptr ds : [edi+0xC]
        jb public_6f45f62
        mov dword ptr ds : [edi+8], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, dword ptr ds : [eax+8]
        jne public_6f45f7c
        mov dword ptr ds : [eax+8], ebx
        jmp public_6f45f7c
        public_6f45f62 : nop
        mov dword ptr ds : [edi], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, eax
        jne public_6f45f76
        mov dword ptr ds : [eax+4], ebx
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [edx+8], ebx
        jmp public_6f45f7c
        public_6f45f76 : nop
        cmp edi, dword ptr ds : [eax]
        jne public_6f45f7c
        mov dword ptr ds : [eax], ebx
        public_6f45f7c : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp ebx, dword ptr ds : [ecx+4]
        mov eax, ebx
        je public_6f46154
        lea ebx, ds:[ebx]
        public_6f45f90 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [ecx+0x148]
        test dl, dl
        jne public_6f46154
        mov edi, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [edi]
        cmp ecx, edx
        jne public_6f46084
        mov edx, dword ptr ds : [edi+8]
        cmp byte ptr ds : [edx+0x148], 0
        jne public_6f45fe0
        mov byte ptr ds : [ecx+0x148], 1
        mov byte ptr ds : [edx+0x148], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x148], 0
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [edx+4]
        jmp public_6f46148
        public_6f45fe0 : nop
        cmp eax, dword ptr ds : [ecx+8]
        jne public_6f4601f
        mov eax, ecx
        mov ecx, dword ptr ds : [eax+8]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax+8], edx
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [esi+8]
        je public_6f45ff9
        mov dword ptr ds : [edx+4], eax
        public_6f45ff9 : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_6f4600c
        mov dword ptr ds : [edx+4], ecx
        jmp public_6f4601a
        public_6f4600c : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx]
        jne public_6f46017
        mov dword ptr ds : [edx], ecx
        jmp public_6f4601a
        public_6f46017 : nop
        mov dword ptr ds : [edx+8], ecx
        public_6f4601a : nop
        mov dword ptr ds : [ecx], eax
        mov dword ptr ds : [eax+4], ecx
        public_6f4601f : nop
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x148], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x148], 0
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [ecx]
        mov edi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], edi
        mov edi, dword ptr ds : [edx+8]
        cmp edi, dword ptr ds : [esi+8]
        je public_6f4604e
        mov dword ptr ds : [edi+4], ecx
        public_6f4604e : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_6f46067
        mov dword ptr ds : [edi+4], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_6f46145
        public_6f46067 : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_6f4607a
        mov dword ptr ds : [edi+8], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_6f46145
        public_6f4607a : nop
        mov dword ptr ds : [edi], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_6f46145
        public_6f46084 : nop
        cmp byte ptr ds : [edx+0x148], 0
        jne public_6f460b3
        mov byte ptr ds : [ecx+0x148], 1
        mov byte ptr ds : [edx+0x148], 1
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x148], 0
        mov eax, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+4]
        jmp public_6f46148
        public_6f460b3 : nop
        cmp eax, dword ptr ds : [ecx]
        jne public_6f460f3
        mov eax, ecx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ds : [ecx+8]
        cmp edx, dword ptr ds : [esi+8]
        je public_6f460cb
        mov dword ptr ds : [edx+4], eax
        public_6f460cb : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_6f460de
        mov dword ptr ds : [edx+4], ecx
        jmp public_6f460ed
        public_6f460de : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx+8]
        jne public_6f460eb
        mov dword ptr ds : [edx+8], ecx
        jmp public_6f460ed
        public_6f460eb : nop
        mov dword ptr ds : [edx], ecx
        public_6f460ed : nop
        mov dword ptr ds : [ecx+8], eax
        mov dword ptr ds : [eax+4], ecx
        public_6f460f3 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x148], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x148], 0
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [ecx+8]
        mov edi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], edi
        mov edi, dword ptr ds : [edx]
        cmp edi, dword ptr ds : [esi+8]
        je public_6f46122
        mov dword ptr ds : [edi+4], ecx
        public_6f46122 : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_6f46135
        mov dword ptr ds : [edi+4], edx
        jmp public_6f46143
        public_6f46135 : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi]
        jne public_6f46140
        mov dword ptr ds : [edi], edx
        jmp public_6f46143
        public_6f46140 : nop
        mov dword ptr ds : [edi+8], edx
        public_6f46143 : nop
        mov dword ptr ds : [edx], ecx
        public_6f46145 : nop
        mov dword ptr ds : [ecx+4], edx
        public_6f46148 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_6f45f90
        public_6f46154 : nop
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        pop edi
        mov byte ptr ds : [eax+0x148], 1
        mov eax, dword ptr ss : [esp+0x10]
        pop esi
        pop ebp
        mov dword ptr ds : [eax], ebx
        pop ebx
        ret 0x10
        UNREACHABLE_TRAP(0x6f45ef0)
    }
}

#undef public_6f45f62
#undef public_6f45f76
#undef public_6f45f7c
#undef public_6f45f90
#undef public_6f45fe0
#undef public_6f45ff9
#undef public_6f4600c
#undef public_6f46017
#undef public_6f4601a
#undef public_6f4601f
#undef public_6f4604e
#undef public_6f46067
#undef public_6f4607a
#undef public_6f46084
#undef public_6f460b3
#undef public_6f460cb
#undef public_6f460de
#undef public_6f460eb
#undef public_6f460ed
#undef public_6f460f3
#undef public_6f46122
#undef public_6f46135
#undef public_6f46140
#undef public_6f46143
#undef public_6f46145
#undef public_6f46148
#undef public_6f46154
