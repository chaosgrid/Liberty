#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6279af0);
CLANG_FORWARD_PROC_SYMBOL(public_631d190);
CLANG_FORWARD_PROC_SYMBOL(public_6391d9c);

#define public_631d1f9 _public_631d1f9
#define public_631d20d _public_631d20d
#define public_631d213 _public_631d213
#define public_631d221 _public_631d221
#define public_631d262 _public_631d262
#define public_631d27b _public_631d27b
#define public_631d28e _public_631d28e
#define public_631d299 _public_631d299
#define public_631d29c _public_631d29c
#define public_631d2a1 _public_631d2a1
#define public_631d2ca _public_631d2ca
#define public_631d2e3 _public_631d2e3
#define public_631d2f6 _public_631d2f6
#define public_631d300 _public_631d300
#define public_631d323 _public_631d323
#define public_631d33b _public_631d33b
#define public_631d34e _public_631d34e
#define public_631d35b _public_631d35b
#define public_631d35d _public_631d35d
#define public_631d363 _public_631d363
#define public_631d38c _public_631d38c
#define public_631d39f _public_631d39f
#define public_631d3aa _public_631d3aa
#define public_631d3ad _public_631d3ad
#define public_631d3af _public_631d3af
#define public_631d3b2 _public_631d3b2
#define public_631d3be _public_631d3be

