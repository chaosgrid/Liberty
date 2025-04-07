#include "SoundManager-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ee7e10);
CLANG_FORWARD_PROC_SYMBOL(public_6ee8160);
CLANG_FORWARD_PROC_SYMBOL(public_6ee85c0);

#define public_6ee7e79 _public_6ee7e79
#define public_6ee7e8d _public_6ee7e8d
#define public_6ee7e93 _public_6ee7e93
#define public_6ee7ea1 _public_6ee7ea1
#define public_6ee7ee2 _public_6ee7ee2
#define public_6ee7efb _public_6ee7efb
#define public_6ee7f0e _public_6ee7f0e
#define public_6ee7f19 _public_6ee7f19
#define public_6ee7f1c _public_6ee7f1c
#define public_6ee7f21 _public_6ee7f21
#define public_6ee7f4a _public_6ee7f4a
#define public_6ee7f63 _public_6ee7f63
#define public_6ee7f76 _public_6ee7f76
#define public_6ee7f80 _public_6ee7f80
#define public_6ee7fa3 _public_6ee7fa3
#define public_6ee7fbb _public_6ee7fbb
#define public_6ee7fce _public_6ee7fce
#define public_6ee7fdb _public_6ee7fdb
#define public_6ee7fdd _public_6ee7fdd
#define public_6ee7fe3 _public_6ee7fe3
#define public_6ee800c _public_6ee800c
#define public_6ee801f _public_6ee801f
#define public_6ee802a _public_6ee802a
#define public_6ee802d _public_6ee802d
#define public_6ee802f _public_6ee802f
#define public_6ee8032 _public_6ee8032
#define public_6ee803e _public_6ee803e

