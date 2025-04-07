#include "Shading-PCH.h"

PROC_DECLARE(0x6eb1a00, internal_6eb1a00, public_6eb1a00);
extern "C" NAKED register_t __cdecl internal_6eb1a00()
{
    __asm
    {
        xor eax, eax
        ret 4
        UNREACHABLE_TRAP(0x6eb1a00)
    }
}
