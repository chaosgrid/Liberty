#include "Common-PCH.h"


#define public_629a4ae _public_629a4ae
#define public_629a4b0 _public_629a4b0

PROC_DECLARE(0x629a4a0, internal_629a4a0, public_629a4a0);
extern "C" NAKED register_t __cdecl internal_629a4a0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        test eax, eax
        je public_629a4ae
        cmp dword ptr ds : [eax+0x14], 0x40
        je public_629a4b0
        public_629a4ae : nop
        xor eax, eax
        public_629a4b0 : nop
        ret 
        UNREACHABLE_TRAP(0x629a4a0)
    }
}

#undef public_629a4ae
#undef public_629a4b0
