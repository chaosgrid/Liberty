#include "SoundStreamer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6efb644);
CLANG_FORWARD_PROC_SYMBOL(public_6efb64d);

PROC_DECLARE(0x6efb644, internal_6efb644, public_6efb644);
extern "C" NAKED register_t __cdecl internal_6efb644()
{
    __asm
    {
        push 1
        call public_6efb64d
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x6efb644)
    }
}
