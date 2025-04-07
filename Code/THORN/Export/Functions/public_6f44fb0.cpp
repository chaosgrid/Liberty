#include "THORN-PCH.h"

PROC_DECLARE(0x6f44fb0, internal_6f44fb0, public_6f44fb0);
extern "C" NAKED register_t __cdecl internal_6f44fb0()
{
    __asm
    {
        xor al, al
        ret 8
        UNREACHABLE_TRAP(0x6f44fb0)
    }
}
