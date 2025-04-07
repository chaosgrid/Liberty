#include "Server-PCH.h"


#define public_6cfbb99 _public_6cfbb99

PROC_DECLARE(0x6cfbb70, internal_6cfbb70, public_6cfbb70);
extern "C" NAKED register_t __cdecl internal_6cfbb70()
{
    __asm
    {
        push ecx
        mov eax, dword ptr ss : [esp+8]
        push eax
        mov dword ptr ss : [esp+4], 0
        call dword ptr ds : [public_6d64500]
        add esp, 4
        test eax, eax
        je public_6cfbb99
        mov ecx, dword ptr ss : [esp+0xC]
        mov edx, dword ptr ds : [eax]
        push ecx
        mov ecx, eax
        call dword ptr ds : [edx+0x3C]
        pop ecx
        ret 
        public_6cfbb99 : nop
        fld dword ptr ss : [esp]
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x6cfbb70)
    }
}

#undef public_6cfbb99
