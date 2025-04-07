#include "Alchemy-PCH.h"


#define public_624148a _public_624148a

PROC_DECLARE(0x6241460, internal_6241460, public_6241460);
extern "C" NAKED register_t __cdecl internal_6241460()
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
        je public_624148a
        mov eax, 0xFFFFFFFD
        ret 0xC
        public_624148a : nop
        mov eax, dword ptr ss : [esp+4]
        mov dword ptr ds : [edx], eax
        push eax
        mov ecx, dword ptr ds : [eax]
        call dword ptr ds : [ecx+4]
        xor eax, eax
        ret 0xC
        UNREACHABLE_TRAP(0x6241460)
    }
}

#undef public_624148a
