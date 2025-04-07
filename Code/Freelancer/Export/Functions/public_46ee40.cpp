#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_46ee40);
CLANG_FORWARD_PROC_SYMBOL(public_46ee60);

#define public_46ee5e _public_46ee5e

PROC_DECLARE(0x46ee40, internal_46ee40, public_46ee40);
extern "C" NAKED register_t __cdecl internal_46ee40()
{
    __asm
    {
        mov cl, byte ptr ds : [public_66dab8]
        mov al, 2
        test al, cl
        jne public_46ee5e
        or cl, al
        mov byte ptr ds : [public_66dab8], cl
        mov ecx, offset public_66daa4
        jmp public_46ee60
        public_46ee5e : nop
        ret 
        UNREACHABLE_TRAP(0x46ee40)
    }
}

#undef public_46ee5e
