#include "Common-PCH.h"


#define public_629f16e _public_629f16e
#define public_629f170 _public_629f170

PROC_DECLARE(0x629f160, internal_629f160, public_629f160);
extern "C" NAKED register_t __cdecl internal_629f160()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        test eax, eax
        je public_629f16e
        cmp dword ptr ds : [eax+0x14], 2
        je public_629f170
        public_629f16e : nop
        xor eax, eax
        public_629f170 : nop
        ret 
        UNREACHABLE_TRAP(0x629f160)
    }
}

#undef public_629f16e
#undef public_629f170
