#include "Freelancer-PCH.h"


#define public_453598 _public_453598

PROC_DECLARE(0x453580, internal_453580, public_453580);
extern "C" NAKED register_t __cdecl internal_453580()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [eax+0x60]
        test eax, eax
        je public_453598
        mov ecx, dword ptr ds : [eax+0xC]
        add eax, 0xC
        mov dword ptr ss : [esp+4], eax
        jmp dword ptr ds : [ecx+0x18]
        public_453598 : nop
        or eax, 0xFFFFFFFF
        ret 8
        UNREACHABLE_TRAP(0x453580)
    }
}

#undef public_453598
