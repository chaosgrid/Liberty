#include "SoundStreamer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef8474);
CLANG_FORWARD_PROC_SYMBOL(public_6ef8494);

PROC_DECLARE(0x6ef8474, internal_6ef8474, public_6ef8474);
extern "C" NAKED register_t __cdecl internal_6ef8474()
{
    __asm
    {
        push 0
        push 1
        push dword ptr ss : [esp+0xC]
        call public_6ef8494
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x6ef8474)
    }
}
