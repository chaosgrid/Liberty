#include "DebugLib-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_65de9de);
CLANG_FORWARD_PROC_SYMBOL(public_65deae9);

#define public_65dd797 _public_65dd797

PROC_DECLARE(0x65dd784, internal_65dd784, public_65dd784);
extern "C" NAKED register_t __cdecl internal_65dd784()
{
    __asm
    {
        call public_65deae9
        cmp byte ptr ds : [public_65e616c], 0
        je public_65dd797
        jmp public_65de9de
        public_65dd797 : nop
        ret 
        UNREACHABLE_TRAP(0x65dd784)
    }
}

#undef public_65dd797
