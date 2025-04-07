#include "Movie-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ad9c1a);
CLANG_FORWARD_PROC_SYMBOL(public_6ad9c26);

#define public_6ad9c00 _public_6ad9c00
#define public_6ad9c15 _public_6ad9c15

PROC_DECLARE(0x6ad9bf0, internal_6ad9bf0, public_6ad9bf0);
extern "C" NAKED register_t __cdecl internal_6ad9bf0()
{
    __asm
    {
        test byte ptr ds : [public_6ae1208], 1
        jne public_6ad9c00
        or byte ptr ds : [public_6ae1208], 1
        public_6ad9c00 : nop
        call public_6ad9c1a
        test byte ptr ds : [public_6ae25a4], 1
        jne public_6ad9c15
        or byte ptr ds : [public_6ae25a4], 1
        public_6ad9c15 : nop
        jmp public_6ad9c26
        UNREACHABLE_TRAP(0x6ad9bf0)
    }
}

#undef public_6ad9c00
#undef public_6ad9c15
