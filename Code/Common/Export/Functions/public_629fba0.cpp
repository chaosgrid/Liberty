#include "Common-PCH.h"


#define public_629fbb1 _public_629fbb1
#define public_629fbb3 _public_629fbb3

PROC_DECLARE(0x629fba0, internal_629fba0, public_629fba0);
extern "C" NAKED register_t __cdecl internal_629fba0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        test eax, eax
        je public_629fbb1
        cmp dword ptr ds : [eax+0x14], 0x80000
        je public_629fbb3
        public_629fbb1 : nop
        xor eax, eax
        public_629fbb3 : nop
        ret 
        UNREACHABLE_TRAP(0x629fba0)
    }
}

#undef public_629fbb1
#undef public_629fbb3
