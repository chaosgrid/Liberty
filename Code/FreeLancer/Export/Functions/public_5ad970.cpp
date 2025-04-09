#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_5ad970);

#define public_5ad97a _public_5ad97a

PROC_DECLARE(0x5ad970, internal_5ad970, public_5ad970);
extern "C" NAKED register_t __cdecl internal_5ad970()
{
    __asm
    {
        mov edx, dword ptr ds : [ecx+4]
        test edx, edx
        jne public_5ad97a
        xor eax, eax
        ret 
        public_5ad97a : nop
        mov eax, dword ptr ds : [ecx+8]
        sub eax, edx
        sar eax, 2
        ret 
        UNREACHABLE_TRAP(0x5ad970)
    }
}

#undef public_5ad97a
