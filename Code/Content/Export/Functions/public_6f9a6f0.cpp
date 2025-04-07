#include "Content-PCH.h"

PROC_DECLARE(0x6f9a6f0, internal_6f9a6f0, public_6f9a6f0);
extern "C" NAKED register_t __cdecl internal_6f9a6f0()
{
    __asm
    {
        xor al, al
        ret 8
        UNREACHABLE_TRAP(0x6f9a6f0)
    }
}
