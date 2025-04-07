#include "DALib-PCH.h"


#define public_65c16ae _public_65c16ae

PROC_DECLARE(0x65c1690, internal_65c1690, public_65c1690);
extern "C" NAKED register_t __cdecl internal_65c1690()
{
    __asm
    {
        mov eax, dword ptr ds : [public_65ca0f0]
        test eax, eax
        je public_65c16ae
        mov ecx, dword ptr ds : [eax]
        push eax
        call dword ptr ds : [ecx+8]
        mov dword ptr ds : [public_65ca0bc], eax
        mov dword ptr ds : [public_65ca0f0], 0
        public_65c16ae : nop
        ret 
        UNREACHABLE_TRAP(0x65c1690)
    }
}

#undef public_65c16ae
