#include "Common-PCH.h"


#define public_634bce2 _public_634bce2

PROC_DECLARE(0x634bcd0, internal_634bcd0, public_634bcd0);
extern "C" NAKED register_t __cdecl internal_634bcd0()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+4]
        test eax, eax
        je public_634bce2
        test ecx, ecx
        je public_634bce2
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax+8]
        public_634bce2 : nop
        ret 4
        UNREACHABLE_TRAP(0x634bcd0)
    }
}

#undef public_634bce2
