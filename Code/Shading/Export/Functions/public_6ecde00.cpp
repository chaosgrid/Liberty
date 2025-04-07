#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ecde00);

#define public_6ecde0a _public_6ecde0a

PROC_DECLARE(0x6ecde00, internal_6ecde00, public_6ecde00);
extern "C" NAKED register_t __cdecl internal_6ecde00()
{
    __asm
    {
        mov edx, dword ptr ds : [ecx+4]
        test edx, edx
        jne public_6ecde0a
        xor eax, eax
        ret 
        public_6ecde0a : nop
        mov eax, dword ptr ds : [ecx+8]
        sub eax, edx
        sar eax, 2
        ret 
        UNREACHABLE_TRAP(0x6ecde00)
    }
}

#undef public_6ecde0a
