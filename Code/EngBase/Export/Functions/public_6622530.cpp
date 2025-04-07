#include "EngBase-PCH.h"


#define public_6622545 _public_6622545
#define public_6622563 _public_6622563

PROC_DECLARE(0x6622530, internal_6622530, public_6622530);
extern "C" NAKED register_t __cdecl internal_6622530()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+0xC]
        push esi
        cmp eax, 0xFFFFFFFF
        je public_6622545
        test eax, eax
        je public_6622545
        mov ecx, dword ptr ds : [eax+0xC]
        test ecx, ecx
        jne public_6622563
        public_6622545 : nop
        mov esi, dword ptr ss : [esp+0xC]
        push 0
        mov dword ptr ds : [esi], 0
        call dword ptr ds : [public_662900c]
        add esp, 4
        mov dword ptr ds : [esi+4], eax
        mov eax, esi
        pop esi
        ret 0xC
        public_6622563 : nop
        mov ecx, dword ptr ds : [eax+0xE8]
        mov eax, dword ptr ss : [esp+0xC]
        pop esi
        mov edx, dword ptr ds : [ecx+0x40]
        mov dword ptr ds : [eax], ecx
        mov dword ptr ds : [eax+4], edx
        ret 0xC
        UNREACHABLE_TRAP(0x6622530)
    }
}

#undef public_6622545
#undef public_6622563
