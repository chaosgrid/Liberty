#include "Common-PCH.h"


#define public_62c8a0b _public_62c8a0b

PROC_DECLARE(0x62c8a00, internal_62c8a00, public_62c8a00);
extern "C" NAKED register_t __cdecl internal_62c8a00()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x30]
        test eax, eax
        je public_62c8a0b
        add eax, 0xFFFFFFF8
        ret 
        public_62c8a0b : nop
        xor eax, eax
        ret 
        UNREACHABLE_TRAP(0x62c8a00)
    }
}

#undef public_62c8a0b
