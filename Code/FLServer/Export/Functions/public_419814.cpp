#include "FLServer-PCH.h"

PROC_DECLARE(0x419814, internal_419814, public_419814);
extern "C" NAKED register_t __cdecl internal_419814()
{
    __asm
    {
        jmp dword ptr ds : [public_41b120]
        UNREACHABLE_TRAP(0x419814)
    }
}
