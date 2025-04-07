#include "FLServer-PCH.h"

PROC_DECLARE(0x419164, internal_419164, public_419164);
extern "C" NAKED register_t __cdecl internal_419164()
{
    __asm
    {
        jmp dword ptr ds : [public_41b2c4]
        UNREACHABLE_TRAP(0x419164)
    }
}
