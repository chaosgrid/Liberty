#include "SoundStreamer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef45cb);
CLANG_FORWARD_PROC_SYMBOL(public_6ef45dd);

PROC_DECLARE(0x6ef45cb, internal_6ef45cb, public_6ef45cb);
extern "C" NAKED register_t __cdecl internal_6ef45cb()
{
    __asm
    {
        push dword ptr ds : [public_6f010d8]
        push dword ptr ss : [esp+8]
        call public_6ef45dd
        pop ecx
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x6ef45cb)
    }
}
