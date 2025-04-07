#include "Common-PCH.h"


#define public_629fed1 _public_629fed1
#define public_629fed3 _public_629fed3

PROC_DECLARE(0x629fec0, internal_629fec0, public_629fec0);
extern "C" NAKED register_t __cdecl internal_629fec0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        test eax, eax
        je public_629fed1
        cmp dword ptr ds : [eax+0x14], 0x400000
        je public_629fed3
        public_629fed1 : nop
        xor eax, eax
        public_629fed3 : nop
        ret 
        UNREACHABLE_TRAP(0x629fec0)
    }
}

#undef public_629fed1
#undef public_629fed3
