#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ce5a90);
CLANG_FORWARD_PROC_SYMBOL(public_6d5a1f0);
CLANG_FORWARD_PROC_SYMBOL(public_6d5af80);
CLANG_FORWARD_PROC_SYMBOL(public_6d60012);

#define public_6d5a260 _public_6d5a260
#define public_6d5a274 _public_6d5a274
#define public_6d5a27a _public_6d5a27a
#define public_6d5a288 _public_6d5a288
#define public_6d5a2c9 _public_6d5a2c9
#define public_6d5a2e2 _public_6d5a2e2
#define public_6d5a2f5 _public_6d5a2f5
#define public_6d5a300 _public_6d5a300
#define public_6d5a303 _public_6d5a303
#define public_6d5a308 _public_6d5a308
#define public_6d5a331 _public_6d5a331
#define public_6d5a34a _public_6d5a34a
#define public_6d5a35d _public_6d5a35d
#define public_6d5a367 _public_6d5a367
#define public_6d5a38a _public_6d5a38a
#define public_6d5a3a2 _public_6d5a3a2
#define public_6d5a3b5 _public_6d5a3b5
#define public_6d5a3c2 _public_6d5a3c2
#define public_6d5a3c4 _public_6d5a3c4
#define public_6d5a3ca _public_6d5a3ca
#define public_6d5a3f3 _public_6d5a3f3
#define public_6d5a406 _public_6d5a406
#define public_6d5a411 _public_6d5a411
#define public_6d5a414 _public_6d5a414
#define public_6d5a416 _public_6d5a416
#define public_6d5a419 _public_6d5a419
#define public_6d5a425 _public_6d5a425

