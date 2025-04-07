#include "Server-PCH.h"


#define public_6d5e77c _public_6d5e77c

PROC_DECLARE(0x6d5e740, internal_6d5e740, public_6d5e740);
extern "C" NAKED register_t __cdecl internal_6d5e740()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        test eax, eax
        je public_6d5e77c
        cmp byte ptr ds : [eax], 0
        je public_6d5e77c
        push eax
        call dword ptr ds : [public_6d643b4]
        mov dword ptr ss : [esp+0xC], eax
        lea eax, ss:[esp+0xC]
        push eax
        call dword ptr ds : [public_6d649e8]
        mov ecx, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [ecx], eax
        and eax, 0x3FFFFFFF
        add esp, 8
        neg eax
        sbb eax, eax
        and eax, 2
        add eax, 0xFFFFFFFE
        ret 
        public_6d5e77c : nop
        mov eax, 0xFFFFFFFC
        ret 
        UNREACHABLE_TRAP(0x6d5e740)
    }
}

#undef public_6d5e77c
