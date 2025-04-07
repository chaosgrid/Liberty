#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d31890);

#define public_6d3189a _public_6d3189a

PROC_DECLARE(0x6d31890, internal_6d31890, public_6d31890);
extern "C" NAKED register_t __cdecl internal_6d31890()
{
    __asm
    {
        mov edx, dword ptr ds : [ecx+4]
        test edx, edx
        jne public_6d3189a
        xor eax, eax
        ret 
        public_6d3189a : nop
        mov eax, dword ptr ds : [ecx+8]
        sub eax, edx
        sar eax, 2
        ret 
        UNREACHABLE_TRAP(0x6d31890)
    }
}

#undef public_6d3189a
