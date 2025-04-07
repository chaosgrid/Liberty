#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d063a0);
CLANG_FORWARD_PROC_SYMBOL(public_6d068e0);
CLANG_FORWARD_PROC_SYMBOL(public_6d60012);

#define public_6d06409 _public_6d06409
#define public_6d0641d _public_6d0641d
#define public_6d06423 _public_6d06423
#define public_6d06431 _public_6d06431
#define public_6d06472 _public_6d06472
#define public_6d0648b _public_6d0648b
#define public_6d0649e _public_6d0649e
#define public_6d064a9 _public_6d064a9
#define public_6d064ac _public_6d064ac
#define public_6d064b1 _public_6d064b1
#define public_6d064da _public_6d064da
#define public_6d064f3 _public_6d064f3
#define public_6d06506 _public_6d06506
#define public_6d06510 _public_6d06510
#define public_6d06533 _public_6d06533
#define public_6d0654b _public_6d0654b
#define public_6d0655e _public_6d0655e
#define public_6d0656b _public_6d0656b
#define public_6d0656d _public_6d0656d
#define public_6d06573 _public_6d06573
#define public_6d0659c _public_6d0659c
#define public_6d065af _public_6d065af
#define public_6d065ba _public_6d065ba
#define public_6d065bd _public_6d065bd
#define public_6d065bf _public_6d065bf
#define public_6d065c2 _public_6d065c2
#define public_6d065ce _public_6d065ce

