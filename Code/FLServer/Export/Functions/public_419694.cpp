#include "FLServer-PCH.h"

PROC_DECLARE(0x419694, internal_419694, public_419694);
extern "C" NAKED register_t __cdecl internal_419694()
{
    __asm
    {
        jmp dword ptr ds : [public_41b900]
        UNREACHABLE_TRAP(0x419694)
    }
}
