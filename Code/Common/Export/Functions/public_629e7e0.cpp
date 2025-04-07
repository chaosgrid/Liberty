#include "Common-PCH.h"


#define public_629e7f1 _public_629e7f1
#define public_629e7f3 _public_629e7f3

PROC_DECLARE(0x629e7e0, internal_629e7e0, public_629e7e0);
extern "C" NAKED register_t __cdecl internal_629e7e0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        test eax, eax
        je public_629e7f1
        cmp dword ptr ds : [eax+0x14], 0x100000
        je public_629e7f3
        public_629e7f1 : nop
        xor eax, eax
        public_629e7f3 : nop
        ret 
        UNREACHABLE_TRAP(0x629e7e0)
    }
}

#undef public_629e7f1
#undef public_629e7f3
