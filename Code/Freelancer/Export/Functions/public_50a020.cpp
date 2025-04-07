#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_46e9c0);
CLANG_FORWARD_PROC_SYMBOL(public_50a020);

#define public_50a03e _public_50a03e

PROC_DECLARE(0x50a020, internal_50a020, public_50a020);
extern "C" NAKED register_t __cdecl internal_50a020()
{
    __asm
    {
        mov cl, byte ptr ds : [public_675010]
        mov al, 1
        test al, cl
        jne public_50a03e
        or cl, al
        mov byte ptr ds : [public_675010], cl
        mov ecx, offset public_675018
        jmp public_46e9c0
        public_50a03e : nop
        ret 
        UNREACHABLE_TRAP(0x50a020)
    }
}

#undef public_50a03e