PROC_DECLARE(0x6ee7e10, internal_6ee7e10, public_6ee7e10);
extern "C" NAKED register_t __cdecl internal_6ee7e10()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        push edi
        push 0x18
        mov esi, ecx
        call public_6ee8160
        mov edi, dword ptr ss : [esp+0x1C]
        mov ebp, dword ptr ss : [esp+0x20]
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
        call public_6ee85c0
        mov ecx, dword ptr ds : [esi+0x10]
        mov eax, dword ptr ds : [esi+4]
        add esp, 8
        inc ecx
        cmp edi, eax
        mov dword ptr ds : [esi+0x10], ecx
        je public_6ee7e79
        mov eax, dword ptr ss : [esp+0x18]
        cmp eax, dword ptr ds : [esi+8]
        jne public_6ee7e79
        mov ecx, dword ptr ss : [ebp]
        cmp ecx, dword ptr ds : [edi+0xC]
        jl public_6ee7e79
        mov dword ptr ds : [edi+8], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, dword ptr ds : [eax+8]
        jne public_6ee7e93
        mov dword ptr ds : [eax+8], ebx
        jmp public_6ee7e93
        public_6ee7e79 : nop
        mov dword ptr ds : [edi], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, eax
        jne public_6ee7e8d
        mov dword ptr ds : [eax+4], ebx
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [edx+8], ebx
        jmp public_6ee7e93
        public_6ee7e8d : nop
        cmp edi, dword ptr ds : [eax]
        jne public_6ee7e93
        mov dword ptr ds : [eax], ebx
        public_6ee7e93 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp ebx, dword ptr ds : [ecx+4]
        mov eax, ebx
        je public_6ee803e
        public_6ee7ea1 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [ecx+0x14]
        test dl, dl
        jne public_6ee803e
        mov edi, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [edi]
        cmp ecx, edx
        jne public_6ee7f80
        mov edx, dword ptr ds : [edi+8]
        cmp byte ptr ds : [edx+0x14], 0
        jne public_6ee7ee2
        mov byte ptr ds : [ecx+0x14], 1
        mov byte ptr ds : [edx+0x14], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x14], 0
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [edx+4]
        jmp public_6ee8032
        public_6ee7ee2 : nop
        cmp eax, dword ptr ds : [ecx+8]
        jne public_6ee7f21
        mov eax, ecx
        mov ecx, dword ptr ds : [eax+8]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax+8], edx
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [esi+8]
        je public_6ee7efb
        mov dword ptr ds : [edx+4], eax
        public_6ee7efb : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_6ee7f0e
        mov dword ptr ds : [edx+4], ecx
        jmp public_6ee7f1c
        public_6ee7f0e : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx]
        jne public_6ee7f19
        mov dword ptr ds : [edx], ecx
        jmp public_6ee7f1c
        public_6ee7f19 : nop
        mov dword ptr ds : [edx+8], ecx
        public_6ee7f1c : nop
        mov dword ptr ds : [ecx], eax
        mov dword ptr ds : [eax+4], ecx
        public_6ee7f21 : nop
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
        je public_6ee7f4a
        mov dword ptr ds : [edi+4], ecx
        public_6ee7f4a : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_6ee7f63
        mov dword ptr ds : [edi+4], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_6ee802f
        public_6ee7f63 : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_6ee7f76
        mov dword ptr ds : [edi+8], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_6ee802f
        public_6ee7f76 : nop
        mov dword ptr ds : [edi], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_6ee802f
        public_6ee7f80 : nop
        cmp byte ptr ds : [edx+0x14], 0
        jne public_6ee7fa3
        mov byte ptr ds : [ecx+0x14], 1
        mov byte ptr ds : [edx+0x14], 1
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x14], 0
        mov eax, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+4]
        jmp public_6ee8032
        public_6ee7fa3 : nop
        cmp eax, dword ptr ds : [ecx]
        jne public_6ee7fe3
        mov eax, ecx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ds : [ecx+8]
        cmp edx, dword ptr ds : [esi+8]
        je public_6ee7fbb
        mov dword ptr ds : [edx+4], eax
        public_6ee7fbb : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_6ee7fce
        mov dword ptr ds : [edx+4], ecx
        jmp public_6ee7fdd
        public_6ee7fce : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx+8]
        jne public_6ee7fdb
        mov dword ptr ds : [edx+8], ecx
        jmp public_6ee7fdd
        public_6ee7fdb : nop
        mov dword ptr ds : [edx], ecx
        public_6ee7fdd : nop
        mov dword ptr ds : [ecx+8], eax
        mov dword ptr ds : [eax+4], ecx
        public_6ee7fe3 : nop
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
        je public_6ee800c
        mov dword ptr ds : [edi+4], ecx
        public_6ee800c : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_6ee801f
        mov dword ptr ds : [edi+4], edx
        jmp public_6ee802d
        public_6ee801f : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi]
        jne public_6ee802a
        mov dword ptr ds : [edi], edx
        jmp public_6ee802d
        public_6ee802a : nop
        mov dword ptr ds : [edi+8], edx
        public_6ee802d : nop
        mov dword ptr ds : [edx], ecx
        public_6ee802f : nop
        mov dword ptr ds : [ecx+4], edx
        public_6ee8032 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_6ee7ea1
        public_6ee803e : nop
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
        UNREACHABLE_TRAP(0x6ee7e10)
    }
}

#undef public_6ee7e79
#undef public_6ee7e8d
#undef public_6ee7e93
#undef public_6ee7ea1
#undef public_6ee7ee2
#undef public_6ee7efb
#undef public_6ee7f0e
#undef public_6ee7f19
#undef public_6ee7f1c
#undef public_6ee7f21
#undef public_6ee7f4a
#undef public_6ee7f63
#undef public_6ee7f76
#undef public_6ee7f80
#undef public_6ee7fa3
#undef public_6ee7fbb
#undef public_6ee7fce
#undef public_6ee7fdb
#undef public_6ee7fdd
#undef public_6ee7fe3
#undef public_6ee800c
#undef public_6ee801f
#undef public_6ee802a
#undef public_6ee802d
#undef public_6ee802f
#undef public_6ee8032
#undef public_6ee803e
