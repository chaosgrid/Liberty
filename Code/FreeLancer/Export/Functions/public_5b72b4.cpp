#include "FreeLancer-PCH.h"

PROC_DECLARE(0x5b72b4, internal_5b72b4, public_5b72b4);
extern "C" NAKED register_t __cdecl internal_5b72b4()
{
    __asm
    {
        jmp dword ptr ds : [public_5c67d0]
        UNREACHABLE_TRAP(0x5b72b4)
    }
}
