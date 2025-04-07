#include "RendComp-PCH.h"

PROC_DECLARE(0x6c33450, internal_6c33450, public_6c33450);
extern "C" NAKED register_t __cdecl internal_6c33450()
{
    __asm
    {
        xor eax, eax
        ret 0x20
        UNREACHABLE_TRAP(0x6c33450)
    }
}
