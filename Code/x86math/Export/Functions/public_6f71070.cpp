#include "x86math-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f71070);

#define public_6f71084 _public_6f71084

PROC_DECLARE(0x6f71070, internal_6f71070, public_6f71070);
extern "C" NAKED register_t __cdecl internal_6f71070()
{
    __asm
    {
        mov cl, byte ptr ds : [public_6f74430]
        mov al, 1
        test al, cl
        jne public_6f71084
        or cl, al
        mov byte ptr ds : [public_6f74430], cl
        public_6f71084 : nop
        ret 
        UNREACHABLE_TRAP(0x6f71070)
    }
}

#undef public_6f71084
