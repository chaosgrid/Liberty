#include "THORN-PCH.h"


#define public_6f4a678 _public_6f4a678

PROC_DECLARE(0x6f4a670, internal_6f4a670, public_6f4a670);
extern "C" NAKED register_t __cdecl internal_6f4a670()
{
    __asm
    {
        test ecx, ecx
        je public_6f4a678
        lea eax, ds:[ecx+0x28]
        ret 
        public_6f4a678 : nop
        xor eax, eax
        ret 
        UNREACHABLE_TRAP(0x6f4a670)
    }
}

#undef public_6f4a678
