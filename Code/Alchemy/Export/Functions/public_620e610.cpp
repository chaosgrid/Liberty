#include "Alchemy-PCH.h"

PROC_DECLARE(0x620e610, internal_620e610, public_620e610);
extern "C" NAKED register_t __cdecl internal_620e610()
{
    __asm
    {
        xor eax, eax
        ret 8
        UNREACHABLE_TRAP(0x620e610)
    }
}
