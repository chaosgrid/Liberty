#include "Alchemy-PCH.h"

PROC_DECLARE(0x6201610, internal_6201610, public_6201610);
extern "C" NAKED register_t __cdecl internal_6201610()
{
    __asm
    {
        xor eax, eax
        ret 4
        UNREACHABLE_TRAP(0x6201610)
    }
}
