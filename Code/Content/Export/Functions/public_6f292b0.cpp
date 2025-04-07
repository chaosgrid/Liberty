#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f291b0);
CLANG_FORWARD_PROC_SYMBOL(public_6f292b0);

#define public_6f292ce _public_6f292ce

PROC_DECLARE(0x6f292b0, internal_6f292b0, public_6f292b0);
extern "C" NAKED register_t __cdecl internal_6f292b0()
{
    __asm
    {
        mov cl, byte ptr ds : [public_6fd07a8]
        mov al, 1
        test al, cl
        jne public_6f292ce
        or cl, al
        mov byte ptr ds : [public_6fd07a8], cl
        mov ecx, offset public_6fd07ac
        jmp public_6f291b0
        public_6f292ce : nop
        ret 
        UNREACHABLE_TRAP(0x6f292b0)
    }
}

#undef public_6f292ce
