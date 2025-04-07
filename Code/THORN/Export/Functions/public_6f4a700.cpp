#include "THORN-PCH.h"


#define public_6f4a708 _public_6f4a708

PROC_DECLARE(0x6f4a700, internal_6f4a700, public_6f4a700);
extern "C" NAKED register_t __cdecl internal_6f4a700()
{
    __asm
    {
        test ecx, ecx
        je public_6f4a708
        lea eax, ds:[ecx+0x28]
        ret 
        public_6f4a708 : nop
        xor eax, eax
        ret 
        UNREACHABLE_TRAP(0x6f4a700)
    }
}

#undef public_6f4a708
