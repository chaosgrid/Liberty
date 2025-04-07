#include "Server-PCH.h"


#define public_6cfbb2f _public_6cfbb2f

PROC_DECLARE(0x6cfbb10, internal_6cfbb10, public_6cfbb10);
extern "C" NAKED register_t __cdecl internal_6cfbb10()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push eax
        call dword ptr ds : [public_6d64500]
        add esp, 4
        test eax, eax
        je public_6cfbb2f
        mov ecx, dword ptr ss : [esp+8]
        mov edx, dword ptr ds : [eax]
        push ecx
        mov ecx, eax
        call dword ptr ds : [edx+0x48]
        ret 
        public_6cfbb2f : nop
        fld dword ptr ds : [public_6d65520]
        ret 
        UNREACHABLE_TRAP(0x6cfbb10)
    }
}

#undef public_6cfbb2f
