#include "FLServer-PCH.h"

PROC_DECLARE(0x40cd70, internal_40cd70, public_40cd70);
extern "C" NAKED register_t __cdecl internal_40cd70()
{
    __asm
    {
        ret 
        UNREACHABLE_TRAP(0x40cd70)
    }
}
