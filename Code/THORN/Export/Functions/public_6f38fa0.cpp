#include "THORN-PCH.h"

PROC_DECLARE(0x6f38fa0, internal_6f38fa0, public_6f38fa0);
extern "C" NAKED register_t __cdecl internal_6f38fa0()
{
    __asm
    {
        or eax, 0xFFFFFFFF
        ret 0x10
        UNREACHABLE_TRAP(0x6f38fa0)
    }
}
