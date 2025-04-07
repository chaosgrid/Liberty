#include "FLServer-PCH.h"

PROC_DECLARE(0x419850, internal_419850, public_419850);
extern "C" NAKED register_t __cdecl internal_419850()
{
    __asm
    {
        jmp dword ptr ds : [public_41b0fc]
        UNREACHABLE_TRAP(0x419850)
    }
}
