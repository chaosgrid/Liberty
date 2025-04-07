#include "Common-PCH.h"


#define public_629fc91 _public_629fc91
#define public_629fc93 _public_629fc93

PROC_DECLARE(0x629fc80, internal_629fc80, public_629fc80);
extern "C" NAKED register_t __cdecl internal_629fc80()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        test eax, eax
        je public_629fc91
        cmp dword ptr ds : [eax+0x14], 0x200000
        je public_629fc93
        public_629fc91 : nop
        xor eax, eax
        public_629fc93 : nop
        ret 
        UNREACHABLE_TRAP(0x629fc80)
    }
}

#undef public_629fc91
#undef public_629fc93
