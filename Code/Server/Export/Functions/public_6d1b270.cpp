#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d1b270);

#define public_6d1b27a _public_6d1b27a

PROC_DECLARE(0x6d1b270, internal_6d1b270, public_6d1b270);
extern "C" NAKED register_t __cdecl internal_6d1b270()
{
    __asm
    {
        mov edx, dword ptr ds : [ecx+4]
        test edx, edx
        jne public_6d1b27a
        xor eax, eax
        ret 
        public_6d1b27a : nop
        mov eax, dword ptr ds : [ecx+8]
        sub eax, edx
        sar eax, 5
        ret 
        UNREACHABLE_TRAP(0x6d1b270)
    }
}

#undef public_6d1b27a
