#include "Server-PCH.h"


#define public_6cfbaf9 _public_6cfbaf9

PROC_DECLARE(0x6cfbad0, internal_6cfbad0, public_6cfbad0);
extern "C" NAKED register_t __cdecl internal_6cfbad0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push esi
        push eax
        mov esi, 0xFFFFFFFE
        call dword ptr ds : [public_6d64500]
        add esp, 4
        test eax, eax
        je public_6cfbaf9
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        call dword ptr ds : [edx+0x18]
        mov ecx, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [ecx], eax
        xor eax, eax
        pop esi
        ret 
        public_6cfbaf9 : nop
        mov edx, dword ptr ss : [esp+0xC]
        mov eax, esi
        mov dword ptr ds : [edx], 0
        pop esi
        ret 
        UNREACHABLE_TRAP(0x6cfbad0)
    }
}

#undef public_6cfbaf9
