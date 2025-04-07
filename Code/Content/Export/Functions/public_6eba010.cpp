#include "Content-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6f1b4f0);

#define public_6eba01f _public_6eba01f

PROC_DECLARE(0x6eba010, internal_6eba010, public_6eba010);
extern "C" NAKED register_t __cdecl internal_6eba010()
{
    __asm
    {
        mov al, byte ptr ds : [ecx+0x290]
        test al, al
        jne public_6eba01f
        jmp public_6f1b4f0
        public_6eba01f : nop
        ret 8
        UNREACHABLE_TRAP(0x6eba010)
    }
}

#undef public_6eba01f
