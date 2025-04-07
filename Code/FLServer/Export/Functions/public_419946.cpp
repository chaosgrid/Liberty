#include "FLServer-PCH.h"

PROC_DECLARE(0x419946, internal_419946, public_419946);
extern "C" NAKED register_t __cdecl internal_419946()
{
    __asm
    {
        jmp dword ptr ds : [public_41b8dc]
        UNREACHABLE_TRAP(0x419946)
    }
}
