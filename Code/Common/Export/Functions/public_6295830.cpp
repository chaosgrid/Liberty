#include "Common-PCH.h"


#define public_6295841 _public_6295841
#define public_6295843 _public_6295843

PROC_DECLARE(0x6295830, internal_6295830, public_6295830);
extern "C" NAKED register_t __cdecl internal_6295830()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        test eax, eax
        je public_6295841
        cmp dword ptr ds : [eax+0x14], 0x10000
        je public_6295843
        public_6295841 : nop
        xor eax, eax
        public_6295843 : nop
        ret 
        UNREACHABLE_TRAP(0x6295830)
    }
}

#undef public_6295841
#undef public_6295843
