#include "Common-PCH.h"


#define public_629d87d _public_629d87d

PROC_DECLARE(0x629d870, internal_629d870, public_629d870);
extern "C" NAKED register_t __cdecl internal_629d870()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+8]
        test eax, eax
        je public_629d87d
        add eax, 0xFFFFFF64
        ret 
        public_629d87d : nop
        xor eax, eax
        ret 
        UNREACHABLE_TRAP(0x629d870)
    }
}

#undef public_629d87d
