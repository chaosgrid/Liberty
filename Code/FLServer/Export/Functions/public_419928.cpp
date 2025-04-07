#include "FLServer-PCH.h"

PROC_DECLARE(0x419928, internal_419928, public_419928);
extern "C" NAKED register_t __cdecl internal_419928()
{
    __asm
    {
        jmp dword ptr ds : [public_41b8cc]
        UNREACHABLE_TRAP(0x419928)
    }
}
