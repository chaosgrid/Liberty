#include "Common-PCH.h"


#define public_629a2de _public_629a2de
#define public_629a2e0 _public_629a2e0

PROC_DECLARE(0x629a2d0, internal_629a2d0, public_629a2d0);
extern "C" NAKED register_t __cdecl internal_629a2d0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        test eax, eax
        je public_629a2de
        cmp dword ptr ds : [eax+0x14], 0x20
        je public_629a2e0
        public_629a2de : nop
        xor eax, eax
        public_629a2e0 : nop
        ret 
        UNREACHABLE_TRAP(0x629a2d0)
    }
}

#undef public_629a2de
#undef public_629a2e0
