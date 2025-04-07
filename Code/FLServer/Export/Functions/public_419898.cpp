#include "FLServer-PCH.h"

PROC_DECLARE(0x419898, internal_419898, public_419898);
extern "C" NAKED register_t __cdecl internal_419898()
{
    __asm
    {
        jmp dword ptr ds : [public_41b870]
        UNREACHABLE_TRAP(0x419898)
    }
}
