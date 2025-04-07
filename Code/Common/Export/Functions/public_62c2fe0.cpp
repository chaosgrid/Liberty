#include "Common-PCH.h"


#define public_62c2fee _public_62c2fee

PROC_DECLARE(0x62c2fe0, internal_62c2fe0, public_62c2fe0);
extern "C" NAKED register_t __cdecl internal_62c2fe0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x324]
        test eax, eax
        je public_62c2fee
        add eax, 0xFFFFFFF8
        ret 
        public_62c2fee : nop
        xor eax, eax
        ret 
        UNREACHABLE_TRAP(0x62c2fe0)
    }
}

#undef public_62c2fee
