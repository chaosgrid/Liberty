#include "Alchemy-PCH.h"

PROC_DECLARE(0x6246288, internal_6246288, public_6246288);
extern "C" NAKED register_t __cdecl internal_6246288()
{
    __asm
    {
        jmp dword ptr ds : [public_624b064]
        UNREACHABLE_TRAP(0x6246288)
    }
}
