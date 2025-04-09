#include "FreeLancer-PCH.h"

PROC_DECLARE(0x5b72d8, internal_5b72d8, public_5b72d8);
extern "C" NAKED register_t __cdecl internal_5b72d8()
{
    __asm
    {
        jmp dword ptr ds : [public_5c6850]
        UNREACHABLE_TRAP(0x5b72d8)
    }
}
