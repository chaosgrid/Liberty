#include "SoundStreamer-PCH.h"

PROC_DECLARE(0x6ef3940, internal_6ef3940, public_6ef3940);
extern "C" NAKED register_t __cdecl internal_6ef3940()
{
    __asm
    {
        mov eax, dword ptr ss : [esp+4]
        mov eax, dword ptr ds : [eax+0x58]
        ret 4
        UNREACHABLE_TRAP(0x6ef3940)
    }
}
