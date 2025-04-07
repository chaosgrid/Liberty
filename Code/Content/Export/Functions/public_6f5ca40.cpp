#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f15350);
CLANG_FORWARD_PROC_SYMBOL(public_6f5ca40);

#define public_6f5ca5e _public_6f5ca5e

PROC_DECLARE(0x6f5ca40, internal_6f5ca40, public_6f5ca40);
extern "C" NAKED register_t __cdecl internal_6f5ca40()
{
    __asm
    {
        mov cl, byte ptr ds : [public_6fd1bd4]
        mov al, 1
        test al, cl
        jne public_6f5ca5e
        or cl, al
        mov byte ptr ds : [public_6fd1bd4], cl
        mov ecx, offset public_6fd1bd8
        jmp public_6f15350
        public_6f5ca5e : nop
        ret 
        UNREACHABLE_TRAP(0x6f5ca40)
    }
}

#undef public_6f5ca5e
