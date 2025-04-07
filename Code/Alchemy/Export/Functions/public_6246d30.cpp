#include "Alchemy-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6246d30);

#define public_6246d3a _public_6246d3a

PROC_DECLARE(0x6246d30, internal_6246d30, public_6246d30);
extern "C" NAKED register_t __cdecl internal_6246d30()
{
    __asm
    {
        mov edx, dword ptr ds : [ecx+4]
        test edx, edx
        jne public_6246d3a
        xor eax, eax
        ret 
        public_6246d3a : nop
        mov eax, dword ptr ds : [ecx+8]
        sub eax, edx
        sar eax, 4
        ret 
        UNREACHABLE_TRAP(0x6246d30)
    }
}

#undef public_6246d3a
