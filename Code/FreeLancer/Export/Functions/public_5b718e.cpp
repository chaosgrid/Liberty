#include "FreeLancer-PCH.h"

PROC_DECLARE(0x5b718e, internal_5b718e, public_5b718e);
extern "C" NAKED register_t __cdecl internal_5b718e()
{
    __asm
    {
        jmp dword ptr ds : [public_5c670c]
        UNREACHABLE_TRAP(0x5b718e)
    }
}
