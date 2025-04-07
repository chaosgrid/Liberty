#include "Common-PCH.h"

PROC_DECLARE(0x632af70, internal_632af70, public_632af70);
extern "C" NAKED register_t __cdecl internal_632af70()
{
    __asm
    {
        xor eax, eax
        ret 0x14
        UNREACHABLE_TRAP(0x632af70)
    }
}
