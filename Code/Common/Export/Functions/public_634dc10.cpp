#include "Common-PCH.h"


#define public_634dc1b _public_634dc1b

PROC_DECLARE(0x634dc10, internal_634dc10, public_634dc10);
extern "C" NAKED register_t __cdecl internal_634dc10()
{
    __asm
    {
        test ecx, ecx
        je public_634dc1b
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax+0x10]
        public_634dc1b : nop
        ret 4
        UNREACHABLE_TRAP(0x634dc10)
    }
}

#undef public_634dc1b
