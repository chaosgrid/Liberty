#include "SoundStreamer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef6c4a);
CLANG_FORWARD_PROC_SYMBOL(public_6ef6ec7);

PROC_DECLARE(0x6ef6ec7, internal_6ef6ec7, public_6ef6ec7);
extern "C" NAKED register_t __cdecl internal_6ef6ec7()
{
    __asm
    {
        push dword ptr ss : [esp+0x10]
        mov byte ptr ds : [public_6f010cc], 1
        push dword ptr ss : [esp+0x10]
        push dword ptr ss : [esp+0x10]
        push dword ptr ss : [esp+0x10]
        call public_6ef6c4a
        and byte ptr ds : [public_6f010cc], 0
        add esp, 0x10
        ret 
        UNREACHABLE_TRAP(0x6ef6ec7)
    }
}
