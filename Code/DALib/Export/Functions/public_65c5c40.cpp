#include "DALib-PCH.h"


#define public_65c5c4e _public_65c5c4e

PROC_DECLARE(0x65c5c40, internal_65c5c40, public_65c5c40);
extern "C" NAKED register_t __cdecl internal_65c5c40()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+0xC]
        test eax, eax
        je public_65c5c4e
        mov edx, dword ptr ds : [eax]
        push ecx
        push eax
        call dword ptr ds : [edx+0x20]
        public_65c5c4e : nop
        ret 
        UNREACHABLE_TRAP(0x65c5c40)
    }
}

#undef public_65c5c4e
