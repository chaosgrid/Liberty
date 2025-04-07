#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f23630);

#define public_6f2363a _public_6f2363a

PROC_DECLARE(0x6f23630, internal_6f23630, public_6f23630);
extern "C" NAKED register_t __cdecl internal_6f23630()
{
    __asm
    {
        mov edx, dword ptr ds : [ecx+4]
        test edx, edx
        jne public_6f2363a
        xor eax, eax
        ret 
        public_6f2363a : nop
        mov eax, dword ptr ds : [ecx+8]
        sub eax, edx
        sar eax, 2
        ret 
        UNREACHABLE_TRAP(0x6f23630)
    }
}

#undef public_6f2363a
