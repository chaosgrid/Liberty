#include "Alchemy-PCH.h"

PROC_DECLARE(0x6213730, internal_6213730, public_6213730);
extern "C" NAKED register_t __cdecl internal_6213730()
{
    __asm
    {
        xor eax, eax
        ret 4
        UNREACHABLE_TRAP(0x6213730)
    }
}
