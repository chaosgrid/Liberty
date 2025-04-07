#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f305b0);
CLANG_FORWARD_PROC_SYMBOL(public_6f4a480);
CLANG_FORWARD_PROC_SYMBOL(public_6fa912a);

#define public_6f4a4e9 _public_6f4a4e9
#define public_6f4a4fd _public_6f4a4fd
#define public_6f4a503 _public_6f4a503
#define public_6f4a511 _public_6f4a511
#define public_6f4a552 _public_6f4a552
#define public_6f4a56b _public_6f4a56b
#define public_6f4a57e _public_6f4a57e
#define public_6f4a589 _public_6f4a589
#define public_6f4a58c _public_6f4a58c
#define public_6f4a591 _public_6f4a591
#define public_6f4a5ba _public_6f4a5ba
#define public_6f4a5d3 _public_6f4a5d3
#define public_6f4a5e6 _public_6f4a5e6
#define public_6f4a5f0 _public_6f4a5f0
#define public_6f4a613 _public_6f4a613
#define public_6f4a62b _public_6f4a62b
#define public_6f4a63e _public_6f4a63e
#define public_6f4a64b _public_6f4a64b
#define public_6f4a64d _public_6f4a64d
#define public_6f4a653 _public_6f4a653
#define public_6f4a67c _public_6f4a67c
#define public_6f4a68f _public_6f4a68f
#define public_6f4a69a _public_6f4a69a
#define public_6f4a69d _public_6f4a69d
#define public_6f4a69f _public_6f4a69f
#define public_6f4a6a2 _public_6f4a6a2
#define public_6f4a6ae _public_6f4a6ae

PROC_DECLARE(0x6f4a480, internal_6f4a480, public_6f4a480);
extern "C" NAKED register_t __cdecl internal_6f4a480()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        push edi
        push 0x18
        mov esi, ecx
        call public_6fa912a
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
        call public_6f305b0
        mov ecx, dword ptr ds : [esi+0x10]
        mov eax, dword ptr ds : [esi+4]
        add esp, 0xC
        inc ecx
        cmp edi, eax
        mov dword ptr ds : [esi+0x10], ecx
        je public_6f4a4e9
        mov eax, dword ptr ss : [esp+0x18]
        cmp eax, dword ptr ds : [esi+8]
        jne public_6f4a4e9
        mov cl, byte ptr ss : [ebp]
        cmp cl, byte ptr ds : [edi+0xC]
        jb public_6f4a4e9
        mov dword ptr ds : [edi+8], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, dword ptr ds : [eax+8]
        jne public_6f4a503
        mov dword ptr ds : [eax+8], ebx
        jmp public_6f4a503
        public_6f4a4e9 : nop
        mov dword ptr ds : [edi], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, eax
        jne public_6f4a4fd
        mov dword ptr ds : [eax+4], ebx
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [edx+8], ebx
        jmp public_6f4a503
        public_6f4a4fd : nop
        cmp edi, dword ptr ds : [eax]
        jne public_6f4a503
        mov dword ptr ds : [eax], ebx
        public_6f4a503 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp ebx, dword ptr ds : [ecx+4]
        mov eax, ebx
        je public_6f4a6ae
        public_6f4a511 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [ecx+0x14]
        test dl, dl
        jne public_6f4a6ae
        mov edi, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [edi]
        cmp ecx, edx
        jne public_6f4a5f0
        mov edx, dword ptr ds : [edi+8]
        cmp byte ptr ds : [edx+0x14], 0
        jne public_6f4a552
        mov byte ptr ds : [ecx+0x14], 1
        mov byte ptr ds : [edx+0x14], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x14], 0
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [edx+4]
        jmp public_6f4a6a2
        public_6f4a552 : nop
        cmp eax, dword ptr ds : [ecx+8]
        jne public_6f4a591
        mov eax, ecx
        mov ecx, dword ptr ds : [eax+8]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax+8], edx
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [esi+8]
        je public_6f4a56b
        mov dword ptr ds : [edx+4], eax
        public_6f4a56b : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_6f4a57e
        mov dword ptr ds : [edx+4], ecx
        jmp public_6f4a58c
        public_6f4a57e : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx]
        jne public_6f4a589
        mov dword ptr ds : [edx], ecx
        jmp public_6f4a58c
        public_6f4a589 : nop
        mov dword ptr ds : [edx+8], ecx
        public_6f4a58c : nop
        mov dword ptr ds : [ecx], eax
        mov dword ptr ds : [eax+4], ecx
        public_6f4a591 : nop
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
        je public_6f4a5ba
        mov dword ptr ds : [edi+4], ecx
        public_6f4a5ba : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_6f4a5d3
        mov dword ptr ds : [edi+4], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_6f4a69f
        public_6f4a5d3 : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_6f4a5e6
        mov dword ptr ds : [edi+8], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_6f4a69f
        public_6f4a5e6 : nop
        mov dword ptr ds : [edi], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_6f4a69f
        public_6f4a5f0 : nop
        cmp byte ptr ds : [edx+0x14], 0
        jne public_6f4a613
        mov byte ptr ds : [ecx+0x14], 1
        mov byte ptr ds : [edx+0x14], 1
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x14], 0
        mov eax, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+4]
        jmp public_6f4a6a2
        public_6f4a613 : nop
        cmp eax, dword ptr ds : [ecx]
        jne public_6f4a653
        mov eax, ecx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ds : [ecx+8]
        cmp edx, dword ptr ds : [esi+8]
        je public_6f4a62b
        mov dword ptr ds : [edx+4], eax
        public_6f4a62b : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_6f4a63e
        mov dword ptr ds : [edx+4], ecx
        jmp public_6f4a64d
        public_6f4a63e : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx+8]
        jne public_6f4a64b
        mov dword ptr ds : [edx+8], ecx
        jmp public_6f4a64d
        public_6f4a64b : nop
        mov dword ptr ds : [edx], ecx
        public_6f4a64d : nop
        mov dword ptr ds : [ecx+8], eax
        mov dword ptr ds : [eax+4], ecx
        public_6f4a653 : nop
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
        je public_6f4a67c
        mov dword ptr ds : [edi+4], ecx
        public_6f4a67c : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_6f4a68f
        mov dword ptr ds : [edi+4], edx
        jmp public_6f4a69d
        public_6f4a68f : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi]
        jne public_6f4a69a
        mov dword ptr ds : [edi], edx
        jmp public_6f4a69d
        public_6f4a69a : nop
        mov dword ptr ds : [edi+8], edx
        public_6f4a69d : nop
        mov dword ptr ds : [edx], ecx
        public_6f4a69f : nop
        mov dword ptr ds : [ecx+4], edx
        public_6f4a6a2 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_6f4a511
        public_6f4a6ae : nop
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
        UNREACHABLE_TRAP(0x6f4a480)
    }
}

#undef public_6f4a4e9
#undef public_6f4a4fd
#undef public_6f4a503
#undef public_6f4a511
#undef public_6f4a552
#undef public_6f4a56b
#undef public_6f4a57e
#undef public_6f4a589
#undef public_6f4a58c
#undef public_6f4a591
#undef public_6f4a5ba
#undef public_6f4a5d3
#undef public_6f4a5e6
#undef public_6f4a5f0
#undef public_6f4a613
#undef public_6f4a62b
#undef public_6f4a63e
#undef public_6f4a64b
#undef public_6f4a64d
#undef public_6f4a653
#undef public_6f4a67c
#undef public_6f4a68f
#undef public_6f4a69a
#undef public_6f4a69d
#undef public_6f4a69f
#undef public_6f4a6a2
#undef public_6f4a6ae
