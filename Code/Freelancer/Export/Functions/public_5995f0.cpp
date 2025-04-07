#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5995f0);

#define public_5995fa _public_5995fa

PROC_DECLARE(0x5995f0, internal_5995f0, public_5995f0);
extern "C" NAKED register_t __cdecl internal_5995f0()
{
    __asm
    {
        mov edx, dword ptr ds : [ecx+4]
        test edx, edx
        jne public_5995fa
        xor eax, eax
        ret 
        public_5995fa : nop
        mov eax, dword ptr ds : [ecx+8]
        sub eax, edx
        sar eax, 3
        ret 
        UNREACHABLE_TRAP(0x5995f0)
    }
}

#undef public_5995fa
