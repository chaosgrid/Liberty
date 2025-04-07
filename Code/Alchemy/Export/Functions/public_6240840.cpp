#include "Alchemy-PCH.h"

PROC_DECLARE(0x6240840, internal_6240840, public_6240840);
extern "C" NAKED register_t __cdecl internal_6240840()
{
    __asm
    {
        mov eax, 0x190
        ret 4
        UNREACHABLE_TRAP(0x6240840)
    }
}
