#include "Freelancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_46ee60);
CLANG_FORWARD_PROC_SYMBOL(public_46ef60);

#define public_46ef7e _public_46ef7e

PROC_DECLARE(0x46ef60, internal_46ef60, public_46ef60);
extern "C" NAKED register_t __cdecl internal_46ef60()
{
    __asm
    {
        mov cl, byte ptr ds : [public_66da8c]
        mov al, 1
        test al, cl
        jne public_46ef7e
        or cl, al
        mov byte ptr ds : [public_66da8c], cl
        mov ecx, offset public_66da90
        jmp public_46ee60
        public_46ef7e : nop
        ret 
        UNREACHABLE_TRAP(0x46ef60)
    }
}

#undef public_46ef7e
