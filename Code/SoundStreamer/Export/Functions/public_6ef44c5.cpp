#include "SoundStreamer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef44ef);
CLANG_FORWARD_PROC_SYMBOL(public_6ef44fb);

#define public_6ef44d5 _public_6ef44d5
#define public_6ef44ea _public_6ef44ea

PROC_DECLARE(0x6ef44c5, internal_6ef44c5, public_6ef44c5);
extern "C" NAKED register_t __cdecl internal_6ef44c5()
{
    __asm
    {
        test byte ptr ds : [public_6f012d4], 1
        jne public_6ef44d5
        or byte ptr ds : [public_6f012d4], 1
        public_6ef44d5 : nop
        call public_6ef44ef
        test byte ptr ds : [public_6f012d5], 1
        jne public_6ef44ea
        or byte ptr ds : [public_6f012d5], 1
        public_6ef44ea : nop
        jmp public_6ef44fb
        UNREACHABLE_TRAP(0x6ef44c5)
    }
}

#undef public_6ef44d5
#undef public_6ef44ea
