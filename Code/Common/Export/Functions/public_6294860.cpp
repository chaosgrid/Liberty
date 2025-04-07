#include "Common-PCH.h"


#define public_6294871 _public_6294871
#define public_6294873 _public_6294873

PROC_DECLARE(0x6294860, internal_6294860, public_6294860);
extern "C" NAKED register_t __cdecl internal_6294860()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        test eax, eax
        je public_6294871
        cmp dword ptr ds : [eax+0x14], 0x1000
        je public_6294873
        public_6294871 : nop
        xor eax, eax
        public_6294873 : nop
        ret 
        UNREACHABLE_TRAP(0x6294860)
    }
}

#undef public_6294871
#undef public_6294873
