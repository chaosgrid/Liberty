#include "Alchemy-PCH.h"

PROC_DECLARE(0x62024f0, internal_62024f0, public_62024f0);
extern "C" NAKED register_t __cdecl internal_62024f0()
{
    __asm
    {
        mov al, byte ptr ds : [public_6255060]
        ret 4
        UNREACHABLE_TRAP(0x62024f0)
    }
}
