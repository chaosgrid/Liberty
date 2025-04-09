#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_4771d0);

#define public_4771da _public_4771da

PROC_DECLARE(0x4771d0, internal_4771d0, public_4771d0);
extern "C" NAKED register_t __cdecl internal_4771d0()
{
    __asm
    {
        mov edx, dword ptr ds : [ecx+4]
        test edx, edx
        jne public_4771da
        xor eax, eax
        ret 
        public_4771da : nop
        mov eax, dword ptr ds : [ecx+8]
        sub eax, edx
        sar eax, 7
        ret 
        UNREACHABLE_TRAP(0x4771d0)
    }
}

#undef public_4771da
