#include "Server-PCH.h"

PROC_DECLARE(0x6d02cb0, internal_6d02cb0, public_6d02cb0);
extern "C" NAKED register_t __cdecl internal_6d02cb0()
{
    __asm
    {
        xor al, al
        ret 4
        UNREACHABLE_TRAP(0x6d02cb0)
    }
}
