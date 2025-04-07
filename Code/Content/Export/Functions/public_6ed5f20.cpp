#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ed5f20);
CLANG_FORWARD_PROC_SYMBOL(public_6ed5f40);

#define public_6ed5f3e _public_6ed5f3e

PROC_DECLARE(0x6ed5f20, internal_6ed5f20, public_6ed5f20);
extern "C" NAKED register_t __cdecl internal_6ed5f20()
{
    __asm
    {
        mov cl, byte ptr ds : [public_6fcf124]
        mov al, 2
        test al, cl
        jne public_6ed5f3e
        or cl, al
        mov byte ptr ds : [public_6fcf124], cl
        mov ecx, offset public_6fcf110
        jmp public_6ed5f40
        public_6ed5f3e : nop
        ret 
        nop 
        UNREACHABLE_TRAP(0x6ed5f20)
    }
}

#undef public_6ed5f3e
