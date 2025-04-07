#include "Common-PCH.h"

PROC_DECLARE(0x632c0b0, internal_632c0b0, public_632c0b0);
extern "C" NAKED register_t __cdecl internal_632c0b0()
{
    __asm
    {
        xor al, al
        ret 0x10
        UNREACHABLE_TRAP(0x632c0b0)
    }
}
