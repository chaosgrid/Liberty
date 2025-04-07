#include "Common-PCH.h"


#define public_62c78ce _public_62c78ce

PROC_DECLARE(0x62c78c0, internal_62c78c0, public_62c78c0);
extern "C" NAKED register_t __cdecl internal_62c78c0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x2A0]
        test eax, eax
        je public_62c78ce
        add eax, 0xFFFFFFF8
        ret 
        public_62c78ce : nop
        xor eax, eax
        ret 
        UNREACHABLE_TRAP(0x62c78c0)
    }
}

#undef public_62c78ce
