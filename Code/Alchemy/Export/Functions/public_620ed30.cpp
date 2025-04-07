#include "Alchemy-PCH.h"

PROC_DECLARE(0x620ed30, internal_620ed30, public_620ed30);
extern "C" NAKED register_t __cdecl internal_620ed30()
{
    __asm
    {
        xor eax, eax
        ret 8
        UNREACHABLE_TRAP(0x620ed30)
    }
}
