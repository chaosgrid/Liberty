#include "Common-PCH.h"


#define public_6360f12 _public_6360f12

PROC_DECLARE(0x6360f00, internal_6360f00, public_6360f00);
extern "C" NAKED register_t __cdecl internal_6360f00()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+4]
        test eax, eax
        je public_6360f12
        test ecx, ecx
        je public_6360f12
        mov eax, dword ptr ds : [ecx]
        push 1
        call dword ptr ds : [eax+0x18]
        public_6360f12 : nop
        ret 4
        UNREACHABLE_TRAP(0x6360f00)
    }
}

#undef public_6360f12
