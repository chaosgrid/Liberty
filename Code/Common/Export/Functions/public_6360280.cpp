#include "Common-PCH.h"


#define public_636028b _public_636028b

PROC_DECLARE(0x6360280, internal_6360280, public_6360280);
extern "C" NAKED register_t __cdecl internal_6360280()
{
    __asm
    {
        test ecx, ecx
        je public_636028b
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax+0x14]
        public_636028b : nop
        ret 4
        UNREACHABLE_TRAP(0x6360280)
    }
}

#undef public_636028b
