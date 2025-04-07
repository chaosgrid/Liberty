#include "Deformable2-PCH.h"

PROC_DECLARE(0x65f1890, internal_65f1890, public_65f1890);
extern "C" NAKED register_t __cdecl internal_65f1890()
{
    __asm
    {
        or eax, 0xFFFFFFFF
        ret 8
        UNREACHABLE_TRAP(0x65f1890)
    }
}