PROC_DECLARE(0x6d063a0, internal_6d063a0, public_6d063a0);
extern "C" NAKED register_t __cdecl internal_6d063a0()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        push edi
        push 0x2C
        mov esi, ecx
        call public_6d60012
        mov edi, dword ptr ss : [esp+0x20]
        mov ebp, dword ptr ss : [esp+0x24]
        mov ebx, eax
        mov dword ptr ds : [ebx+4], edi
        mov byte ptr ds : [ebx+0x28], 0
        mov byte ptr ds : [ebx+0x29], 0
        mov eax, dword ptr ds : [esi+8]
        mov dword ptr ds : [ebx], eax
        mov ecx, dword ptr ds : [esi+8]
        lea edx, ds:[ebx+0xC]
        push ebp
        push edx
        mov dword ptr ds : [ebx+8], ecx
        call public_6d068e0
        mov ecx, dword ptr ds : [esi+0x10]
        mov eax, dword ptr ds : [esi+4]
        add esp, 0xC
        inc ecx
        cmp edi, eax
        mov dword ptr ds : [esi+0x10], ecx
        je public_6d06409
        mov eax, dword ptr ss : [esp+0x18]
        cmp eax, dword ptr ds : [esi+8]
        jne public_6d06409
        mov ecx, dword ptr ss : [ebp]
        cmp ecx, dword ptr ds : [edi+0xC]
        jb public_6d06409
        mov dword ptr ds : [edi+8], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, dword ptr ds : [eax+8]
        jne public_6d06423
        mov dword ptr ds : [eax+8], ebx
        jmp public_6d06423
        public_6d06409 : nop
        mov dword ptr ds : [edi], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, eax
        jne public_6d0641d
        mov dword ptr ds : [eax+4], ebx
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [edx+8], ebx
        jmp public_6d06423
        public_6d0641d : nop
        cmp edi, dword ptr ds : [eax]
        jne public_6d06423
        mov dword ptr ds : [eax], ebx
        public_6d06423 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp ebx, dword ptr ds : [ecx+4]
        mov eax, ebx
        je public_6d065ce
        public_6d06431 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [ecx+0x28]
        test dl, dl
        jne public_6d065ce
        mov edi, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [edi]
        cmp ecx, edx
        jne public_6d06510
        mov edx, dword ptr ds : [edi+8]
        cmp byte ptr ds : [edx+0x28], 0
        jne public_6d06472
        mov byte ptr ds : [ecx+0x28], 1
        mov byte ptr ds : [edx+0x28], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x28], 0
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [edx+4]
        jmp public_6d065c2
        public_6d06472 : nop
        cmp eax, dword ptr ds : [ecx+8]
        jne public_6d064b1
        mov eax, ecx
        mov ecx, dword ptr ds : [eax+8]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax+8], edx
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [esi+8]
        je public_6d0648b
        mov dword ptr ds : [edx+4], eax
        public_6d0648b : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_6d0649e
        mov dword ptr ds : [edx+4], ecx
        jmp public_6d064ac
        public_6d0649e : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx]
        jne public_6d064a9
        mov dword ptr ds : [edx], ecx
        jmp public_6d064ac
        public_6d064a9 : nop
        mov dword ptr ds : [edx+8], ecx
        public_6d064ac : nop
        mov dword ptr ds : [ecx], eax
        mov dword ptr ds : [eax+4], ecx
        public_6d064b1 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x28], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x28], 0
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [ecx]
        mov edi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], edi
        mov edi, dword ptr ds : [edx+8]
        cmp edi, dword ptr ds : [esi+8]
        je public_6d064da
        mov dword ptr ds : [edi+4], ecx
        public_6d064da : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_6d064f3
        mov dword ptr ds : [edi+4], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_6d065bf
        public_6d064f3 : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_6d06506
        mov dword ptr ds : [edi+8], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_6d065bf
        public_6d06506 : nop
        mov dword ptr ds : [edi], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_6d065bf
        public_6d06510 : nop
        cmp byte ptr ds : [edx+0x28], 0
        jne public_6d06533
        mov byte ptr ds : [ecx+0x28], 1
        mov byte ptr ds : [edx+0x28], 1
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x28], 0
        mov eax, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+4]
        jmp public_6d065c2
        public_6d06533 : nop
        cmp eax, dword ptr ds : [ecx]
        jne public_6d06573
        mov eax, ecx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ds : [ecx+8]
        cmp edx, dword ptr ds : [esi+8]
        je public_6d0654b
        mov dword ptr ds : [edx+4], eax
        public_6d0654b : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_6d0655e
        mov dword ptr ds : [edx+4], ecx
        jmp public_6d0656d
        public_6d0655e : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx+8]
        jne public_6d0656b
        mov dword ptr ds : [edx+8], ecx
        jmp public_6d0656d
        public_6d0656b : nop
        mov dword ptr ds : [edx], ecx
        public_6d0656d : nop
        mov dword ptr ds : [ecx+8], eax
        mov dword ptr ds : [eax+4], ecx
        public_6d06573 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x28], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x28], 0
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [ecx+8]
        mov edi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], edi
        mov edi, dword ptr ds : [edx]
        cmp edi, dword ptr ds : [esi+8]
        je public_6d0659c
        mov dword ptr ds : [edi+4], ecx
        public_6d0659c : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_6d065af
        mov dword ptr ds : [edi+4], edx
        jmp public_6d065bd
        public_6d065af : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi]
        jne public_6d065ba
        mov dword ptr ds : [edi], edx
        jmp public_6d065bd
        public_6d065ba : nop
        mov dword ptr ds : [edi+8], edx
        public_6d065bd : nop
        mov dword ptr ds : [edx], ecx
        public_6d065bf : nop
        mov dword ptr ds : [ecx+4], edx
        public_6d065c2 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_6d06431
        public_6d065ce : nop
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        pop edi
        mov byte ptr ds : [eax+0x28], 1
        mov eax, dword ptr ss : [esp+0x10]
        pop esi
        pop ebp
        mov dword ptr ds : [eax], ebx
        pop ebx
        ret 0x10
        UNREACHABLE_TRAP(0x6d063a0)
    }
}

#undef public_6d06409
#undef public_6d0641d
#undef public_6d06423
#undef public_6d06431
#undef public_6d06472
#undef public_6d0648b
#undef public_6d0649e
#undef public_6d064a9
#undef public_6d064ac
#undef public_6d064b1
#undef public_6d064da
#undef public_6d064f3
#undef public_6d06506
#undef public_6d06510
#undef public_6d06533
#undef public_6d0654b
#undef public_6d0655e
#undef public_6d0656b
#undef public_6d0656d
#undef public_6d06573
#undef public_6d0659c
#undef public_6d065af
#undef public_6d065ba
#undef public_6d065bd
#undef public_6d065bf
#undef public_6d065c2
#undef public_6d065ce
