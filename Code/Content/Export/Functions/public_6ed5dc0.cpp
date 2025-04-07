#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ed5dc0);
CLANG_FORWARD_PROC_SYMBOL(public_6ed5de0);

#define public_6ed5dde _public_6ed5dde

PROC_DECLARE(0x6ed5dc0, internal_6ed5dc0, public_6ed5dc0);
extern "C" NAKED register_t __cdecl internal_6ed5dc0()
{
    __asm
    {
        mov cl, byte ptr ds : [public_6fcf13c]
        mov al, 1
        test al, cl
        jne public_6ed5dde
        or cl, al
        mov byte ptr ds : [public_6fcf13c], cl
        mov ecx, offset public_6fcf140
        jmp public_6ed5de0
        public_6ed5dde : nop
        ret 
        UNREACHABLE_TRAP(0x6ed5dc0)
    }
}

#undef public_6ed5dde
