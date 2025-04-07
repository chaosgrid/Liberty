#include "Alchemy-PCH.h"

PROC_DECLARE(0x6244760, internal_6244760, public_6244760);
extern "C" NAKED register_t __cdecl internal_6244760()
{
    __asm
    {
        or eax, 0xFFFFFFFF
        ret 4
        UNREACHABLE_TRAP(0x6244760)
    }
}
