#include "Freelancer-PCH.h"


#define public_453638 _public_453638

PROC_DECLARE(0x453620, internal_453620, public_453620);
extern "C" NAKED register_t __cdecl internal_453620()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [eax+0x58]
        test eax, eax
        je public_453638
        mov ecx, dword ptr ds : [eax+0x14]
        add eax, 0x14
        mov dword ptr ss : [esp+4], eax
        jmp dword ptr ds : [ecx+0x20]
        public_453638 : nop
        or eax, 0xFFFFFFFF
        ret 8
        UNREACHABLE_TRAP(0x453620)
    }
}

#undef public_453638
