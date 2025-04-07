#include "Common-PCH.h"

PROC_DECLARE(0x6361490, internal_6361490, public_6361490);
extern "C" NAKED register_t __cdecl internal_6361490()
{
    __asm
    {
        mov eax, 1
        ret 8
        UNREACHABLE_TRAP(0x6361490)
    }
}
