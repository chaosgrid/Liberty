#include "Alchemy-PCH.h"

PROC_DECLARE(0x6246138, internal_6246138, public_6246138);
extern "C" NAKED register_t __cdecl internal_6246138()
{
    __asm
    {
        jmp dword ptr ds : [public_624b050]
        UNREACHABLE_TRAP(0x6246138)
    }
}
