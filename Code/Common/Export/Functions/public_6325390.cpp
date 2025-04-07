#include "Common-PCH.h"

PROC_DECLARE(0x6325390, internal_6325390, public_6325390);
extern "C" NAKED register_t __cdecl internal_6325390()
{
    __asm
    {
        xor eax, eax
        ret 
        UNREACHABLE_TRAP(0x6325390)
    }
}
