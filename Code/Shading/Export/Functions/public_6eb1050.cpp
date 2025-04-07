#include "Shading-PCH.h"


#define public_6eb107a _public_6eb107a

PROC_DECLARE(0x6eb1050, internal_6eb1050, public_6eb1050);
extern "C" NAKED register_t __cdecl internal_6eb1050()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+0xC]
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        push edi
        mov edi, offset public_6ed4020
        mov ecx, 0x17
        xor eax, eax
        mov dword ptr ds : [edx], 0
        repe cmpsb
        pop edi
        pop esi
        je public_6eb107a
        mov eax, 0xFFFFFFFD
        ret 0xC
        public_6eb107a : nop
        mov eax, dword ptr ss : [esp+4]
        mov dword ptr ds : [edx], eax
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+4]
        xor eax, eax
        ret 0xC
        UNREACHABLE_TRAP(0x6eb1050)
    }
}

#undef public_6eb107a
