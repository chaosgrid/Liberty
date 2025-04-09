#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_425a20);
CLANG_FORWARD_PROC_SYMBOL(public_595400);

#define public_595413 _public_595413

PROC_DECLARE(0x595400, internal_595400, public_595400);
extern "C" NAKED register_t __cdecl internal_595400()
{
    __asm
    {
        mov al, byte ptr ds : [public_67d9e0]
        test al, al
        je public_595413
        mov ecx, offset public_67d9c8
        jmp public_425a20
        public_595413 : nop
        ret 
        UNREACHABLE_TRAP(0x595400)
    }
}

#undef public_595413
