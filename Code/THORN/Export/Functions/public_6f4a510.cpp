#include "THORN-PCH.h"


#define public_6f4a518 _public_6f4a518

PROC_DECLARE(0x6f4a510, internal_6f4a510, public_6f4a510);
extern "C" NAKED register_t __cdecl internal_6f4a510()
{
    __asm
    {
        test ecx, ecx
        je public_6f4a518
        lea eax, ds:[ecx+0x28]
        ret 
        public_6f4a518 : nop
        xor eax, eax
        ret 
        UNREACHABLE_TRAP(0x6f4a510)
    }
}

#undef public_6f4a518
