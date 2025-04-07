#include "Content-PCH.h"


#define public_6eb9ac3 _public_6eb9ac3
#define public_6eb9aea _public_6eb9aea

PROC_DECLARE(0x6eb9aa0, internal_6eb9aa0, public_6eb9aa0);
extern "C" NAKED register_t __cdecl internal_6eb9aa0()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x2AC]
        cmp eax, dword ptr ds : [esi+0x2A8]
        je public_6eb9aea
        test eax, eax
        mov dword ptr ds : [esi+0x2A8], eax
        jne public_6eb9ac3
        mov eax, dword ptr ds : [esi]
        mov ecx, esi
        pop esi
        jmp dword ptr ds : [eax+0x60]
        public_6eb9ac3 : nop
        cmp eax, 1
        jne public_6eb9aea
        mov edx, dword ptr ds : [esi]
        mov ecx, esi
        call dword ptr ds : [edx+0x5C]
        mov ecx, dword ptr ds : [esi+0x2A4]
        test ecx, ecx
        je public_6eb9aea
        mov edx, dword ptr ds : [esi+4]
        mov eax, dword ptr ds : [ecx]
        push edx
        mov edx, dword ptr ds : [esi+0x2B8]
        push edx
        push 3
        call dword ptr ds : [eax]
        public_6eb9aea : nop
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6eb9aa0)
    }
}

#undef public_6eb9ac3
#undef public_6eb9aea
