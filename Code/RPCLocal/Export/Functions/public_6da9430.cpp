#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d8f4f0);
CLANG_FORWARD_PROC_SYMBOL(public_6d8f510);
CLANG_FORWARD_PROC_SYMBOL(public_6da13c0);
CLANG_FORWARD_PROC_SYMBOL(public_6da16b0);

#define public_6da9474 _public_6da9474
#define public_6da948c _public_6da948c
#define public_6da94b6 _public_6da94b6
#define public_6da94e0 _public_6da94e0
#define public_6da9512 _public_6da9512
#define public_6da954a _public_6da954a
#define public_6da9588 _public_6da9588
#define public_6da9594 _public_6da9594

PROC_DECLARE(0x6da9430, internal_6da9430, public_6da9430);
extern "C" NAKED register_t __cdecl internal_6da9430()
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
        je public_6da9474
        pop edi
        pop esi
        pop ebp
        mov eax, 0x17
        pop ebx
        ret 0xC
        public_6da9474 : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        mov ecx, 0x17
        jbe public_6da948c
        mov dword ptr ds : [esi+0xC], ecx
        public_6da948c : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        jne public_6da9594
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
        jbe public_6da94b6
        mov dword ptr ds : [esi+0xC], ecx
        public_6da94b6 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        jne public_6da9594
        mov eax, dword ptr ds : [ebx]
        mov edx, dword ptr ds : [eax]
        add eax, 4
        mov dword ptr ds : [ebx], eax
        mov dword ptr ds : [edi+0x24], edx
        mov ebp, dword ptr ds : [esi]
        mov edx, dword ptr ds : [esi+4]
        add ebp, 0xC
        mov eax, ebp
        cmp eax, edx
        mov dword ptr ds : [esi], ebp
        jbe public_6da94e0
        mov dword ptr ds : [esi+0xC], ecx
        public_6da94e0 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        jne public_6da9594
        mov ebp, dword ptr ds : [ebx]
        push ebp
        lea ecx, ds:[edi+0x28]
        call public_6d8f510
        add ebp, 0xC
        mov dword ptr ds : [ebx], ebp
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 0x10
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6da9512
        mov dword ptr ds : [esi+0xC], 0x17
        public_6da9512 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        jne public_6da9594
        mov ebp, dword ptr ds : [ebx]
        push ebp
        lea ecx, ds:[edi+0x34]
        call public_6d8f4f0
        mov eax, dword ptr ss : [esp+0x18]
        push esi
        push eax
        add ebp, 0x10
        push ebx
        mov ecx, edi
        mov dword ptr ds : [ebx], ebp
        call public_6da13c0
        test eax, eax
        mov dword ptr ds : [edi+0x1C], eax
        je public_6da954a
        pop edi
        pop esi
        pop ebp
        mov eax, 0x17
        pop ebx
        ret 0xC
        public_6da954a : nop
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
        jbe public_6da9588
        add esi, 2
        mov dword ptr ds : [ecx+0x14], esi
        public_6da9588 : nop
        mov eax, dword ptr ds : [ecx+0x1C]
        xor edx, edx
        div edi
        mov dword ptr ds : [ecx+0xC], eax
        xor eax, eax
        public_6da9594 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6da9430)
    }
}

#undef public_6da9474
#undef public_6da948c
#undef public_6da94b6
#undef public_6da94e0
#undef public_6da9512
#undef public_6da954a
#undef public_6da9588
#undef public_6da9594
