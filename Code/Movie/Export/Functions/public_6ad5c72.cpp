#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ad8801);
CLANG_FORWARD_PROC_SYMBOL(public_6ad890c);

#define public_6ad5c85 _public_6ad5c85

PROC_DECLARE(0x6ad5c72, internal_6ad5c72, public_6ad5c72);
extern "C" NAKED register_t __cdecl internal_6ad5c72()
{
    __asm
    {
        call public_6ad890c
        cmp byte ptr ds : [public_6ae0ee0], 0
        je public_6ad5c85
        jmp public_6ad8801
        public_6ad5c85 : nop
        ret 
        UNREACHABLE_TRAP(0x6ad5c72)
    }
}

#undef public_6ad5c85
