#include "Common-PCH.h"


#define public_6297b1a _public_6297b1a

PROC_DECLARE(0x6297b00, internal_6297b00, public_6297b00);
extern "C" NAKED register_t __cdecl internal_6297b00()
{
    __asm
    {
        mov al, byte ptr ds : [ecx+0x20C]
        test al, al
        je public_6297b1a
        mov al, byte ptr ds : [ecx+0x228]
        test al, al
        je public_6297b1a
        mov eax, 1
        ret 
        public_6297b1a : nop
        xor eax, eax
        ret 
        UNREACHABLE_TRAP(0x6297b00)
    }
}

#undef public_6297b1a
