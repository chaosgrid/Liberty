#include "Server-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6d40b10);
CLANG_FORWARD_PROC_SYMBOL(public_6d414d0);

#define public_6d40b2e _public_6d40b2e

PROC_DECLARE(0x6d40b10, internal_6d40b10, public_6d40b10);
extern "C" NAKED register_t __cdecl internal_6d40b10()
{
    __asm
    {
        mov cl, byte ptr ds : [public_6d8f615]
        mov al, 1
        test al, cl
        jne public_6d40b2e
        or cl, al
        mov byte ptr ds : [public_6d8f615], cl
        mov ecx, offset public_6d904e0
        jmp public_6d414d0
        public_6d40b2e : nop
        ret 
        UNREACHABLE_TRAP(0x6d40b10)
    }
}

#undef public_6d40b2e
