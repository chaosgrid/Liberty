#include "Freelancer-PCH.h"

PROC_DECLARE(0x44fcc0, internal_44fcc0, public_44fcc0);
extern "C" NAKED register_t __cdecl internal_44fcc0()
{
    __asm
    {
        mov eax, 0xFFFFFFF9
        ret 4
        UNREACHABLE_TRAP(0x44fcc0)
    }
}
