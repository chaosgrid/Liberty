#include "RendComp-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6c26d70);

#define public_6c26d7a _public_6c26d7a

PROC_DECLARE(0x6c26d70, internal_6c26d70, public_6c26d70);
extern "C" NAKED register_t __cdecl internal_6c26d70()
{
    __asm
    {
        mov edx, dword ptr ds : [ecx+4]
        test edx, edx
        jne public_6c26d7a
        xor eax, eax
        ret 
        public_6c26d7a : nop
        mov eax, dword ptr ds : [ecx+8]
        sub eax, edx
        sar eax, 2
        ret 
        UNREACHABLE_TRAP(0x6c26d70)
    }
}

#undef public_6c26d7a
