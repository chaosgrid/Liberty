#include "Common-PCH.h"

PROC_DECLARE(0x632af60, internal_632af60, public_632af60);
extern "C" NAKED register_t __cdecl internal_632af60()
{
    __asm
    {
        xor eax, eax
        ret 0x1C
        UNREACHABLE_TRAP(0x632af60)
    }
}
