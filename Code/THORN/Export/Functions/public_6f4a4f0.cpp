#include "THORN-PCH.h"

PROC_DECLARE(0x6f4a4f0, internal_6f4a4f0, public_6f4a4f0);
extern "C" NAKED register_t __cdecl internal_6f4a4f0()
{
    __asm
    {
        xor al, al
        ret 4
        UNREACHABLE_TRAP(0x6f4a4f0)
    }
}
