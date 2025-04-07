#include "Alchemy-PCH.h"

PROC_DECLARE(0x622d180, internal_622d180, public_622d180);
extern "C" NAKED register_t __cdecl internal_622d180()
{
    __asm
    {
        mov eax, 0xFFFFFFF9
        ret 4
        UNREACHABLE_TRAP(0x622d180)
    }
}
