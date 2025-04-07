#include "Alchemy-PCH.h"


#define public_620b42a _public_620b42a

PROC_DECLARE(0x620b400, internal_620b400, public_620b400);
extern "C" NAKED register_t __cdecl internal_620b400()
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
        je public_620b42a
        mov eax, 0xFFFFFFFD
        ret 0xC
        public_620b42a : nop
        mov eax, dword ptr ss : [esp+4]
        mov dword ptr ds : [edx], eax
        push eax
        mov ecx, dword ptr ds : [eax]
        call dword ptr ds : [ecx+4]
        xor eax, eax
        ret 0xC
        UNREACHABLE_TRAP(0x620b400)
    }
}

#undef public_620b42a
