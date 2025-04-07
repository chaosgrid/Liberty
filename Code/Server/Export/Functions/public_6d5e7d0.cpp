#include "Server-PCH.h"


#define public_6d5e7fa _public_6d5e7fa

PROC_DECLARE(0x6d5e7d0, internal_6d5e7d0, public_6d5e7d0);
extern "C" NAKED register_t __cdecl internal_6d5e7d0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [eax]
        test eax, eax
        je public_6d5e7fa
        push eax
        call dword ptr ds : [public_6d644bc]
        mov ecx, dword ptr ss : [esp+0xC]
        mov dword ptr ds : [ecx], eax
        and eax, 0x3FFFFFFF
        add esp, 4
        neg eax
        sbb eax, eax
        and eax, 2
        add eax, 0xFFFFFFFE
        ret 
        public_6d5e7fa : nop
        mov eax, 0xFFFFFFFC
        ret 
        UNREACHABLE_TRAP(0x6d5e7d0)
    }
}

#undef public_6d5e7fa
