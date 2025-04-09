#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_41dc50);
CLANG_FORWARD_PROC_SYMBOL(public_510cf0);

#define public_510d0e _public_510d0e

PROC_DECLARE(0x510cf0, internal_510cf0, public_510cf0);
extern "C" NAKED register_t __cdecl internal_510cf0()
{
    __asm
    {
        mov cl, byte ptr ds : [public_675098]
        mov al, 1
        test al, cl
        jne public_510d0e
        or cl, al
        mov byte ptr ds : [public_675098], cl
        mov ecx, offset public_6750a0
        jmp public_41dc50
        public_510d0e : nop
        ret 
        UNREACHABLE_TRAP(0x510cf0)
    }
}

#undef public_510d0e
