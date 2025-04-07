#include "Alchemy-PCH.h"


#define public_621c4ea _public_621c4ea

PROC_DECLARE(0x621c4c0, internal_621c4c0, public_621c4c0);
extern "C" NAKED register_t __cdecl internal_621c4c0()
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
        je public_621c4ea
        mov eax, 0xFFFFFFFD
        ret 0xC
        public_621c4ea : nop
        mov eax, dword ptr ss : [esp+4]
        mov dword ptr ds : [edx], eax
        push eax
        mov ecx, dword ptr ds : [eax]
        call dword ptr ds : [ecx+4]
        xor eax, eax
        ret 0xC
        UNREACHABLE_TRAP(0x621c4c0)
    }
}

#undef public_621c4ea
