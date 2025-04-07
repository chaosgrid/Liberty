#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ead810);

#define public_6ead81a _public_6ead81a

PROC_DECLARE(0x6ead810, internal_6ead810, public_6ead810);
extern "C" NAKED register_t __cdecl internal_6ead810()
{
    __asm
    {
        mov edx, dword ptr ds : [ecx+4]
        test edx, edx
        jne public_6ead81a
        xor eax, eax
        ret 
        public_6ead81a : nop
        mov eax, dword ptr ds : [ecx+8]
        sub eax, edx
        sar eax, 4
        ret 
        UNREACHABLE_TRAP(0x6ead810)
    }
}

#undef public_6ead81a
