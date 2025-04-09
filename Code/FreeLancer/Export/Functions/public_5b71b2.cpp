#include "FreeLancer-PCH.h"

PROC_DECLARE(0x5b71b2, internal_5b71b2, public_5b71b2);
extern "C" NAKED register_t __cdecl internal_5b71b2()
{
    __asm
    {
        jmp dword ptr ds : [public_5c6724]
        UNREACHABLE_TRAP(0x5b71b2)
    }
}
