#include "Deformable2-PCH.h"

PROC_DECLARE(0x65f1880, internal_65f1880, public_65f1880);
extern "C" NAKED register_t __cdecl internal_65f1880()
{
    __asm
    {
        or eax, 0xFFFFFFFF
        ret 0xC
        UNREACHABLE_TRAP(0x65f1880)
    }
}
