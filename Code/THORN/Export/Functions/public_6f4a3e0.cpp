#include "THORN-PCH.h"


#define public_6f4a3e8 _public_6f4a3e8

PROC_DECLARE(0x6f4a3e0, internal_6f4a3e0, public_6f4a3e0);
extern "C" NAKED register_t __cdecl internal_6f4a3e0()
{
    __asm
    {
        test ecx, ecx
        je public_6f4a3e8
        lea eax, ds:[ecx+0x28]
        ret 
        public_6f4a3e8 : nop
        xor eax, eax
        ret 
        UNREACHABLE_TRAP(0x6f4a3e0)
    }
}

#undef public_6f4a3e8
