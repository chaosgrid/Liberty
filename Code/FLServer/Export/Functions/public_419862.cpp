#include "FLServer-PCH.h"

PROC_DECLARE(0x419862, internal_419862, public_419862);
extern "C" NAKED register_t __cdecl internal_419862()
{
    __asm
    {
        jmp dword ptr ds : [public_41b004]
        UNREACHABLE_TRAP(0x419862)
    }
}
