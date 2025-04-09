#include "FreeLancer-PCH.h"

PROC_DECLARE(0x43d8e0, internal_43d8e0, public_43d8e0);
extern "C" NAKED register_t __cdecl internal_43d8e0()
{
    __asm
    {
        mov al, 1
        ret 4
        UNREACHABLE_TRAP(0x43d8e0)
    }
}
