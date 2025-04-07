#include "SoundManager-PCH.h"

PROC_DECLARE(0x6ee8d90, internal_6ee8d90, public_6ee8d90);
extern "C" NAKED register_t __cdecl internal_6ee8d90()
{
    __asm
    {
        jmp dword ptr ds : [public_6ee907c]
        UNREACHABLE_TRAP(0x6ee8d90)
    }
}
