#include "Alchemy-PCH.h"

PROC_DECLARE(0x6203230, internal_6203230, public_6203230);
extern "C" NAKED register_t __cdecl internal_6203230()
{
    __asm
    {
        or eax, 0xFFFFFFFF
        ret 0xC
        UNREACHABLE_TRAP(0x6203230)
    }
}
