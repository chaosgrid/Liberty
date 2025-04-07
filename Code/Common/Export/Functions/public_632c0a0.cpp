#include "Common-PCH.h"

PROC_DECLARE(0x632c0a0, internal_632c0a0, public_632c0a0);
extern "C" NAKED register_t __cdecl internal_632c0a0()
{
    __asm
    {
        xor al, al
        ret 0x14
        UNREACHABLE_TRAP(0x632c0a0)
    }
}
