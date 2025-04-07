#include "Common-PCH.h"


#define public_629fcb1 _public_629fcb1
#define public_629fcb3 _public_629fcb3

PROC_DECLARE(0x629fca0, internal_629fca0, public_629fca0);
extern "C" NAKED register_t __cdecl internal_629fca0()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        test eax, eax
        je public_629fcb1
        cmp dword ptr ds : [eax+0x14], 0x800000
        je public_629fcb3
        public_629fcb1 : nop
        xor eax, eax
        public_629fcb3 : nop
        ret 
        UNREACHABLE_TRAP(0x629fca0)
    }
}

#undef public_629fcb1
#undef public_629fcb3
