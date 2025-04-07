#include "Freelancer-PCH.h"

PROC_DECLARE(0x454190, internal_454190, public_454190);
extern "C" NAKED register_t __cdecl internal_454190()
{
    __asm
    {
        mov eax, 0xFFFFFFF9
        ret 8
        UNREACHABLE_TRAP(0x454190)
    }
}
