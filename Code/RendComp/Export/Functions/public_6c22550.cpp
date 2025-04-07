#include "RendComp-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c22550);
CLANG_FORWARD_PROC_SYMBOL(public_6c23ea0);
CLANG_FORWARD_PROC_SYMBOL(public_6c34ea0);

#define public_6c22586 _public_6c22586
#define public_6c2259c _public_6c2259c
#define public_6c225b2 _public_6c225b2

PROC_DECLARE(0x6c22550, internal_6c22550, public_6c22550);
extern "C" NAKED register_t __cdecl internal_6c22550()
{
    __asm
    {
        push ebx
        push esi
        mov esi, ecx
        push edi
        mov dword ptr ds : [esi], offset public_6c36148
        mov dword ptr ds : [esi+4], offset public_6c36134
        mov dword ptr ds : [esi+8], offset public_6c36118
        call public_6c23ea0
        mov eax, dword ptr ds : [esi+0x224]
        xor ebx, ebx
        cmp eax, ebx
        je public_6c22586
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+0x224], ebx
        public_6c22586 : nop
        mov eax, dword ptr ds : [esi+0x220]
        cmp eax, ebx
        je public_6c2259c
        mov edx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [edx+8]
        mov dword ptr ds : [esi+0x220], ebx
        public_6c2259c : nop
        mov eax, dword ptr ds : [esi+0x21C]
        cmp eax, ebx
        je public_6c225b2
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+0x21C], ebx
        public_6c225b2 : nop
        mov edx, dword ptr ds : [esi+0x90]
        lea edi, ds:[esi+0x8C]
        push edx
        call public_6c34ea0
        mov eax, dword ptr ds : [edi+0xC]
        push eax
        call public_6c34ea0
        xor eax, eax
        mov ecx, 7
        rep stosd
        mov ecx, dword ptr ds : [esi+0x10]
        push ecx
        call public_6c34ea0
        add esp, 0xC
        pop edi
        mov dword ptr ds : [esi+0x10], ebx
        mov dword ptr ds : [esi+0x14], ebx
        mov dword ptr ds : [esi+0x18], ebx
        pop esi
        pop ebx
        ret 
        UNREACHABLE_TRAP(0x6c22550)
    }
}

#undef public_6c22586
#undef public_6c2259c
#undef public_6c225b2
