#include "Common-PCH.h"


#define public_6286089 _public_6286089

PROC_DECLARE(0x6286070, internal_6286070, public_6286070);
extern "C" NAKED register_t __cdecl internal_6286070()
{
    __asm
    {
        fld dword ptr ds : [ecx+0xE8]
        fcomp dword ptr ds : [public_6399408]
        fnstsw ax
        test ah, 1
        jne public_6286089
        mov eax, 1
        ret 
        public_6286089 : nop
        xor eax, eax
        ret 
        UNREACHABLE_TRAP(0x6286070)
    }
}

#undef public_6286089
