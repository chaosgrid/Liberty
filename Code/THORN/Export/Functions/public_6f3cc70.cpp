#include "THORN-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f3cc70);

#define public_6f3cc7a _public_6f3cc7a

PROC_DECLARE(0x6f3cc70, internal_6f3cc70, public_6f3cc70);
extern "C" NAKED register_t __cdecl internal_6f3cc70()
{
    __asm
    {
        mov edx, dword ptr ds : [ecx+4]
        test edx, edx
        jne public_6f3cc7a
        xor eax, eax
        ret 
        public_6f3cc7a : nop
        mov eax, dword ptr ds : [ecx+0xC]
        sub eax, edx
        sar eax, 2
        ret 
        UNREACHABLE_TRAP(0x6f3cc70)
    }
}

#undef public_6f3cc7a
