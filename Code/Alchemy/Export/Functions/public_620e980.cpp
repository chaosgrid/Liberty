#include "Alchemy-PCH.h"

PROC_DECLARE(0x620e980, internal_620e980, public_620e980);
extern "C" NAKED register_t __cdecl internal_620e980()
{
    __asm
    {
        xor eax, eax
        ret 0xC
        UNREACHABLE_TRAP(0x620e980)
    }
}
