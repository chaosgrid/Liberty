#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6da1380);
CLANG_FORWARD_PROC_SYMBOL(public_6da13c0);
CLANG_FORWARD_PROC_SYMBOL(public_6da16b0);
CLANG_FORWARD_PROC_SYMBOL(public_6da2240);

#define public_6d8f889 _public_6d8f889
#define public_6d8f8a0 _public_6d8f8a0
#define public_6d8f8b3 _public_6d8f8b3
#define public_6d8f8d4 _public_6d8f8d4
#define public_6d8f8e7 _public_6d8f8e7
#define public_6d8f92b _public_6d8f92b
#define public_6d8f95b _public_6d8f95b
#define public_6d8f967 _public_6d8f967

PROC_DECLARE(0x6d8f840, internal_6d8f840, public_6d8f840);
extern "C" NAKED register_t __cdecl internal_6d8f840()
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
        mov dword ptr ds : [esi+4], eax
        mov edx, dword ptr ds : [ecx]
        mov dword ptr ds : [esi+8], edx
        mov dword ptr ds : [esi], 0
        mov dword ptr ds : [esi+0xC], 0
        mov eax, dword ptr ds : [edi+0x14]
        push esi
        push eax
        lea ebx, ds:[edi+0x18]
        push ebx
        mov ecx, edi
        call public_6da1380
        test eax, eax
        mov dword ptr ds : [edi+0x1C], eax
        je public_6d8f889
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6d8f889 : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6d8f8a0
        mov dword ptr ds : [esi+0xC], 0x16
        public_6d8f8a0 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        je public_6d8f8b3
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6d8f8b3 : nop
        mov eax, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [edi+0x28]
        mov dword ptr ds : [eax], ecx
        add eax, 4
        mov dword ptr ds : [ebx], eax
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        inc edx
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6d8f8d4
        mov dword ptr ds : [esi+0xC], 0x16
        public_6d8f8d4 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        je public_6d8f8e7
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6d8f8e7 : nop
        mov eax, dword ptr ds : [ebx]
        mov dl, byte ptr ds : [edi+0x24]
        mov ebp, dword ptr ss : [esp+0x1C]
        mov ecx, dword ptr ss : [esp+0x14]
        mov byte ptr ds : [eax], dl
        inc eax
        mov dword ptr ds : [ebx], eax
        mov eax, dword ptr ss : [esp+0x18]
        push ebp
        push eax
        push ecx
        mov ecx, edi
        call public_6da2240
        test eax, eax
        jne public_6d8f967
        mov edx, dword ptr ds : [edi+0x14]
        push esi
        push edx
        push ebx
        mov ecx, edi
        call public_6da13c0
        test eax, eax
        mov dword ptr ds : [edi+0x1C], eax
        je public_6d8f92b
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        ret 0xC
        public_6d8f92b : nop
        mov eax, dword ptr ds : [esi]
        mov dword ptr ss : [ebp], eax
        mov ecx, dword ptr ds : [edi+0xC]
        push ecx
        call public_6da16b0
        mov ecx, eax
        mov ebp, dword ptr ds : [ecx]
        mov ebx, dword ptr ds : [ecx+0x18]
        mov eax, dword ptr ds : [ecx+0x10]
        add esp, 4
        inc ebp
        mov dword ptr ds : [ecx], ebp
        mov edx, dword ptr ds : [esi]
        add ebx, edx
        mov dword ptr ds : [ecx+0x18], ebx
        mov esi, dword ptr ds : [esi]
        cmp esi, eax
        mov edi, ebp
        jbe public_6d8f95b
        mov dword ptr ds : [ecx+0x10], esi
        public_6d8f95b : nop
        mov eax, dword ptr ds : [ecx+0x18]
        xor edx, edx
        div edi
        mov dword ptr ds : [ecx+8], eax
        xor eax, eax
        public_6d8f967 : nop
        pop edi
        pop esi
        pop ebp
        pop ebx
        ret 0xC
        UNREACHABLE_TRAP(0x6d8f840)
    }
}

#undef public_6d8f889
#undef public_6d8f8a0
#undef public_6d8f8b3
#undef public_6d8f8d4
#undef public_6d8f8e7
#undef public_6d8f92b
#undef public_6d8f95b
#undef public_6d8f967
