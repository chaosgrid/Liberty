#include "RendComp-PCH.h"

PROC_DECLARE(0x6c29ff0, internal_6c29ff0, public_6c29ff0);
extern "C" NAKED register_t __cdecl internal_6c29ff0()
{
    __asm
    {
        or eax, 0xFFFFFFFF
        ret 0xC
        UNREACHABLE_TRAP(0x6c29ff0)
    }
}
