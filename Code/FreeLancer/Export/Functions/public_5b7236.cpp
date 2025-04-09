#include "FreeLancer-PCH.h"

PROC_DECLARE(0x5b7236, internal_5b7236, public_5b7236);
extern "C" NAKED register_t __cdecl internal_5b7236()
{
    __asm
    {
        jmp dword ptr ds : [public_5c677c]
        UNREACHABLE_TRAP(0x5b7236)
    }
}
