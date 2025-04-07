#include "Server-PCH.h"


#define public_6d5e31c _public_6d5e31c

PROC_DECLARE(0x6d5e2e0, internal_6d5e2e0, public_6d5e2e0);
extern "C" NAKED register_t __cdecl internal_6d5e2e0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+8]
        test eax, eax
        je public_6d5e31c
        cmp byte ptr ds : [eax], 0
        je public_6d5e31c
        push eax
        call dword ptr ds : [public_6d643b4]
        mov dword ptr ss : [esp+0xC], eax
        lea eax, ss:[esp+0xC]
        push eax
        call dword ptr ds : [public_6d648c8]
        mov ecx, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [ecx], eax
        and eax, 0x3FFFFFFF
        add esp, 8
        neg eax
        sbb eax, eax
        and eax, 2
        add eax, 0xFFFFFFFE
        ret 
        public_6d5e31c : nop
        mov eax, 0xFFFFFFFC
        ret 
        UNREACHABLE_TRAP(0x6d5e2e0)
    }
}

#undef public_6d5e31c
