#include "THORN-PCH.h"

PROC_DECLARE(0x6f4a710, internal_6f4a710, public_6f4a710);
extern "C" NAKED register_t __cdecl internal_6f4a710()
{
    __asm
    {
        xor al, al
        ret 4
        UNREACHABLE_TRAP(0x6f4a710)
    }
}
