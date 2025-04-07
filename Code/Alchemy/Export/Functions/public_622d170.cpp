#include "Alchemy-PCH.h"

PROC_DECLARE(0x622d170, internal_622d170, public_622d170);
extern "C" NAKED register_t __cdecl internal_622d170()
{
    __asm
    {
        ret 
        UNREACHABLE_TRAP(0x622d170)
    }
}
