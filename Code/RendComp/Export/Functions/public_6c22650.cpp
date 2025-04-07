#include "RendComp-PCH.h"

PROC_DECLARE(0x6c22650, internal_6c22650, public_6c22650);
extern "C" NAKED register_t __cdecl internal_6c22650()
{
    __asm
    {
        or eax, 0xFFFFFFFF
        ret 8
        UNREACHABLE_TRAP(0x6c22650)
    }
}
