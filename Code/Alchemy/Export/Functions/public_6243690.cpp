#include "Alchemy-PCH.h"

PROC_DECLARE(0x6243690, internal_6243690, public_6243690);
extern "C" NAKED register_t __cdecl internal_6243690()
{
    __asm
    {
        xor eax, eax
        ret 8
        UNREACHABLE_TRAP(0x6243690)
    }
}