PROC_DECLARE(0x6d5a1f0, internal_6d5a1f0, public_6d5a1f0);
extern "C" NAKED register_t __cdecl internal_6d5a1f0()
{
    __asm
    {
        push ebx
        push ebp
        push esi
        push edi
        push 0x24
        mov esi, ecx
        call public_6d60012
        mov edi, dword ptr ss : [esp+0x20]
        mov ebp, dword ptr ss : [esp+0x24]
        mov ebx, eax
        mov dword ptr ds : [ebx+4], edi
        mov byte ptr ds : [ebx+0x20], 0
        mov byte ptr ds : [ebx+0x21], 0
        mov eax, dword ptr ds : [esi+8]
        mov dword ptr ds : [ebx], eax
        mov ecx, dword ptr ds : [esi+8]
        lea edx, ds:[ebx+0xC]
        push ebp
        push edx
        mov dword ptr ds : [ebx+8], ecx
        call public_6ce5a90
        mov ecx, dword ptr ds : [esi+0x10]
        mov eax, dword ptr ds : [esi+4]
        add esp, 0xC
        inc ecx
        cmp edi, eax
        mov dword ptr ds : [esi+0x10], ecx
        je public_6d5a260
        mov eax, dword ptr ss : [esp+0x18]
        cmp eax, dword ptr ds : [esi+8]
        jne public_6d5a260
        lea ecx, ds:[edi+0xC]
        push ecx
        mov ecx, ebp
        call public_6d5af80
        test eax, eax
        jl public_6d5a260
        mov dword ptr ds : [edi+8], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, dword ptr ds : [eax+8]
        jne public_6d5a27a
        mov dword ptr ds : [eax+8], ebx
        jmp public_6d5a27a
        public_6d5a260 : nop
        mov dword ptr ds : [edi], ebx
        mov eax, dword ptr ds : [esi+4]
        cmp edi, eax
        jne public_6d5a274
        mov dword ptr ds : [eax+4], ebx
        mov edx, dword ptr ds : [esi+4]
        mov dword ptr ds : [edx+8], ebx
        jmp public_6d5a27a
        public_6d5a274 : nop
        cmp edi, dword ptr ds : [eax]
        jne public_6d5a27a
        mov dword ptr ds : [eax], ebx
        public_6d5a27a : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp ebx, dword ptr ds : [ecx+4]
        mov eax, ebx
        je public_6d5a425
        public_6d5a288 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov dl, byte ptr ds : [ecx+0x20]
        test dl, dl
        jne public_6d5a425
        mov edi, dword ptr ds : [ecx+4]
        mov edx, dword ptr ds : [edi]
        cmp ecx, edx
        jne public_6d5a367
        mov edx, dword ptr ds : [edi+8]
        cmp byte ptr ds : [edx+0x20], 0
        jne public_6d5a2c9
        mov byte ptr ds : [ecx+0x20], 1
        mov byte ptr ds : [edx+0x20], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x20], 0
        mov edx, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [edx+4]
        jmp public_6d5a419
        public_6d5a2c9 : nop
        cmp eax, dword ptr ds : [ecx+8]
        jne public_6d5a308
        mov eax, ecx
        mov ecx, dword ptr ds : [eax+8]
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [eax+8], edx
        mov edx, dword ptr ds : [ecx]
        cmp edx, dword ptr ds : [esi+8]
        je public_6d5a2e2
        mov dword ptr ds : [edx+4], eax
        public_6d5a2e2 : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_6d5a2f5
        mov dword ptr ds : [edx+4], ecx
        jmp public_6d5a303
        public_6d5a2f5 : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx]
        jne public_6d5a300
        mov dword ptr ds : [edx], ecx
        jmp public_6d5a303
        public_6d5a300 : nop
        mov dword ptr ds : [edx+8], ecx
        public_6d5a303 : nop
        mov dword ptr ds : [ecx], eax
        mov dword ptr ds : [eax+4], ecx
        public_6d5a308 : nop
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x20], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x20], 0
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [ecx]
        mov edi, dword ptr ds : [edx+8]
        mov dword ptr ds : [ecx], edi
        mov edi, dword ptr ds : [edx+8]
        cmp edi, dword ptr ds : [esi+8]
        je public_6d5a331
        mov dword ptr ds : [edi+4], ecx
        public_6d5a331 : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_6d5a34a
        mov dword ptr ds : [edi+4], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_6d5a416
        public_6d5a34a : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi+8]
        jne public_6d5a35d
        mov dword ptr ds : [edi+8], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_6d5a416
        public_6d5a35d : nop
        mov dword ptr ds : [edi], edx
        mov dword ptr ds : [edx+8], ecx
        jmp public_6d5a416
        public_6d5a367 : nop
        cmp byte ptr ds : [edx+0x20], 0
        jne public_6d5a38a
        mov byte ptr ds : [ecx+0x20], 1
        mov byte ptr ds : [edx+0x20], 1
        mov ecx, dword ptr ds : [eax+4]
        mov edx, dword ptr ds : [ecx+4]
        mov byte ptr ds : [edx+0x20], 0
        mov eax, dword ptr ds : [eax+4]
        mov eax, dword ptr ds : [eax+4]
        jmp public_6d5a419
        public_6d5a38a : nop
        cmp eax, dword ptr ds : [ecx]
        jne public_6d5a3ca
        mov eax, ecx
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ds : [ecx+8]
        mov dword ptr ds : [eax], edx
        mov edx, dword ptr ds : [ecx+8]
        cmp edx, dword ptr ds : [esi+8]
        je public_6d5a3a2
        mov dword ptr ds : [edx+4], eax
        public_6d5a3a2 : nop
        mov edx, dword ptr ds : [eax+4]
        mov dword ptr ds : [ecx+4], edx
        mov edx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [edx+4]
        jne public_6d5a3b5
        mov dword ptr ds : [edx+4], ecx
        jmp public_6d5a3c4
        public_6d5a3b5 : nop
        mov edx, dword ptr ds : [eax+4]
        cmp eax, dword ptr ds : [edx+8]
        jne public_6d5a3c2
        mov dword ptr ds : [edx+8], ecx
        jmp public_6d5a3c4
        public_6d5a3c2 : nop
        mov dword ptr ds : [edx], ecx
        public_6d5a3c4 : nop
        mov dword ptr ds : [ecx+8], eax
        mov dword ptr ds : [eax+4], ecx
        public_6d5a3ca : nop
        mov ecx, dword ptr ds : [eax+4]
        mov byte ptr ds : [ecx+0x20], 1
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov byte ptr ds : [ecx+0x20], 0
        mov edx, dword ptr ds : [eax+4]
        mov ecx, dword ptr ds : [edx+4]
        mov edx, dword ptr ds : [ecx+8]
        mov edi, dword ptr ds : [edx]
        mov dword ptr ds : [ecx+8], edi
        mov edi, dword ptr ds : [edx]
        cmp edi, dword ptr ds : [esi+8]
        je public_6d5a3f3
        mov dword ptr ds : [edi+4], ecx
        public_6d5a3f3 : nop
        mov edi, dword ptr ds : [ecx+4]
        mov dword ptr ds : [edx+4], edi
        mov edi, dword ptr ds : [esi+4]
        cmp ecx, dword ptr ds : [edi+4]
        jne public_6d5a406
        mov dword ptr ds : [edi+4], edx
        jmp public_6d5a414
        public_6d5a406 : nop
        mov edi, dword ptr ds : [ecx+4]
        cmp ecx, dword ptr ds : [edi]
        jne public_6d5a411
        mov dword ptr ds : [edi], edx
        jmp public_6d5a414
        public_6d5a411 : nop
        mov dword ptr ds : [edi+8], edx
        public_6d5a414 : nop
        mov dword ptr ds : [edx], ecx
        public_6d5a416 : nop
        mov dword ptr ds : [ecx+4], edx
        public_6d5a419 : nop
        mov ecx, dword ptr ds : [esi+4]
        cmp eax, dword ptr ds : [ecx+4]
        jne public_6d5a288
        public_6d5a425 : nop
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [edx+4]
        pop edi
        mov byte ptr ds : [eax+0x20], 1
        mov eax, dword ptr ss : [esp+0x10]
        pop esi
        pop ebp
        mov dword ptr ds : [eax], ebx
        pop ebx
        ret 0x10
        UNREACHABLE_TRAP(0x6d5a1f0)
    }
}

#undef public_6d5a260
#undef public_6d5a274
#undef public_6d5a27a
#undef public_6d5a288
#undef public_6d5a2c9
#undef public_6d5a2e2
#undef public_6d5a2f5
#undef public_6d5a300
#undef public_6d5a303
#undef public_6d5a308
#undef public_6d5a331
#undef public_6d5a34a
#undef public_6d5a35d
#undef public_6d5a367
#undef public_6d5a38a
#undef public_6d5a3a2
#undef public_6d5a3b5
#undef public_6d5a3c2
#undef public_6d5a3c4
#undef public_6d5a3ca
#undef public_6d5a3f3
#undef public_6d5a406
#undef public_6d5a411
#undef public_6d5a414
#undef public_6d5a416
#undef public_6d5a419
#undef public_6d5a425
