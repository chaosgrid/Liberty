#include "SoundStreamer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef8485);
CLANG_FORWARD_PROC_SYMBOL(public_6ef8494);

PROC_DECLARE(0x6ef8485, internal_6ef8485, public_6ef8485);
extern "C" NAKED register_t __cdecl internal_6ef8485()
{
    __asm
    {
        push 1
        push 0
        push 0
        call public_6ef8494
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x6ef8485)
    }
}
