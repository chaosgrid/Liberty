#include "THORN-PCH.h"


#define public_6f4a648 _public_6f4a648

PROC_DECLARE(0x6f4a640, internal_6f4a640, public_6f4a640);
extern "C" NAKED register_t __cdecl internal_6f4a640()
{
    __asm
    {
        test ecx, ecx
        je public_6f4a648
        lea eax, ds:[ecx+0x28]
        ret 
        public_6f4a648 : nop
        xor eax, eax
        ret 
        UNREACHABLE_TRAP(0x6f4a640)
    }
}

#undef public_6f4a648
