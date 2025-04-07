#include "Alchemy-PCH.h"

PROC_DECLARE(0x6203330, internal_6203330, public_6203330);
extern "C" NAKED register_t __cdecl internal_6203330()
{
    __asm
    {
        xor eax, eax
        ret 8
        UNREACHABLE_TRAP(0x6203330)
    }
}
