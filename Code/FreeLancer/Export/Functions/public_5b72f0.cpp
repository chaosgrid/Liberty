#include "FreeLancer-PCH.h"

PROC_DECLARE(0x5b72f0, internal_5b72f0, public_5b72f0);
extern "C" NAKED register_t __cdecl internal_5b72f0()
{
    __asm
    {
        jmp dword ptr ds : [public_5c6860]
        UNREACHABLE_TRAP(0x5b72f0)
    }
}
