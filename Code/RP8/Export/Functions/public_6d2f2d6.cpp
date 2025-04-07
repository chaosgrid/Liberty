#include "RP8-PCH.h"

PROC_DECLARE(0x6d2f2d6, internal_6d2f2d6, public_6d2f2d6);
extern "C" NAKED register_t __cdecl internal_6d2f2d6()
{
    __asm
    {
        jmp dword ptr ds : [public_6d5e134]
        UNREACHABLE_TRAP(0x6d2f2d6)
    }
}
