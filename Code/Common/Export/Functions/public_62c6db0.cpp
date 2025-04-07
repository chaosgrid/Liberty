#include "Common-PCH.h"


#define public_62c6dbe _public_62c6dbe

PROC_DECLARE(0x62c6db0, internal_62c6db0, public_62c6db0);
extern "C" NAKED register_t __cdecl internal_62c6db0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x310]
        test eax, eax
        je public_62c6dbe
        add eax, 0xFFFFFFF8
        ret 
        public_62c6dbe : nop
        xor eax, eax
        ret 
        UNREACHABLE_TRAP(0x62c6db0)
    }
}

#undef public_62c6dbe
