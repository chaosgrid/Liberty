#include "SoundManager-PCH.h"


#define public_6ee82ba _public_6ee82ba

PROC_DECLARE(0x6ee8290, internal_6ee8290, public_6ee8290);
extern "C" NAKED register_t __cdecl internal_6ee8290()
{
    __asm
    {
        mov edx, dword ptr ss : [esp+0xC]
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        push edi
        mov edi, offset public_6eead8c
        mov ecx, 0x17
        xor eax, eax
        mov dword ptr ds : [edx], 0
        repe cmpsb
        pop edi
        pop esi
        je public_6ee82ba
        mov eax, 0xFFFFFFFD
        ret 0xC
        public_6ee82ba : nop
        mov eax, dword ptr ss : [esp+4]
        mov dword ptr ds : [edx], eax
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+4]
        xor eax, eax
        ret 0xC
        UNREACHABLE_TRAP(0x6ee8290)
    }
}

#undef public_6ee82ba
