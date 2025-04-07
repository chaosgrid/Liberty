#include "Server-PCH.h"


#define public_6cfbac2 _public_6cfbac2

PROC_DECLARE(0x6cfba80, internal_6cfba80, public_6cfba80);
extern "C" NAKED register_t __cdecl internal_6cfba80()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        sub esp, 0xC
        push esi
        push eax
        mov esi, 0xFFFFFFFE
        call dword ptr ds : [public_6d64500]
        add esp, 4
        test eax, eax
        je public_6cfbac2
        mov edx, dword ptr ds : [eax]
        lea ecx, ss:[esp+4]
        push ecx
        mov ecx, eax
        call dword ptr ds : [edx+0x28]
        mov ecx, dword ptr ds : [eax]
        mov edx, dword ptr ss : [esp+0x18]
        mov dword ptr ds : [edx], ecx
        mov ecx, dword ptr ds : [eax+4]
        mov dword ptr ds : [edx+4], ecx
        mov eax, dword ptr ds : [eax+8]
        mov dword ptr ds : [edx+8], eax
        xor eax, eax
        pop esi
        add esp, 0xC
        ret 
        public_6cfbac2 : nop
        mov eax, esi
        pop esi
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x6cfba80)
    }
}

#undef public_6cfbac2
