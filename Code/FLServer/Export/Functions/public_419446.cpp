#include "FLServer-PCH.h"

PROC_DECLARE(0x419446, internal_419446, public_419446);
extern "C" NAKED register_t __cdecl internal_419446()
{
    __asm
    {
        jmp dword ptr ds : [public_41b984]
        UNREACHABLE_TRAP(0x419446)
    }
}
