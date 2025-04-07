#include "Server-PCH.h"


#define public_6d1868c _public_6d1868c

PROC_DECLARE(0x6d18660, internal_6d18660, public_6d18660);
extern "C" NAKED register_t __cdecl internal_6d18660()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        test eax, 0x3FFFFFFF
        push esi
        mov esi, 0xFFFFFFFC
        je public_6d1868c
        push eax
        call dword ptr ds : [public_6d64774]
        add esp, 4
        test eax, eax
        je public_6d1868c
        mov eax, dword ptr ds : [eax+0x58]
        mov ecx, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [ecx], eax
        xor eax, eax
        pop esi
        ret 
        public_6d1868c : nop
        mov eax, esi
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6d18660)
    }
}

#undef public_6d1868c
