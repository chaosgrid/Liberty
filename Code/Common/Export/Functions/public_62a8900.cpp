#include "Common-PCH.h"

PROC_DECLARE(0x62a8900, internal_62a8900, public_62a8900);
extern "C" NAKED register_t __cdecl internal_62a8900()
{
    __asm
    {
        xor al, al
        ret 0xC
        UNREACHABLE_TRAP(0x62a8900)
    }
}
