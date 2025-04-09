#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_42cfd0);

#define public_42cfeb _public_42cfeb
#define public_42d003 _public_42d003
#define public_42d01e _public_42d01e

PROC_DECLARE(0x42cfd0, internal_42cfd0, public_42cfd0);
extern "C" NAKED register_t __cdecl internal_42cfd0()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi]
        sub eax, 5
        push edi
        je public_42d003
        dec eax
        je public_42cfeb
        dec eax
        je public_42d003
        pop edi
        mov dword ptr ds : [esi+4], 0
        pop esi
        ret 
        public_42cfeb : nop
        mov eax, dword ptr ds : [esi+4]
        xor edi, edi
        cmp eax, edi
        mov dword ptr ds : [esi+4], edi
        je public_42d01e
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [esi+4], edi
        pop edi
        pop esi
        ret 
        public_42d003 : nop
        mov eax, dword ptr ds : [esi+4]
        xor edi, edi
        cmp eax, edi
        je public_42d01e
        push eax
        push edi
        call dword ptr ds : [public_5c6f80]
        push eax
        call dword ptr ds : [public_5c6ed4]
        mov dword ptr ds : [esi+4], edi
        public_42d01e : nop
        mov dword ptr ds : [esi+4], edi
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x42cfd0)
    }
}

#undef public_42cfeb
#undef public_42d003
#undef public_42d01e
