#include "FLServer-PCH.h"

PROC_DECLARE(0x419218, internal_419218, public_419218);
extern "C" NAKED register_t __cdecl internal_419218()
{
    __asm
    {
        jmp dword ptr ds : [public_41b240]
        UNREACHABLE_TRAP(0x419218)
    }
}
