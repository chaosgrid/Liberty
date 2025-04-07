#include "Shading-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ecfa60);

#define public_6ecfa6a _public_6ecfa6a

PROC_DECLARE(0x6ecfa60, internal_6ecfa60, public_6ecfa60);
extern "C" NAKED register_t __cdecl internal_6ecfa60()
{
    __asm
    {
        mov edx, dword ptr ds : [ecx+4]
        test edx, edx
        jne public_6ecfa6a
        xor eax, eax
        ret 
        public_6ecfa6a : nop
        mov eax, dword ptr ds : [ecx+8]
        sub eax, edx
        sar eax, 3
        ret 
        UNREACHABLE_TRAP(0x6ecfa60)
    }
}

#undef public_6ecfa6a
