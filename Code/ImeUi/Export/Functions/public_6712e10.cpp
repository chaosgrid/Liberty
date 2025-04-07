#include "ImeUi-PCH.h"


#define public_6712e1b _public_6712e1b

PROC_DECLARE(0x6712e10, internal_6712e10, public_6712e10);
extern "C" NAKED register_t __cdecl internal_6712e10()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0x90]
        test eax, eax
        jne public_6712e1b
        ret 
        public_6712e1b : nop
        add eax, 0xC
        ret 
        UNREACHABLE_TRAP(0x6712e10)
    }
}

#undef public_6712e1b
