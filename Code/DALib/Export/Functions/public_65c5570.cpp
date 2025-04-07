#include "DALib-PCH.h"


#define public_65c5588 _public_65c5588

PROC_DECLARE(0x65c5570, internal_65c5570, public_65c5570);
extern "C" NAKED register_t __cdecl internal_65c5570()
{
    __asm
    {
        mov eax, dword ptr ds : [public_65ca284]
        test eax, eax
        je public_65c5588
        mov eax, dword ptr ds : [eax+4]
        test eax, eax
        je public_65c5588
        mov ecx, dword ptr ds : [eax]
        push 0
        push eax
        call dword ptr ds : [ecx+0x5C]
        public_65c5588 : nop
        ret 
        UNREACHABLE_TRAP(0x65c5570)
    }
}

#undef public_65c5588
