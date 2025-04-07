#include "Common-PCH.h"


#define public_6295231 _public_6295231
#define public_6295233 _public_6295233

PROC_DECLARE(0x6295220, internal_6295220, public_6295220);
extern "C" NAKED register_t __cdecl internal_6295220()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        test eax, eax
        je public_6295231
        cmp dword ptr ds : [eax+0x14], 0x1000000
        je public_6295233
        public_6295231 : nop
        xor eax, eax
        public_6295233 : nop
        ret 
        UNREACHABLE_TRAP(0x6295220)
    }
}

#undef public_6295231
#undef public_6295233
