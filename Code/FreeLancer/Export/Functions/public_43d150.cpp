#include "FreeLancer-PCH.h"

PROC_DECLARE(0x43d150, internal_43d150, public_43d150);
extern "C" NAKED register_t __cdecl internal_43d150()
{
    __asm
    {
        mov al, 1
        ret 0x10
        UNREACHABLE_TRAP(0x43d150)
    }
}
