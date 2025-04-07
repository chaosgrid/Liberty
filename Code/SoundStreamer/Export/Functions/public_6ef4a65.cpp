#include "SoundStreamer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef45dd);
CLANG_FORWARD_PROC_SYMBOL(public_6ef4a65);

PROC_DECLARE(0x6ef4a65, internal_6ef4a65, public_6ef4a65);
extern "C" NAKED register_t __cdecl internal_6ef4a65()
{
    __asm
    {
        push 1
        push dword ptr ss : [esp+8]
        call public_6ef45dd
        pop ecx
        pop ecx
        ret 
        UNREACHABLE_TRAP(0x6ef4a65)
    }
}
