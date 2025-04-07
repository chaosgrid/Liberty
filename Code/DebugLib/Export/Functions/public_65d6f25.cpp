#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65d6f4f);
CLANG_FORWARD_PROC_SYMBOL(public_65d6f5b);

#define public_65d6f35 _public_65d6f35
#define public_65d6f4a _public_65d6f4a

PROC_DECLARE(0x65d6f25, internal_65d6f25, public_65d6f25);
extern "C" NAKED register_t __cdecl internal_65d6f25()
{
    __asm
    {
        test byte ptr ds : [public_65e66bf], 1
        jne public_65d6f35
        or byte ptr ds : [public_65e66bf], 1
        public_65d6f35 : nop
        call public_65d6f4f
        test byte ptr ds : [public_65e66c0], 1
        jne public_65d6f4a
        or byte ptr ds : [public_65e66c0], 1
        public_65d6f4a : nop
        jmp public_65d6f5b
        UNREACHABLE_TRAP(0x65d6f25)
    }
}

#undef public_65d6f35
#undef public_65d6f4a
