#include "THORN-PCH.h"


#define public_6f4a618 _public_6f4a618

PROC_DECLARE(0x6f4a610, internal_6f4a610, public_6f4a610);
extern "C" NAKED register_t __cdecl internal_6f4a610()
{
    __asm
    {
        test ecx, ecx
        je public_6f4a618
        lea eax, ds:[ecx+0x28]
        ret 
        public_6f4a618 : nop
        xor eax, eax
        ret 
        UNREACHABLE_TRAP(0x6f4a610)
    }
}

#undef public_6f4a618
