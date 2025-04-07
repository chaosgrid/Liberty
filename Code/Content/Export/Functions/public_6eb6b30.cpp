#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eb6b30);

#define public_6eb6b3a _public_6eb6b3a

PROC_DECLARE(0x6eb6b30, internal_6eb6b30, public_6eb6b30);
extern "C" NAKED register_t __cdecl internal_6eb6b30()
{
    __asm
    {
        mov edx, dword ptr ds : [ecx+4]
        test edx, edx
        jne public_6eb6b3a
        xor eax, eax
        ret 
        public_6eb6b3a : nop
        mov eax, dword ptr ds : [ecx+0xC]
        sub eax, edx
        sar eax, 2
        ret 
        UNREACHABLE_TRAP(0x6eb6b30)
    }
}

#undef public_6eb6b3a
