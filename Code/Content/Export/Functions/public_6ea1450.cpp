#include "Content-PCH.h"

PROC_DECLARE(0x6ea1450, internal_6ea1450, public_6ea1450);
extern "C" NAKED register_t __cdecl internal_6ea1450()
{
    __asm
    {
        xor eax, eax
        ret 
        UNREACHABLE_TRAP(0x6ea1450)
    }
}
