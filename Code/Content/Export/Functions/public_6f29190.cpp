#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f29190);
CLANG_FORWARD_PROC_SYMBOL(public_6f291b0);

#define public_6f291ae _public_6f291ae

PROC_DECLARE(0x6f29190, internal_6f29190, public_6f29190);
extern "C" NAKED register_t __cdecl internal_6f29190()
{
    __asm
    {
        mov cl, byte ptr ds : [public_6fd07c0]
        mov al, 1
        test al, cl
        jne public_6f291ae
        or cl, al
        mov byte ptr ds : [public_6fd07c0], cl
        mov ecx, offset public_6fd07c4
        jmp public_6f291b0
        public_6f291ae : nop
        ret 
        UNREACHABLE_TRAP(0x6f29190)
    }
}

#undef public_6f291ae
