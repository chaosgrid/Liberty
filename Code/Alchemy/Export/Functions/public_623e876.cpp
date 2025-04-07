#include "Alchemy-PCH.h"

PROC_DECLARE(0x623e876, internal_623e876, public_623e876);
extern "C" NAKED register_t __cdecl internal_623e876()
{
    __asm
    {
        jmp dword ptr ds : [public_624b000]
        UNREACHABLE_TRAP(0x623e876)
    }
}
