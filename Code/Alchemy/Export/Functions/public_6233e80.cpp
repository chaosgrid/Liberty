#include "Alchemy-PCH.h"

PROC_DECLARE(0x6233e80, internal_6233e80, public_6233e80);
extern "C" NAKED register_t __cdecl internal_6233e80()
{
    __asm
    {
        ret 
        UNREACHABLE_TRAP(0x6233e80)
    }
}
