#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d57150);

#define public_6d5715a _public_6d5715a

PROC_DECLARE(0x6d57150, internal_6d57150, public_6d57150);
extern "C" NAKED register_t __cdecl internal_6d57150()
{
    __asm
    {
        mov edx, dword ptr ds : [ecx+4]
        test edx, edx
        jne public_6d5715a
        xor eax, eax
        ret 
        public_6d5715a : nop
        mov eax, dword ptr ds : [ecx+8]
        sub eax, edx
        sar eax, 3
        ret 
        UNREACHABLE_TRAP(0x6d57150)
    }
}

#undef public_6d5715a
