#include "Common-PCH.h"


#define public_62bd43f _public_62bd43f

PROC_DECLARE(0x62bd430, internal_62bd430, public_62bd430);
extern "C" NAKED register_t __cdecl internal_62bd430()
{
    __asm
    {
        cmp dword ptr ds : [ecx+8], 0xBF800000
        je public_62bd43f
        mov eax, 1
        ret 
        public_62bd43f : nop
        xor eax, eax
        ret 
        UNREACHABLE_TRAP(0x62bd430)
    }
}

#undef public_62bd43f
