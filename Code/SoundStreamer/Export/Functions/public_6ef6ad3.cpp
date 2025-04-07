#include "SoundStreamer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef6ad3);
CLANG_FORWARD_PROC_SYMBOL(public_6ef935d);

PROC_DECLARE(0x6ef6ad3, internal_6ef6ad3, public_6ef6ad3);
extern "C" NAKED register_t __cdecl internal_6ef6ad3()
{
    __asm
    {
        push 0x30000
        push 0x10000
        call public_6ef935d
        pop ecx
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x6ef6ad3)
    }
}
