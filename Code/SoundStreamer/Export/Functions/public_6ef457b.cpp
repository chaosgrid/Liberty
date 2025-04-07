#include "SoundStreamer-PCH.h"

CLANG_FORWARD_PROC_SYMBOL(public_6ef4593);
CLANG_FORWARD_PROC_SYMBOL(public_6ef6ad3);
CLANG_FORWARD_PROC_SYMBOL(public_6ef6b23);

PROC_DECLARE(0x6ef457b, internal_6ef457b, public_6ef457b);
extern "C" NAKED register_t __cdecl internal_6ef457b()
{
    __asm
    {
        call public_6ef4593
        call public_6ef6b23
        mov dword ptr ds : [public_6f010ac], eax
        call public_6ef6ad3
        fnclex 
        ret 
        UNREACHABLE_TRAP(0x6ef457b)
    }
}
