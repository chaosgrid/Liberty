#include "SoundStreamer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6efb555);
CLANG_FORWARD_PROC_SYMBOL(public_6efb644);

#define public_6ef9ebd _public_6ef9ebd

PROC_DECLARE(0x6ef9eaa, internal_6ef9eaa, public_6ef9eaa);
extern "C" NAKED register_t __cdecl internal_6ef9eaa()
{
    __asm
    {
        call public_6efb644
        cmp byte ptr ds : [public_6f01130], 0
        je public_6ef9ebd
        jmp public_6efb555
        public_6ef9ebd : nop
        ret 
        UNREACHABLE_TRAP(0x6ef9eaa)
    }
}

#undef public_6ef9ebd
