#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d8f510);
CLANG_FORWARD_PROC_SYMBOL(public_6da13c0);
CLANG_FORWARD_PROC_SYMBOL(public_6da16b0);

#define public_6dae474 _public_6dae474
#define public_6dae48c _public_6dae48c
#define public_6dae4b6 _public_6dae4b6
#define public_6dae4e0 _public_6dae4e0
#define public_6dae50a _public_6dae50a
#define public_6dae536 _public_6dae536
#define public_6dae56e _public_6dae56e
#define public_6dae5ac _public_6dae5ac
#define public_6dae5b8 _public_6dae5b8

PROC_DECLARE(0x6dae430, internal_6dae430, public_6dae430);
extern "C" NAKED register_t __cdecl internal_6dae430()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov ecx, dword ptr ss : [esp+0x14]
        lea esi, ds:[edi+0x10]
        push esi
        push eax
        mov dword ptr ds : [esi+8], ecx
        lea ebx, ds:[edi+0x18]
        push ebx
        mov ecx, edi
        mov dword ptr ds : [esi+4], eax
        mov dword ptr ds : [esi], 0
        mov dword ptr ds : [esi+0xC], 0
        call public_6da13c0
        test eax, eax
        mov dword ptr ds : [edi+0x1C], eax
        je public_6dae474
        pop edi
        pop esi
        pop ebp
        mov eax, 0x17
        pop ebx
        ret 0xC
        public_6dae474 : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        mov ecx, 0x17
        jbe public_6dae48c
        mov dword ptr ds : [esi+0xC], ecx
        public_6dae48c : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        jne public_6dae5b8
        mov eax, dword ptr ds : [ebx]
        mov edx, dword ptr ds : [eax]
        add eax, 4
        mov dword ptr ds : [ebx], eax
        mov dword ptr ds : [edi+0x20], edx
        mov ebp, dword ptr ds : [esi]
        mov edx, dword ptr ds : [esi+4]
        add ebp, 4
        mov eax, ebp
        cmp eax, edx
        mov dword ptr ds : [esi], ebp
        jbe public_6dae4b6
        mov dword ptr ds : [esi+0xC], ecx
        public_6dae4b6 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        jne public_6dae5b8
        mov eax, dword ptr ds : [ebx]
        mov edx, dword ptr ds : [eax]
        add eax, 4
        mov dword ptr ds : [ebx], eax
        mov dword ptr ds : [edi+0x24], edx
        mov ebp, dword ptr ds : [esi]
        mov edx, dword ptr ds : [esi+4]
        add ebp, 4
        mov eax, ebp
        cmp eax, edx
        mov dword ptr ds : [esi], ebp
        jbe public_6dae4e0
        mov dword ptr ds : [esi+0xC], ecx
        public_6dae4e0 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        jne public_6dae5b8
        mov eax, dword ptr ds : [ebx]
        mov edx, dword ptr ds : [eax]
        add eax, 4
        mov dword ptr ds : [ebx], eax
        mov dword ptr ds : [edi+0x28], edx
        mov ebp, dword ptr ds : [esi]
        mov edx, dword ptr ds : [esi+4]
        add ebp, 2
        mov eax, ebp
        cmp eax, edx
        mov dword ptr ds : [esi], ebp
        jbe public_6dae50a
        mov dword ptr ds : [esi+0xC], ecx
        public_6dae50a : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        jne public_6dae5b8
        mov eax, dword ptr ds : [ebx]
        mov dx, word ptr ds : [eax]
        add eax, 2
        mov dword ptr ds : [ebx], eax
        mov word ptr ds : [edi+0x2C], dx
        mov ebp, dword ptr ds : [esi]
        mov edx, dword ptr ds : [esi+4]
        add ebp, 0xC
        mov eax, ebp
        cmp eax, edx
        mov dword ptr ds : [esi], ebp
        jbe public_6dae536
        mov dword ptr ds : [esi+0xC], ecx
        public_6dae536 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        jne public_6dae5b8
        mov ebp, dword ptr ds : [ebx]
        push ebp
        lea ecx, ds:[edi+0x30]
        call public_6d8f510
        mov eax, dword ptr ss : [esp+0x18]
        push esi
        push eax
        add ebp, 0xC
        push ebx
        mov ecx, edi
        mov dword ptr ds : [ebx], ebp
        call public_6da13c0
        test eax, eax
        mov dword ptr ds : [edi+0x1C], eax
        je public_6dae56e
        pop edi
        pop esi
        pop ebp
        mov eax, 0x17
        pop ebx
        ret 0xC
        public_6dae56e : nop
        mov ecx, dword ptr ds : [esi]
        mov edx, dword ptr ss : [esp+0x1C]
        mov dword ptr ds : [edx], ecx
        mov eax, dword ptr ds : [edi+0xC]
        push eax
        call public_6da16b0
        mov ecx, eax
        mov edx, dword ptr ds : [ecx+4]
        mov ebp, dword ptr ds : [ecx+0x1C]
        mov eax, dword ptr ds : [ecx+0x14]
        add esp, 4
        inc edx
        mov dword ptr ds : [ecx+4], edx
        mov edi, edx
        mov edx, dword ptr ds : [esi]
        add edx, 2
        add ebp, edx
        mov dword ptr ds : [ecx+0x1C], ebp
        mov esi, dword ptr ds : [esi]
        add eax, 2
        cmp esi, eax
        jbe public_6dae5ac
        add esi, 2
        mov dword ptr ds : [ecx+0x14], esi
        public_6dae5ac : nop
        mov eax, dword ptr ds : [ecx+0x1C]
        xor edx, edx
        div edi
        mov dword ptr ds : [ecx+0xC], eax
        xor eax, eax
        public_6dae5b8 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6dae430)
    }
}

#undef public_6dae474
#undef public_6dae48c
#undef public_6dae4b6
#undef public_6dae4e0
#undef public_6dae50a
#undef public_6dae536
#undef public_6dae56e
#undef public_6dae5ac
#undef public_6dae5b8
