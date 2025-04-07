#include "Server-PCH.h"


#define public_6cfba79 _public_6cfba79

PROC_DECLARE(0x6cfba60, internal_6cfba60, public_6cfba60);
extern "C" NAKED register_t __cdecl internal_6cfba60()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push eax
        call dword ptr ds : [public_6d64500]
        add esp, 4
        test eax, eax
        je public_6cfba79
        mov edx, dword ptr ds : [eax]
        mov ecx, eax
        jmp dword ptr ds : [edx+0x30]
        public_6cfba79 : nop
        fld dword ptr ds : [public_6d65188]
        ret 
        UNREACHABLE_TRAP(0x6cfba60)
    }
}

#undef public_6cfba79
