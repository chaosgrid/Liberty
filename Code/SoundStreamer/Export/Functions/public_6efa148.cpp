#include "SoundStreamer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef8474);
CLANG_FORWARD_PROC_SYMBOL(public_6ef8c47);
CLANG_FORWARD_PROC_SYMBOL(public_6efa148);
CLANG_FORWARD_PROC_SYMBOL(public_6efb6ba);

PROC_DECLARE(0x6efa148, internal_6efa148, public_6efa148);
extern "C" NAKED register_t __cdecl internal_6efa148()
{
    __asm
    {
        push 0xA
        call public_6ef8c47
        push 0x16
        call public_6efb6ba
        pop ecx
        pop ecx
        push 3
        call public_6ef8474
        UNREACHABLE_TRAP(0x6efa148)
    }
}
