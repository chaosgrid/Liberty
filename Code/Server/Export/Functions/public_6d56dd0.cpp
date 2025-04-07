#include "Server-PCH.h"


#define public_6d56de3 _public_6d56de3

PROC_DECLARE(0x6d56dd0, internal_6d56dd0, public_6d56dd0);
extern "C" NAKED register_t __cdecl internal_6d56dd0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x34]
        test eax, eax
        jbe public_6d56de3
        mov ecx, dword ptr ds : [public_6d8fb14]
        mov edx, dword ptr ds : [ecx]
        push eax
        call dword ptr ds : [edx+0x44]
        public_6d56de3 : nop
        ret 
        UNREACHABLE_TRAP(0x6d56dd0)
    }
}

#undef public_6d56de3
