#include "Alchemy-PCH.h"


#define public_620af6a _public_620af6a

PROC_DECLARE(0x620af40, internal_620af40, public_620af40);
extern "C" NAKED register_t __cdecl internal_620af40()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+0xC]
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        push edi
        mov edi, offset public_625554c
        mov ecx, 0x17
        xor eax, eax
        mov dword ptr ds : [edx], 0
        repe cmpsb
        pop edi
        pop esi
        je public_620af6a
        mov eax, 0xFFFFFFFD
        ret 0xC
        public_620af6a : nop
        mov eax, dword ptr ss : [esp+4]
        mov dword ptr ds : [edx], eax
        push eax
        mov ecx, dword ptr ds : [eax]
        call dword ptr ds : [ecx+4]
        xor eax, eax
        ret 0xC
        UNREACHABLE_TRAP(0x620af40)
    }
}

#undef public_620af6a
