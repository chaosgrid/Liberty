#include "RendComp-PCH.h"

PROC_DECLARE(0x6c29890, internal_6c29890, public_6c29890);
extern "C" NAKED register_t __cdecl internal_6c29890()
{
    __asm
    {
        mov eax, 0xFFFFFFF9
        ret 4
        UNREACHABLE_TRAP(0x6c29890)
    }
}