PROC_DECLARE(0x631d190, internal_631d190, public_631d190);
extern "C" NAKED register_t __cdecl internal_631d190()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        push edi
        push 0x38
        mov esi, ecx
        call public_6391d9c
        mov edi, dword ptr ss : [esp+0x20]
        mov ebp, dword ptr ss : [esp+0x24]
        mov ebx, eax
        mov dword ptr ds : [ebx+4], edi
        mov byte ptr ds : [ebx+0x34], 0
        mov byte ptr ds : [ebx+0x35], 0
        mov eax, dword ptr ds : [esi+8]
        mov dword ptr ds : [ebx], eax
        mov ecx, dword ptr ds : [esi+8]
        lea edx, ds:[ebx+0xC]
        push ebp
        push edx
        mov dword ptr ds : [ebx+8], ecx
        call public_6279af0
        mov ecx, dword ptr ds : [esi+0x10]
        mov eax, dword ptr ds : [esi+4]
        add esp, 0xC
        inc ecx
        cmp edi, eax
        mov dword ptr ds : [esi+0x10], ecx
        je public_631d1f9
        mov eax, dword ptr ss : [esp+0x18]
        cmp eax, dword ptr ds : [esi+8]
        jne public_631d1f9
        mov ecx, dword ptr ss : [ebp]
        cmp ecx, dword ptr ds : [edi+0xC]
        jb public_631d1f9
        mov dword ptr ds : [edi+8], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, dword ptr ds : [eax+8]
        jne public_631d213
        mov dword ptr ds : [eax+8], ebx
        jmp public_631d213
        public_631d1f9 : nop
        mov dword ptr ds : [edi], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, eax
        jne public_631d20d
        mov dword ptr ds : [eax+4], ebx
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [edx+8], ebx
        jmp public_631d213
        public_631d20d : nop
        cmp edi, dword ptr ds : [eax]
        jne public_631d213
        mov dword ptr ds : [eax], ebx
        public_631d213 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp ebx, dword ptr ds : [ecx+4]
        mov eax, ebx
        je public_631d3be
        public_631d221 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [ecx+0x34]
        test dl, dl
        jne public_631d3be
        mov edi, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [edi]
        cmp ecx, edx
        jne public_631d300
        mov edx, dword ptr ds : [edi+8]
        cmp byte ptr ds : [edx+0x34], 0
        jne public_631d262
        mov byte ptr ds : [ecx+0x34], 1
        mov byte ptr ds : [edx+0x34], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x34], 0
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [edx+4]
        jmp public_631d3b2
        public_631d262 : nop
        cmp eax, dword ptr ds : [ecx+8]
        jne public_631d2a1
        mov eax, ecx
        mov ecx, dword ptr ds : [eax+8]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax+8], edx
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [esi+8]
        je public_631d27b
        mov dword ptr ds : [edx+4], eax
        public_631d27b : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_631d28e
        mov dword ptr ds : [edx+4], ecx
        jmp public_631d29c
        public_631d28e : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx]
        jne public_631d299
        mov dword ptr ds : [edx], ecx
        jmp public_631d29c
        public_631d299 : nop
        mov dword ptr ds : [edx+8], ecx
        public_631d29c : nop
        mov dword ptr ds : [ecx], eax
        mov dword ptr ds : [eax+4], ecx
        public_631d2a1 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x34], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x34], 0
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [ecx]
        mov edi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], edi
        mov edi, dword ptr ds : [edx+8]
        cmp edi, dword ptr ds : [esi+8]
        je public_631d2ca
        mov dword ptr ds : [edi+4], ecx
        public_631d2ca : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_631d2e3
        mov dword ptr ds : [edi+4], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_631d3af
        public_631d2e3 : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_631d2f6
        mov dword ptr ds : [edi+8], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_631d3af
        public_631d2f6 : nop
        mov dword ptr ds : [edi], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_631d3af
        public_631d300 : nop
        cmp byte ptr ds : [edx+0x34], 0
        jne public_631d323
        mov byte ptr ds : [ecx+0x34], 1
        mov byte ptr ds : [edx+0x34], 1
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x34], 0
        mov eax, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+4]
        jmp public_631d3b2
        public_631d323 : nop
        cmp eax, dword ptr ds : [ecx]
        jne public_631d363
        mov eax, ecx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ds : [ecx+8]
        cmp edx, dword ptr ds : [esi+8]
        je public_631d33b
        mov dword ptr ds : [edx+4], eax
        public_631d33b : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_631d34e
        mov dword ptr ds : [edx+4], ecx
        jmp public_631d35d
        public_631d34e : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx+8]
        jne public_631d35b
        mov dword ptr ds : [edx+8], ecx
        jmp public_631d35d
        public_631d35b : nop
        mov dword ptr ds : [edx], ecx
        public_631d35d : nop
        mov dword ptr ds : [ecx+8], eax
        mov dword ptr ds : [eax+4], ecx
        public_631d363 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x34], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x34], 0
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [ecx+8]
        mov edi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], edi
        mov edi, dword ptr ds : [edx]
        cmp edi, dword ptr ds : [esi+8]
        je public_631d38c
        mov dword ptr ds : [edi+4], ecx
        public_631d38c : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_631d39f
        mov dword ptr ds : [edi+4], edx
        jmp public_631d3ad
        public_631d39f : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi]
        jne public_631d3aa
        mov dword ptr ds : [edi], edx
        jmp public_631d3ad
        public_631d3aa : nop
        mov dword ptr ds : [edi+8], edx
        public_631d3ad : nop
        mov dword ptr ds : [edx], ecx
        public_631d3af : nop
        mov dword ptr ds : [ecx+4], edx
        public_631d3b2 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_631d221
        public_631d3be : nop
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        pop edi
        mov byte ptr ds : [eax+0x34], 1
        mov eax, dword ptr ss : [esp+0x10]
        pop esi
        pop ebp
        mov dword ptr ds : [eax], ebx
        pop ebx
        ret 0x10
        UNREACHABLE_TRAP(0x631d190)
    }
}

#undef public_631d1f9
#undef public_631d20d
#undef public_631d213
#undef public_631d221
#undef public_631d262
#undef public_631d27b
#undef public_631d28e
#undef public_631d299
#undef public_631d29c
#undef public_631d2a1
#undef public_631d2ca
#undef public_631d2e3
#undef public_631d2f6
#undef public_631d300
#undef public_631d323
#undef public_631d33b
#undef public_631d34e
#undef public_631d35b
#undef public_631d35d
#undef public_631d363
#undef public_631d38c
#undef public_631d39f
#undef public_631d3aa
#undef public_631d3ad
#undef public_631d3af
#undef public_631d3b2
#undef public_631d3be
