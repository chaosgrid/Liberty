#include "Common-PCH.h"


#define public_6360c3b _public_6360c3b

PROC_DECLARE(0x6360c30, internal_6360c30, public_6360c30);
extern "C" NAKED register_t __cdecl internal_6360c30()
{
    __asm
    {
        test ecx, ecx
        je public_6360c3b
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax+4]
        public_6360c3b : nop
        ret 4
        UNREACHABLE_TRAP(0x6360c30)
    }
}

#undef public_6360c3b
