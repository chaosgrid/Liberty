#include "FreeLancer-PCH.h"

PROC_DECLARE(0x5b72a8, internal_5b72a8, public_5b72a8);
extern "C" NAKED register_t __cdecl internal_5b72a8()
{
    __asm
    {
        jmp dword ptr ds : [public_5c67c8]
        UNREACHABLE_TRAP(0x5b72a8)
    }
}
