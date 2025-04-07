#include "Common-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_63441a0);
CLANG_FORWARD_PROC_SYMBOL(public_6352140);

#define public_635214e _public_635214e

PROC_DECLARE(0x6352140, internal_6352140, public_6352140);
extern "C" NAKED register_t __cdecl internal_6352140()
{
    __asm
    {
        mov ax, word ptr ds : [ecx+2]
        cmp ax, word ptr ds : [ecx]
        jb public_635214e
        jmp public_63441a0
        public_635214e : nop
        ret 
        UNREACHABLE_TRAP(0x6352140)
    }
}

#undef public_635214e
