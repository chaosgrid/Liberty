#include "ReadFile-PCH.h"

PROC_DECLARE(0x6b77580, internal_6b77580, public_6b77580);
extern "C" NAKED register_t __cdecl internal_6b77580()
{
    __asm
    {
        mov eax, 1
        ret 0x18
        UNREACHABLE_TRAP(0x6b77580)
    }
}
