#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_594940);
CLANG_FORWARD_PROC_SYMBOL(public_5999b0);
CLANG_FORWARD_PROC_SYMBOL(public_5b7e84);

#define public_5949a9 _public_5949a9
#define public_5949bd _public_5949bd
#define public_5949c3 _public_5949c3
#define public_5949d1 _public_5949d1
#define public_594a12 _public_594a12
#define public_594a2b _public_594a2b
#define public_594a3e _public_594a3e
#define public_594a49 _public_594a49
#define public_594a4c _public_594a4c
#define public_594a51 _public_594a51
#define public_594a7a _public_594a7a
#define public_594a93 _public_594a93
#define public_594aa6 _public_594aa6
#define public_594ab0 _public_594ab0
#define public_594ad3 _public_594ad3
#define public_594aeb _public_594aeb
#define public_594afe _public_594afe
#define public_594b0b _public_594b0b
#define public_594b0d _public_594b0d
#define public_594b13 _public_594b13
#define public_594b3c _public_594b3c
#define public_594b4f _public_594b4f
#define public_594b5a _public_594b5a
#define public_594b5d _public_594b5d
#define public_594b5f _public_594b5f
#define public_594b62 _public_594b62
#define public_594b6e _public_594b6e

PROC_DECLARE(0x594940, internal_594940, public_594940);
extern "C" NAKED register_t __cdecl internal_594940()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        push edi
        push 0x14
        mov esi, ecx
        call public_5b7e84
        mov edi, dword ptr ss : [esp+0x20]
        mov ebp, dword ptr ss : [esp+0x24]
        mov ebx, eax
        mov dword ptr ds : [ebx+4], edi
        mov byte ptr ds : [ebx+0x10], 0
        mov byte ptr ds : [ebx+0x11], 0
        mov eax, dword ptr ds : [esi+8]
        mov dword ptr ds : [ebx], eax
        mov ecx, dword ptr ds : [esi+8]
        lea edx, ds:[ebx+0xC]
        push ebp
        push edx
        mov dword ptr ds : [ebx+8], ecx
        call public_5999b0
        mov ecx, dword ptr ds : [esi+0x10]
        mov eax, dword ptr ds : [esi+4]
        add esp, 0xC
        inc ecx
        cmp edi, eax
        mov dword ptr ds : [esi+0x10], ecx
        je public_5949a9
        mov eax, dword ptr ss : [esp+0x18]
        cmp eax, dword ptr ds : [esi+8]
        jne public_5949a9
        mov ecx, dword ptr ss : [ebp]
        cmp ecx, dword ptr ds : [edi+0xC]
        jb public_5949a9
        mov dword ptr ds : [edi+8], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, dword ptr ds : [eax+8]
        jne public_5949c3
        mov dword ptr ds : [eax+8], ebx
        jmp public_5949c3
        public_5949a9 : nop
        mov dword ptr ds : [edi], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, eax
        jne public_5949bd
        mov dword ptr ds : [eax+4], ebx
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [edx+8], ebx
        jmp public_5949c3
        public_5949bd : nop
        cmp edi, dword ptr ds : [eax]
        jne public_5949c3
        mov dword ptr ds : [eax], ebx
        public_5949c3 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp ebx, dword ptr ds : [ecx+4]
        mov eax, ebx
        je public_594b6e
        public_5949d1 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [ecx+0x10]
        test dl, dl
        jne public_594b6e
        mov edi, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [edi]
        cmp ecx, edx
        jne public_594ab0
        mov edx, dword ptr ds : [edi+8]
        cmp byte ptr ds : [edx+0x10], 0
        jne public_594a12
        mov byte ptr ds : [ecx+0x10], 1
        mov byte ptr ds : [edx+0x10], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x10], 0
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [edx+4]
        jmp public_594b62
        public_594a12 : nop
        cmp eax, dword ptr ds : [ecx+8]
        jne public_594a51
        mov eax, ecx
        mov ecx, dword ptr ds : [eax+8]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax+8], edx
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [esi+8]
        je public_594a2b
        mov dword ptr ds : [edx+4], eax
        public_594a2b : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_594a3e
        mov dword ptr ds : [edx+4], ecx
        jmp public_594a4c
        public_594a3e : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx]
        jne public_594a49
        mov dword ptr ds : [edx], ecx
        jmp public_594a4c
        public_594a49 : nop
        mov dword ptr ds : [edx+8], ecx
        public_594a4c : nop
        mov dword ptr ds : [ecx], eax
        mov dword ptr ds : [eax+4], ecx
        public_594a51 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x10], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x10], 0
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [ecx]
        mov edi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], edi
        mov edi, dword ptr ds : [edx+8]
        cmp edi, dword ptr ds : [esi+8]
        je public_594a7a
        mov dword ptr ds : [edi+4], ecx
        public_594a7a : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_594a93
        mov dword ptr ds : [edi+4], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_594b5f
        public_594a93 : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_594aa6
        mov dword ptr ds : [edi+8], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_594b5f
        public_594aa6 : nop
        mov dword ptr ds : [edi], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_594b5f
        public_594ab0 : nop
        cmp byte ptr ds : [edx+0x10], 0
        jne public_594ad3
        mov byte ptr ds : [ecx+0x10], 1
        mov byte ptr ds : [edx+0x10], 1
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x10], 0
        mov eax, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+4]
        jmp public_594b62
        public_594ad3 : nop
        cmp eax, dword ptr ds : [ecx]
        jne public_594b13
        mov eax, ecx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ds : [ecx+8]
        cmp edx, dword ptr ds : [esi+8]
        je public_594aeb
        mov dword ptr ds : [edx+4], eax
        public_594aeb : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_594afe
        mov dword ptr ds : [edx+4], ecx
        jmp public_594b0d
        public_594afe : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx+8]
        jne public_594b0b
        mov dword ptr ds : [edx+8], ecx
        jmp public_594b0d
        public_594b0b : nop
        mov dword ptr ds : [edx], ecx
        public_594b0d : nop
        mov dword ptr ds : [ecx+8], eax
        mov dword ptr ds : [eax+4], ecx
        public_594b13 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x10], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x10], 0
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [ecx+8]
        mov edi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], edi
        mov edi, dword ptr ds : [edx]
        cmp edi, dword ptr ds : [esi+8]
        je public_594b3c
        mov dword ptr ds : [edi+4], ecx
        public_594b3c : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_594b4f
        mov dword ptr ds : [edi+4], edx
        jmp public_594b5d
        public_594b4f : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi]
        jne public_594b5a
        mov dword ptr ds : [edi], edx
        jmp public_594b5d
        public_594b5a : nop
        mov dword ptr ds : [edi+8], edx
        public_594b5d : nop
        mov dword ptr ds : [edx], ecx
        public_594b5f : nop
        mov dword ptr ds : [ecx+4], edx
        public_594b62 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_5949d1
        public_594b6e : nop
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        pop edi
        mov byte ptr ds : [eax+0x10], 1
        mov eax, dword ptr ss : [esp+0x10]
        pop esi
        pop ebp
        mov dword ptr ds : [eax], ebx
        pop ebx
        ret 0x10
        UNREACHABLE_TRAP(0x594940)
    }
}

#undef public_5949a9
#undef public_5949bd
#undef public_5949c3
#undef public_5949d1
#undef public_594a12
#undef public_594a2b
#undef public_594a3e
#undef public_594a49
#undef public_594a4c
#undef public_594a51
#undef public_594a7a
#undef public_594a93
#undef public_594aa6
#undef public_594ab0
#undef public_594ad3
#undef public_594aeb
#undef public_594afe
#undef public_594b0b
#undef public_594b0d
#undef public_594b13
#undef public_594b3c
#undef public_594b4f
#undef public_594b5a
#undef public_594b5d
#undef public_594b5f
#undef public_594b62
#undef public_594b6e
