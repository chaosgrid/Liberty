#include "FLServer-PCH.h"

PROC_DECLARE(0x419760, internal_419760, public_419760);
extern "C" NAKED register_t __cdecl internal_419760()
{
    __asm
    {
        jmp dword ptr ds : [public_41b134]
        UNREACHABLE_TRAP(0x419760)
    }
}
