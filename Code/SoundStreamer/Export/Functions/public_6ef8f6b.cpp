#include "SoundStreamer-PCH.h"

PROC_DECLARE(0x6ef8f6b, internal_6ef8f6b, public_6ef8f6b);
extern "C" NAKED register_t __cdecl internal_6ef8f6b()
{
    __asm
    {
        push dword ptr ds : [public_6f01248]
        call dword ptr ds : [public_6efc0a4]
        ret 
        UNREACHABLE_TRAP(0x6ef8f6b)
    }
}
