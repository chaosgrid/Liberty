#include "THORN-PCH.h"


#define public_6f4a448 _public_6f4a448

PROC_DECLARE(0x6f4a440, internal_6f4a440, public_6f4a440);
extern "C" NAKED register_t __cdecl internal_6f4a440()
{
    __asm
    {
        test ecx, ecx
        je public_6f4a448
        lea eax, ds:[ecx+0x28]
        ret 
        public_6f4a448 : nop
        xor eax, eax
        ret 
        UNREACHABLE_TRAP(0x6f4a440)
    }
}

#undef public_6f4a448
