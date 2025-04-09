#include "FreeLancer-PCH.h"

PROC_DECLARE(0x5b7194, internal_5b7194, public_5b7194);
extern "C" NAKED register_t __cdecl internal_5b7194()
{
    __asm
    {
        jmp dword ptr ds : [public_5c6710]
        UNREACHABLE_TRAP(0x5b7194)
    }
}
