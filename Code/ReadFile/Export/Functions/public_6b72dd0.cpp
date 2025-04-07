#include "ReadFile-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6b72dd0);

#define public_6b72dee _public_6b72dee
#define public_6b72dfc _public_6b72dfc

PROC_DECLARE(0x6b72dd0, internal_6b72dd0, public_6b72dd0);
extern "C" NAKED register_t __cdecl internal_6b72dd0()
{
    __asm
    {
        push esi
        mov esi, ecx
        push edi
        xor edi, edi
        cmp dword ptr ds : [esi], edi
        je public_6b72dfc
        mov eax, dword ptr ds : [esi+4]
        cmp eax, edi
        je public_6b72dee
        push eax
        call dword ptr ds : [public_6b79010]
        mov dword ptr ds : [esi+4], edi
        mov dword ptr ds : [esi+8], edi
        public_6b72dee : nop
        mov eax, dword ptr ds : [esi]
        push eax
        call dword ptr ds : [public_6b79014]
        mov dword ptr ds : [esi], edi
        pop edi
        pop esi
        ret 
        public_6b72dfc : nop
        mov dword ptr ds : [esi+4], edi
        mov dword ptr ds : [esi+8], edi
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6b72dd0)
    }
}

#undef public_6b72dee
#undef public_6b72dfc
