#include "Alchemy-PCH.h"

PROC_DECLARE(0x620e620, internal_620e620, public_620e620);
extern "C" NAKED register_t __cdecl internal_620e620()
{
    __asm
    {
        xor eax, eax
        ret 8
        UNREACHABLE_TRAP(0x620e620)
    }
}
