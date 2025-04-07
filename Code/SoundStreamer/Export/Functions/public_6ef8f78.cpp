#include "SoundStreamer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef8f78);
CLANG_FORWARD_PROC_SYMBOL(public_6ef8f8f);

PROC_DECLARE(0x6ef8f78, internal_6ef8f78, public_6ef8f78);
extern "C" NAKED register_t __cdecl internal_6ef8f78()
{
    __asm
    {
        push 0
        push dword ptr ss : [esp+0x10]
        push dword ptr ss : [esp+0x10]
        push dword ptr ss : [esp+0x10]
        call public_6ef8f8f
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6ef8f78)
    }
}
