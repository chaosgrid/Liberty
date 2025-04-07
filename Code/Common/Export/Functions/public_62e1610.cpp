#include "Common-PCH.h"


#define public_62e1624 _public_62e1624

PROC_DECLARE(0x62e1610, internal_62e1610, public_62e1610);
extern "C" NAKED register_t __cdecl internal_62e1610()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+8]
        test eax, eax
        jle public_62e1624
        mov eax, dword ptr ds : [ecx+0xC]
        test eax, eax
        jle public_62e1624
        mov eax, 1
        ret 
        public_62e1624 : nop
        xor eax, eax
        ret 
        UNREACHABLE_TRAP(0x62e1610)
    }
}

#undef public_62e1624
