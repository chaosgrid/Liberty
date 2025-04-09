#include "FreeLancer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_559c10);
CLANG_FORWARD_PROC_SYMBOL(public_559db0);

#define public_559c1e _public_559c1e

PROC_DECLARE(0x559c10, internal_559c10, public_559c10);
extern "C" NAKED register_t __cdecl internal_559c10()
{
    __asm
    {
        mov al, byte ptr ds : [public_679af0]
        test al, al
        jne public_559c1e
        jmp public_559db0
        public_559c1e : nop
        ret 
        UNREACHABLE_TRAP(0x559c10)
    }
}

#undef public_559c1e
