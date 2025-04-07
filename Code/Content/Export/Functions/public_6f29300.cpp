#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f291b0);
CLANG_FORWARD_PROC_SYMBOL(public_6f29300);

#define public_6f2931e _public_6f2931e

PROC_DECLARE(0x6f29300, internal_6f29300, public_6f29300);
extern "C" NAKED register_t __cdecl internal_6f29300()
{
    __asm
    {
        mov cl, byte ptr ds : [public_6fd07a8]
        mov al, 2
        test al, cl
        jne public_6f2931e
        or cl, al
        mov byte ptr ds : [public_6fd07a8], cl
        mov ecx, offset public_6fd0794
        jmp public_6f291b0
        public_6f2931e : nop
        ret 
        UNREACHABLE_TRAP(0x6f29300)
    }
}

#undef public_6f2931e
