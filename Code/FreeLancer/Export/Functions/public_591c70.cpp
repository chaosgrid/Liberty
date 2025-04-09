#include "Freelancer-PCH.h"


#define public_591c7c _public_591c7c

PROC_DECLARE(0x591c70, internal_591c70, public_591c70);
extern "C" NAKED register_t __cdecl internal_591c70()
{
    __asm
    {
        mov ecx, dword ptr ds : [ecx+0xC]
        test ecx, ecx
        je public_591c7c
        mov eax, dword ptr ds : [ecx]
        jmp dword ptr ds : [eax+8]
        public_591c7c : nop
        xor eax, eax
        ret 4
        UNREACHABLE_TRAP(0x591c70)
    }
}

#undef public_591c7c
