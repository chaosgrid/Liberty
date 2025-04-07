#include "Common-PCH.h"

PROC_DECLARE(0x632af50, internal_632af50, public_632af50);
extern "C" NAKED register_t __cdecl internal_632af50()
{
    __asm
    {
        xor eax, eax
        ret 0x20
        UNREACHABLE_TRAP(0x632af50)
    }
}
