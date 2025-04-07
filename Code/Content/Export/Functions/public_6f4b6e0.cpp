#include "Content-PCH.h"


#define public_6f4b6f4 _public_6f4b6f4
#define public_6f4b711 _public_6f4b711

PROC_DECLARE(0x6f4b6e0, internal_6f4b6e0, public_6f4b6e0);
extern "C" NAKED register_t __cdecl internal_6f4b6e0()
{
    __asm
    {
        push esi
        mov esi, ecx
        mov eax, dword ptr ds : [esi+0x204]
        push edi
        mov edi, dword ptr ds : [esi+0x200]
        cmp edi, eax
        je public_6f4b711
        public_6f4b6f4 : nop
        mov ecx, dword ptr ds : [edi]
        mov edx, dword ptr ds : [ecx+0xC]
        mov eax, dword ptr ds : [esi]
        push edx
        mov ecx, esi
        call dword ptr ds : [eax+0x98]
        mov eax, dword ptr ds : [esi+0x204]
        add edi, 4
        cmp edi, eax
        jne public_6f4b6f4
        public_6f4b711 : nop
        pop edi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6f4b6e0)
    }
}

#undef public_6f4b6f4
#undef public_6f4b711
