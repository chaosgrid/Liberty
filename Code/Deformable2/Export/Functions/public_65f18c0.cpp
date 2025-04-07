#include "Deformable2-PCH.h"

PROC_DECLARE(0x65f18c0, internal_65f18c0, public_65f18c0);
extern "C" NAKED register_t __cdecl internal_65f18c0()
{
    __asm
    {
        or eax, 0xFFFFFFFF
        ret 0x10
        UNREACHABLE_TRAP(0x65f18c0)
    }
}
