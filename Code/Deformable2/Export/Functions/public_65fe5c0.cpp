#include "Deformable2-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65fe5c0);

#define public_65fe5db _public_65fe5db
#define public_65fe5f3 _public_65fe5f3
#define public_65fe60e _public_65fe60e

PROC_DECLARE(0x65fe5c0, internal_65fe5c0, public_65fe5c0);
extern "C" NAKED register_t __cdecl internal_65fe5c0()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi]
        sub eax, 5
        push edi
        je public_65fe5f3
        dec eax
        je public_65fe5db
        dec eax
        je public_65fe5f3
        pop edi
        mov dword ptr ds : [esi+4], 0
        pop esi
        ret 
        public_65fe5db : nop
        mov eax, dword ptr ds : [esi+4]
        xor edi, edi
        cmp eax, edi
        mov dword ptr ds : [esi+4], edi
        je public_65fe60e
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+4], edi
        pop edi
        pop esi
        ret 
        public_65fe5f3 : nop
        mov eax, dword ptr ds : [esi+4]
        xor edi, edi
        cmp eax, edi
        je public_65fe60e
        push eax
        push edi
        call dword ptr ds : [public_6601020]
        push eax
        call dword ptr ds : [public_6601018]
        mov dword ptr ds : [esi+4], edi
        public_65fe60e : nop
        mov dword ptr ds : [esi+4], edi
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x65fe5c0)
    }
}

#undef public_65fe5db
#undef public_65fe5f3
#undef public_65fe60e
