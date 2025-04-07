#include "DALib-PCH.h"


#define public_65c514f _public_65c514f

PROC_DECLARE(0x65c5140, internal_65c5140, public_65c5140);
extern "C" NAKED register_t __cdecl internal_65c5140()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+4]
        test eax, eax
        je public_65c514f
        mov ecx, dword ptr ds : [eax]
        push 0
        push eax
        call dword ptr ds : [ecx+0x5C]
        public_65c514f : nop
        ret 
        UNREACHABLE_TRAP(0x65c5140)
    }
}

#undef public_65c514f
