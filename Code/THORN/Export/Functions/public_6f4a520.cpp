#include "THORN-PCH.h"

PROC_DECLARE(0x6f4a520, internal_6f4a520, public_6f4a520);
extern "C" NAKED register_t __cdecl internal_6f4a520()
{
    __asm
    {
        xor al, al
        ret 4
        UNREACHABLE_TRAP(0x6f4a520)
    }
}
