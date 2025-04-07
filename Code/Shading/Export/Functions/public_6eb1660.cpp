#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb1660);

#define public_6eb167b _public_6eb167b
#define public_6eb1693 _public_6eb1693
#define public_6eb16ae _public_6eb16ae

PROC_DECLARE(0x6eb1660, internal_6eb1660, public_6eb1660);
extern "C" NAKED register_t __cdecl internal_6eb1660()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi]
        sub eax, 5
        push edi
        je public_6eb1693
        dec eax
        je public_6eb167b
        dec eax
        je public_6eb1693
        pop edi
        mov dword ptr ds : [esi+4], 0
        pop esi
        ret 
        public_6eb167b : nop
        mov eax, dword ptr ds : [esi+4]
        xor edi, edi
        cmp eax, edi
        mov dword ptr ds : [esi+4], edi
        je public_6eb16ae
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+4], edi
        pop edi
        pop esi
        ret 
        public_6eb1693 : nop
        mov eax, dword ptr ds : [esi+4]
        xor edi, edi
        cmp eax, edi
        je public_6eb16ae
        push eax
        push edi
        call dword ptr ds : [public_6ed1020]
        push eax
        call dword ptr ds : [public_6ed101c]
        mov dword ptr ds : [esi+4], edi
        public_6eb16ae : nop
        mov dword ptr ds : [esi+4], edi
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6eb1660)
    }
}

#undef public_6eb167b
#undef public_6eb1693
#undef public_6eb16ae
