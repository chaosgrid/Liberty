#include "Alchemy-PCH.h"


#define public_62418aa _public_62418aa

PROC_DECLARE(0x6241880, internal_6241880, public_6241880);
extern "C" NAKED register_t __cdecl internal_6241880()
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
        je public_62418aa
        mov eax, 0xFFFFFFFD
        ret 0xC
        public_62418aa : nop
        mov eax, dword ptr ss : [esp+4]
        mov dword ptr ds : [edx], eax
        push eax
        mov ecx, dword ptr ds : [eax]
        call dword ptr ds : [ecx+4]
        xor eax, eax
        ret 0xC
        UNREACHABLE_TRAP(0x6241880)
    }
}

#undef public_62418aa
