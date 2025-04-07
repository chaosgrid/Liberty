#include "FLServer-PCH.h"

PROC_DECLARE(0x418e94, internal_418e94, public_418e94);
extern "C" NAKED register_t __cdecl internal_418e94()
{
    __asm
    {
        jmp dword ptr ds : [public_41b660]
        UNREACHABLE_TRAP(0x418e94)
    }
}
