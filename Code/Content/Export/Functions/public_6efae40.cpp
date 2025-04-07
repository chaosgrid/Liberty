#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6efae40);

#define public_6efae4a _public_6efae4a

PROC_DECLARE(0x6efae40, internal_6efae40, public_6efae40);
extern "C" NAKED register_t __cdecl internal_6efae40()
{
    __asm
    {
        mov edx, dword ptr ds : [ecx+4]
        test edx, edx
        jne public_6efae4a
        xor eax, eax
        ret 
        public_6efae4a : nop
        mov eax, dword ptr ds : [ecx+0xC]
        sub eax, edx
        sar eax, 7
        ret 
        UNREACHABLE_TRAP(0x6efae40)
    }
}

#undef public_6efae4a
