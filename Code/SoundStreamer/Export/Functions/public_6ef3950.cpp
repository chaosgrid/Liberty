#include "SoundStreamer-PCH.h"

PROC_DECLARE(0x6ef3950, internal_6ef3950, public_6ef3950);
extern "C" NAKED register_t __cdecl internal_6ef3950()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [eax+0x5C]
        ret 4
        UNREACHABLE_TRAP(0x6ef3950)
    }
}
