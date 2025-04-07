#include "Alchemy-PCH.h"

PROC_DECLARE(0x62305e0, internal_62305e0, public_62305e0);
extern "C" NAKED register_t __cdecl internal_62305e0()
{
    __asm
    {
        mov eax, 0xFFFFFFF9
        ret 4
        UNREACHABLE_TRAP(0x62305e0)
    }
}
