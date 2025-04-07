#include "Common-PCH.h"


#define public_631b79c _public_631b79c

PROC_DECLARE(0x631b790, internal_631b790, public_631b790);
extern "C" NAKED register_t __cdecl internal_631b790()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x58]
        test eax, eax
        jne public_631b79c
        mov eax, offset public_63a39ac
        public_631b79c : nop
        ret 
        UNREACHABLE_TRAP(0x631b790)
    }
}

#undef public_631b79c
