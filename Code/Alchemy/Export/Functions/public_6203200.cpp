#include "Alchemy-PCH.h"

PROC_DECLARE(0x6203200, internal_6203200, public_6203200);
extern "C" NAKED register_t __cdecl internal_6203200()
{
    __asm
    {
        xor eax, eax
        ret 0xC
        UNREACHABLE_TRAP(0x6203200)
    }
}
