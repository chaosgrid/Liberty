#include "Alchemy-PCH.h"


#define public_6202053 _public_6202053

PROC_DECLARE(0x6202010, internal_6202010, public_6202010);
extern "C" NAKED register_t __cdecl internal_6202010()
{
    __asm
    {
        push esi
        mov esi, dword ptr ss : [esp+0xC]
        push edi
        mov edi, dword ptr ss : [esp+0xC]
        push esi
        push edi
        mov eax, dword ptr ds : [edi]
        call dword ptr ds : [eax+0x60]
        mov ecx, dword ptr ds : [esi]
        lea edx, ss:[esp+0xC]
        push edx
        push esi
        call dword ptr ds : [ecx+0x20]
        mov ecx, dword ptr ds : [esi]
        mov eax, dword ptr ss : [esp+0xC]
        or eax, 0x80000000
        push eax
        push esi
        mov dword ptr ss : [esp+0x14], eax
        call dword ptr ds : [ecx+0x24]
        mov eax, dword ptr ds : [public_6257914]
        test eax, eax
        je public_6202053
        push 0
        push esi
        push 0
        call eax
        add esp, 0xC
        public_6202053 : nop
        mov edx, dword ptr ds : [edi]
        push esi
        push edi
        call dword ptr ds : [edx+0x58]
        pop edi
        xor eax, eax
        pop esi
        ret 8
        UNREACHABLE_TRAP(0x6202010)
    }
}

#undef public_6202053
