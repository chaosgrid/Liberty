#include "EngBase-PCH.h"


#define public_6627c2a _public_6627c2a

PROC_DECLARE(0x6627c00, internal_6627c00, public_6627c00);
extern "C" NAKED register_t __cdecl internal_6627c00()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+0xC]
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        push edi
        mov edi, offset public_662a288
        mov ecx, 0x17
        xor eax, eax
        mov dword ptr ds : [edx], 0
        repe cmpsb
        pop edi
        pop esi
        je public_6627c2a
        mov eax, 0xFFFFFFFD
        ret 0xC
        public_6627c2a : nop
        mov eax, dword ptr ss : [esp+4]
        mov dword ptr ds : [edx], eax
        push eax
        mov ecx, dword ptr ds : [eax]
        call dword ptr ds : [ecx+4]
        xor eax, eax
        ret 0xC
        UNREACHABLE_TRAP(0x6627c00)
    }
}

#undef public_6627c2a
