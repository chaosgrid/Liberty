#include "THORN-PCH.h"


#define public_6f4a738 _public_6f4a738

PROC_DECLARE(0x6f4a730, internal_6f4a730, public_6f4a730);
extern "C" NAKED register_t __cdecl internal_6f4a730()
{
    __asm
    {
        test ecx, ecx
        je public_6f4a738
        lea eax, ds:[ecx+0x28]
        ret 
        public_6f4a738 : nop
        xor eax, eax
        ret 
        UNREACHABLE_TRAP(0x6f4a730)
    }
}

#undef public_6f4a738
