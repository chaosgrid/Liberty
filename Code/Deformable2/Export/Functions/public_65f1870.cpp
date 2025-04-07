#include "Deformable2-PCH.h"

PROC_DECLARE(0x65f1870, internal_65f1870, public_65f1870);
extern "C" NAKED register_t __cdecl internal_65f1870()
{
    __asm
    {
        or eax, 0xFFFFFFFF
        ret 0x20
        UNREACHABLE_TRAP(0x65f1870)
    }
}
