#include "THORN-PCH.h"


#define public_6f4a418 _public_6f4a418

PROC_DECLARE(0x6f4a410, internal_6f4a410, public_6f4a410);
extern "C" NAKED register_t __cdecl internal_6f4a410()
{
    __asm
    {
        test ecx, ecx
        je public_6f4a418
        lea eax, ds:[ecx+0x28]
        ret 
        public_6f4a418 : nop
        xor eax, eax
        ret 
        UNREACHABLE_TRAP(0x6f4a410)
    }
}

#undef public_6f4a418
