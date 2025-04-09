#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_587380);

#define public_58738a _public_58738a

PROC_DECLARE(0x587380, internal_587380, public_587380);
extern "C" NAKED register_t __cdecl internal_587380()
{
    __asm
    {
        mov edx, dword ptr ds : [ecx+4]
        test edx, edx
        jne public_58738a
        xor eax, eax
        ret 
        public_58738a : nop
        mov eax, dword ptr ds : [ecx+8]
        sub eax, edx
        sar eax, 5
        ret 
        UNREACHABLE_TRAP(0x587380)
    }
}

#undef public_58738a
