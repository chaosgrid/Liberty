#include "Alchemy-PCH.h"

PROC_DECLARE(0x6244a90, internal_6244a90, public_6244a90);
extern "C" NAKED register_t __cdecl internal_6244a90()
{
    __asm
    {
        xor eax, eax
        ret 0x10
        UNREACHABLE_TRAP(0x6244a90)
    }
}
