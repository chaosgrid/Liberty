#include "FLServer-PCH.h"

PROC_DECLARE(0x419434, internal_419434, public_419434);
extern "C" NAKED register_t __cdecl internal_419434()
{
    __asm
    {
        jmp dword ptr ds : [public_41b978]
        UNREACHABLE_TRAP(0x419434)
    }
}
