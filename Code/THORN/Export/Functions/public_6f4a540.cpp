#include "THORN-PCH.h"


#define public_6f4a548 _public_6f4a548

PROC_DECLARE(0x6f4a540, internal_6f4a540, public_6f4a540);
extern "C" NAKED register_t __cdecl internal_6f4a540()
{
    __asm
    {
        test ecx, ecx
        je public_6f4a548
        lea eax, ds:[ecx+0x28]
        ret 
        public_6f4a548 : nop
        xor eax, eax
        ret 
        UNREACHABLE_TRAP(0x6f4a540)
    }
}

#undef public_6f4a548
