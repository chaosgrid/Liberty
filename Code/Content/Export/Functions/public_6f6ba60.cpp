#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6eec8d0);
CLANG_FORWARD_PROC_SYMBOL(public_6f6ba60);

#define public_6f6ba7e _public_6f6ba7e

PROC_DECLARE(0x6f6ba60, internal_6f6ba60, public_6f6ba60);
extern "C" NAKED register_t __cdecl internal_6f6ba60()
{
    __asm
    {
        mov cl, byte ptr ds : [public_6fd1cb8]
        mov al, 1
        test al, cl
        jne public_6f6ba7e
        or cl, al
        mov byte ptr ds : [public_6fd1cb8], cl
        mov ecx, offset public_6fd1cbc
        jmp public_6eec8d0
        public_6f6ba7e : nop
        ret 
        UNREACHABLE_TRAP(0x6f6ba60)
    }
}

#undef public_6f6ba7e
