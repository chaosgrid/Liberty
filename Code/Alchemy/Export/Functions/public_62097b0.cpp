#include "Alchemy-PCH.h"

PROC_DECLARE(0x62097b0, internal_62097b0, public_62097b0);
extern "C" NAKED register_t __cdecl internal_62097b0()
{
    __asm
    {
        mov eax, 0xFFFFFFF9
        ret 8
        UNREACHABLE_TRAP(0x62097b0)
    }
}
