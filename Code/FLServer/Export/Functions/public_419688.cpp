#include "FLServer-PCH.h"

PROC_DECLARE(0x419688, internal_419688, public_419688);
extern "C" NAKED register_t __cdecl internal_419688()
{
    __asm
    {
        jmp dword ptr ds : [public_41b908]
        UNREACHABLE_TRAP(0x419688)
    }
}
