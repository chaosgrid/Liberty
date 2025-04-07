#include "Common-PCH.h"

PROC_DECLARE(0x62d1730, internal_62d1730, public_62d1730);
extern "C" NAKED register_t __cdecl internal_62d1730()
{
    __asm
    {
        mov eax, 1
        ret 4
        UNREACHABLE_TRAP(0x62d1730)
    }
}
