#include "Alchemy-PCH.h"

PROC_DECLARE(0x62397d0, internal_62397d0, public_62397d0);
extern "C" NAKED register_t __cdecl internal_62397d0()
{
    __asm
    {
        mov eax, 0xFFFFFFF9
        ret 4
        UNREACHABLE_TRAP(0x62397d0)
    }
}
