#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ee9690);
CLANG_FORWARD_PROC_SYMBOL(public_6f5c9e0);

#define public_6f5c9fe _public_6f5c9fe

PROC_DECLARE(0x6f5c9e0, internal_6f5c9e0, public_6f5c9e0);
extern "C" NAKED register_t __cdecl internal_6f5c9e0()
{
    __asm
    {
        mov cl, byte ptr ds : [public_6fd1c04]
        mov al, 2
        test al, cl
        jne public_6f5c9fe
        or cl, al
        mov byte ptr ds : [public_6fd1c04], cl
        mov ecx, offset public_6fd1bf0
        jmp public_6ee9690
        public_6f5c9fe : nop
        ret 
        UNREACHABLE_TRAP(0x6f5c9e0)
    }
}

#undef public_6f5c9fe
