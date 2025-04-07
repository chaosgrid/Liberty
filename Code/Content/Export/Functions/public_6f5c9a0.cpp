#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ee8af0);
CLANG_FORWARD_PROC_SYMBOL(public_6f5c9a0);

#define public_6f5c9be _public_6f5c9be

PROC_DECLARE(0x6f5c9a0, internal_6f5c9a0, public_6f5c9a0);
extern "C" NAKED register_t __cdecl internal_6f5c9a0()
{
    __asm
    {
        mov cl, byte ptr ds : [public_6fd1c04]
        mov al, 1
        test al, cl
        jne public_6f5c9be
        or cl, al
        mov byte ptr ds : [public_6fd1c04], cl
        mov ecx, offset public_6fd1c08
        jmp public_6ee8af0
        public_6f5c9be : nop
        ret 
        UNREACHABLE_TRAP(0x6f5c9a0)
    }
}

#undef public_6f5c9be
