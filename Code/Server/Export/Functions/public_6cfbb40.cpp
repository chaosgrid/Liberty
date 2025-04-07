#include "Server-PCH.h"


#define public_6cfbb64 _public_6cfbb64

PROC_DECLARE(0x6cfbb40, internal_6cfbb40, public_6cfbb40);
extern "C" NAKED register_t __cdecl internal_6cfbb40()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        push eax
        call dword ptr ds : [public_6d64500]
        add esp, 4
        test eax, eax
        je public_6cfbb64
        mov ecx, dword ptr ss : [esp+0xC]
        mov edx, dword ptr ds : [eax]
        push ecx
        mov ecx, dword ptr ss : [esp+0xC]
        push ecx
        mov ecx, eax
        call dword ptr ds : [edx+0x34]
        ret 
        public_6cfbb64 : nop
        xor al, al
        ret 
        UNREACHABLE_TRAP(0x6cfbb40)
    }
}

#undef public_6cfbb64
