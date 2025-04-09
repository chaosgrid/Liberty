#include "Freelancer-PCH.h"


#define public_51f78e _public_51f78e

PROC_DECLARE(0x51f780, internal_51f780, public_51f780);
extern "C" NAKED register_t __cdecl internal_51f780()
{
    __asm
    {
        mov eax, dword ptr ds : [ecx+8]
        mov eax, dword ptr ds : [eax+0x1C]
        cmp eax, 1
        jne public_51f78e
        xor eax, eax
        ret 
        public_51f78e : nop
        xor ecx, ecx
        cmp eax, 2
        setne cl
        inc ecx
        mov eax, ecx
        ret 
        UNREACHABLE_TRAP(0x51f780)
    }
}

#undef public_51f78e
