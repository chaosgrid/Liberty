#include "FLServer-PCH.h"

PROC_DECLARE(0x419910, internal_419910, public_419910);
extern "C" NAKED register_t __cdecl internal_419910()
{
    __asm
    {
        jmp dword ptr ds : [public_41b8b0]
        UNREACHABLE_TRAP(0x419910)
    }
}
