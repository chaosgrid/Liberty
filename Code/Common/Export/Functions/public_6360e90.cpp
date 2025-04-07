#include "Common-PCH.h"


#define public_6360ea2 _public_6360ea2

PROC_DECLARE(0x6360e90, internal_6360e90, public_6360e90);
extern "C" NAKED register_t __cdecl internal_6360e90()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+4]
        test eax, eax
        je public_6360ea2
        test ecx, ecx
        je public_6360ea2
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax+4]
        public_6360ea2 : nop
        ret 4
        UNREACHABLE_TRAP(0x6360e90)
    }
}

#undef public_6360ea2
