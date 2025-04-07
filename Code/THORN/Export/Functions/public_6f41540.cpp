#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f41540);

#define public_6f415ba _public_6f415ba
#define public_6f415d0 _public_6f415d0
#define public_6f415e3 _public_6f415e3

PROC_DECLARE(0x6f41540, internal_6f41540, public_6f41540);
extern "C" NAKED register_t __cdecl internal_6f41540()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push ebx
        push esi
        mov esi, ecx
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [esi+0xF0], ecx
        mov edx, dword ptr ds : [eax+8]
        mov dword ptr ds : [esi+0xF4], edx
        mov ecx, dword ptr ds : [eax]
        lea ebx, ds:[esi+0xEC]
        mov dword ptr ds : [ebx], ecx
        mov edx, dword ptr ds : [eax+0xC]
        mov eax, dword ptr ds : [esi+0xE4]
        test eax, eax
        push edi
        mov dword ptr ds : [esi+0xF8], edx
        je public_6f415ba
        mov edx, dword ptr ds : [ebx]
        mov ecx, dword ptr ds : [eax]
        push edx
        push eax
        call dword ptr ds : [ecx+0xC]
        mov edx, dword ptr ds : [esi+0xF8]
        mov eax, dword ptr ds : [esi+0xE4]
        mov ecx, dword ptr ds : [eax]
        push edx
        push eax
        call dword ptr ds : [ecx+0x14]
        mov edx, dword ptr ds : [esi+0xF0]
        mov eax, dword ptr ds : [esi+0xE4]
        mov ecx, dword ptr ds : [eax]
        push edx
        push eax
        call dword ptr ds : [ecx+0x18]
        mov edx, dword ptr ds : [esi+0xF4]
        mov eax, dword ptr ds : [esi+0xE4]
        mov ecx, dword ptr ds : [eax]
        push edx
        push eax
        call dword ptr ds : [ecx+0x1C]
        public_6f415ba : nop
        cmp dword ptr ds : [esi+0x90], 4
        je public_6f415e3
        mov eax, dword ptr ds : [esi+0x88]
        mov edi, dword ptr ds : [eax]
        cmp edi, eax
        je public_6f415e3
        nop 
        public_6f415d0 : nop
        mov ecx, dword ptr ds : [edi+8]
        push ebx
        call public_6f41540
        mov edi, dword ptr ds : [edi]
        cmp edi, dword ptr ds : [esi+0x88]
        jne public_6f415d0
        public_6f415e3 : nop
        pop edi
        pop esi
        pop ebx
        ret 4
        UNREACHABLE_TRAP(0x6f41540)
    }
}

#undef public_6f415ba
#undef public_6f415d0
#undef public_6f415e3
