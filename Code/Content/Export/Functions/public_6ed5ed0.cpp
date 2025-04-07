#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ed5de0);
CLANG_FORWARD_PROC_SYMBOL(public_6ed5ed0);

#define public_6ed5eee _public_6ed5eee

PROC_DECLARE(0x6ed5ed0, internal_6ed5ed0, public_6ed5ed0);
extern "C" NAKED register_t __cdecl internal_6ed5ed0()
{
    __asm
    {
        mov cl, byte ptr ds : [public_6fcf124]
        mov al, 1
        test al, cl
        jne public_6ed5eee
        or cl, al
        mov byte ptr ds : [public_6fcf124], cl
        mov ecx, offset public_6fcf128
        jmp public_6ed5de0
        public_6ed5eee : nop
        ret 
        UNREACHABLE_TRAP(0x6ed5ed0)
    }
}

#undef public_6ed5eee
