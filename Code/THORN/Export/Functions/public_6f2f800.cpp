#include "THORN-PCH.h"

PROC_DECLARE(0x6f2f800, internal_6f2f800, public_6f2f800);
extern "C" NAKED register_t __cdecl internal_6f2f800()
{
    __asm
    {
        xor eax, eax
        ret 4
        UNREACHABLE_TRAP(0x6f2f800)
    }
}
