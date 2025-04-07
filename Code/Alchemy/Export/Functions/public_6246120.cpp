#include "Alchemy-PCH.h"

PROC_DECLARE(0x6246120, internal_6246120, public_6246120);
extern "C" NAKED register_t __cdecl internal_6246120()
{
    __asm
    {
        jmp dword ptr ds : [public_624b048]
        UNREACHABLE_TRAP(0x6246120)
    }
}
