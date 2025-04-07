#include "Common-PCH.h"

PROC_DECLARE(0x632af80, internal_632af80, public_632af80);
extern "C" NAKED register_t __cdecl internal_632af80()
{
    __asm
    {
        xor eax, eax
        ret 0xC
        UNREACHABLE_TRAP(0x632af80)
    }
}
