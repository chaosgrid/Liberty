#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eae300);

#define public_6eae30a _public_6eae30a

PROC_DECLARE(0x6eae300, internal_6eae300, public_6eae300);
extern "C" NAKED register_t __cdecl internal_6eae300()
{
    __asm
    {
        mov edx, dword ptr ds : [ecx+4]
        test edx, edx
        jne public_6eae30a
        xor eax, eax
        ret 
        public_6eae30a : nop
        mov eax, dword ptr ds : [ecx+8]
        sub eax, edx
        sar eax, 3
        ret 
        UNREACHABLE_TRAP(0x6eae300)
    }
}

#undef public_6eae30a
