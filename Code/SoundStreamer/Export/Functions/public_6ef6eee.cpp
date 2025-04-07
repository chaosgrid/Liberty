#include "SoundStreamer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef6d4e);
CLANG_FORWARD_PROC_SYMBOL(public_6ef6eee);

PROC_DECLARE(0x6ef6eee, internal_6ef6eee, public_6ef6eee);
extern "C" NAKED register_t __cdecl internal_6ef6eee()
{
    __asm
    {
        push dword ptr ss : [esp+0xC]
        mov byte ptr ds : [public_6f010cc], 1
        push dword ptr ss : [esp+0xC]
        push dword ptr ss : [esp+0xC]
        call public_6ef6d4e
        and byte ptr ds : [public_6f010cc], 0
        add esp, 0xC
        ret 
        UNREACHABLE_TRAP(0x6ef6eee)
    }
}
