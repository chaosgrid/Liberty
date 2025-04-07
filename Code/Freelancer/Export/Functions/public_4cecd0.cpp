#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4cecd0);

#define public_4cecda _public_4cecda

PROC_DECLARE(0x4cecd0, internal_4cecd0, public_4cecd0);
extern "C" NAKED register_t __cdecl internal_4cecd0()
{
    __asm
    {
        mov edx, dword ptr ds : [ecx+4]
        test edx, edx
        jne public_4cecda
        xor eax, eax
        ret 
        public_4cecda : nop
        mov eax, dword ptr ds : [ecx+8]
        sub eax, edx
        sar eax, 4
        ret 
        UNREACHABLE_TRAP(0x4cecd0)
    }
}

#undef public_4cecda
