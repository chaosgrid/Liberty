#include "Common-PCH.h"


#define public_629f27e _public_629f27e
#define public_629f280 _public_629f280

PROC_DECLARE(0x629f270, internal_629f270, public_629f270);
extern "C" NAKED register_t __cdecl internal_629f270()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        test eax, eax
        je public_629f27e
        cmp dword ptr ds : [eax+0x14], 1
        je public_629f280
        public_629f27e : nop
        xor eax, eax
        public_629f280 : nop
        ret 
        UNREACHABLE_TRAP(0x629f270)
    }
}

#undef public_629f27e
#undef public_629f280
