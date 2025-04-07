#include "Freelancer-PCH.h"


#define public_591c6c _public_591c6c

PROC_DECLARE(0x591c60, internal_591c60, public_591c60);
extern "C" NAKED register_t __cdecl internal_591c60()
{
    __asm
    {
        mov ecx, dword ptr ds : [ecx+0xC]
        test ecx, ecx
        je public_591c6c
        mov eax, dword ptr ds : [ecx]
        jmp dword ptr ds : [eax+4]
        public_591c6c : nop
        xor eax, eax
        ret 
        UNREACHABLE_TRAP(0x591c60)
    }
}

#undef public_591c6c
