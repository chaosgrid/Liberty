#include "FreeLancer-PCH.h"

PROC_DECLARE(0x5b720c, internal_5b720c, public_5b720c);
extern "C" NAKED register_t __cdecl internal_5b720c()
{
    __asm
    {
        jmp dword ptr ds : [public_5c6760]
        UNREACHABLE_TRAP(0x5b720c)
    }
}
