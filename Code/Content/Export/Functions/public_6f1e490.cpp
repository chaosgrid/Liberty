#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f1e490);

#define public_6f1e49a _public_6f1e49a

PROC_DECLARE(0x6f1e490, internal_6f1e490, public_6f1e490);
extern "C" NAKED register_t __cdecl internal_6f1e490()
{
    __asm
    {
        mov edx, dword ptr ds : [ecx+4]
        test edx, edx
        jne public_6f1e49a
        xor eax, eax
        ret 
        public_6f1e49a : nop
        mov eax, dword ptr ds : [ecx+0xC]
        sub eax, edx
        sar eax, 3
        ret 
        UNREACHABLE_TRAP(0x6f1e490)
    }
}

#undef public_6f1e49a
