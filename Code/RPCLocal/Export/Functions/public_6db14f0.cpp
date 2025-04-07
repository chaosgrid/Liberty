#include "RPCLocal-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d8f510);
CLANG_FORWARD_PROC_SYMBOL(public_6da1380);
CLANG_FORWARD_PROC_SYMBOL(public_6da13c0);
CLANG_FORWARD_PROC_SYMBOL(public_6da16b0);

#define public_6db153f _public_6db153f
#define public_6db1556 _public_6db1556
#define public_6db156c _public_6db156c
#define public_6db158f _public_6db158f
#define public_6db15a5 _public_6db15a5
#define public_6db15f0 _public_6db15f0
#define public_6db1623 _public_6db1623

PROC_DECLARE(0x6db14f0, internal_6db14f0, public_6db14f0);
extern "C" NAKED register_t __cdecl internal_6db14f0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        sub esp, 0xC
        push ebx
        push ebp
        push esi
        push edi
        mov edi, ecx
        mov ecx, dword ptr ss : [esp+0x20]
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
        je public_6db153f
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        add esp, 0xC
        ret 0xC
        public_6db153f : nop
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 4
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6db1556
        mov dword ptr ds : [esi+0xC], 0x16
        public_6db1556 : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        je public_6db156c
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        add esp, 0xC
        ret 0xC
        public_6db156c : nop
        mov eax, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [edi+0x20]
        mov dword ptr ds : [eax], ecx
        add eax, 4
        mov dword ptr ds : [ebx], eax
        mov edx, dword ptr ds : [esi]
        mov ecx, dword ptr ds : [esi+4]
        add edx, 0xC
        mov eax, edx
        cmp eax, ecx
        mov dword ptr ds : [esi], edx
        jbe public_6db158f
        mov dword ptr ds : [esi+0xC], 0x16
        public_6db158f : nop
        mov eax, dword ptr ds : [edi+0x1C]
        test eax, eax
        je public_6db15a5
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        add esp, 0xC
        ret 0xC
        public_6db15a5 : nop
        mov edx, dword ptr ds : [edi+0x24]
        mov ecx, dword ptr ds : [edi+0x2C]
        mov ebp, dword ptr ds : [ebx]
        mov eax, dword ptr ds : [edi+0x28]
        mov dword ptr ss : [esp+0x10], edx
        lea edx, ss:[esp+0x10]
        mov dword ptr ss : [esp+0x18], ecx
        push edx
        mov ecx, ebp
        mov dword ptr ss : [esp+0x18], eax
        call public_6d8f510
        mov eax, dword ptr ds : [edi+0x14]
        push esi
        push eax
        add ebp, 0xC
        push ebx
        mov ecx, edi
        mov dword ptr ds : [ebx], ebp
        call public_6da13c0
        test eax, eax
        mov dword ptr ds : [edi+0x1C], eax
        je public_6db15f0
        pop edi
        pop esi
        pop ebp
        mov eax, 0x16
        pop ebx
        add esp, 0xC
        ret 0xC
        public_6db15f0 : nop
        mov ecx, dword ptr ds : [esi]
        mov edx, dword ptr ss : [esp+0x28]
        mov dword ptr ds : [edx], ecx
        mov eax, dword ptr ds : [edi+0xC]
        push eax
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
        jbe public_6db1623
        mov dword ptr ds : [ecx+0x10], esi
        public_6db1623 : nop
        mov eax, dword ptr ds : [ecx+0x18]
        xor edx, edx
        div edi
        pop edi
        pop esi
        pop ebp
        pop ebx
        mov dword ptr ds : [ecx+8], eax
        xor eax, eax
        add esp, 0xC
        ret 0xC
        UNREACHABLE_TRAP(0x6db14f0)
    }
}

#undef public_6db153f
#undef public_6db1556
#undef public_6db156c
#undef public_6db158f
#undef public_6db15a5
#undef public_6db15f0
#undef public_6db1623
