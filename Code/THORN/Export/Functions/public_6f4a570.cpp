#include "THORN-PCH.h"


#define public_6f4a578 _public_6f4a578

PROC_DECLARE(0x6f4a570, internal_6f4a570, public_6f4a570);
extern "C" NAKED register_t __cdecl internal_6f4a570()
{
    __asm
    {
        test ecx, ecx
        je public_6f4a578
        lea eax, ds:[ecx+0x28]
        ret 
        public_6f4a578 : nop
        xor eax, eax
        ret 
        UNREACHABLE_TRAP(0x6f4a570)
    }
}

#undef public_6f4a578
