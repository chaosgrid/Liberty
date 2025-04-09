#include "FreeLancer-PCH.h"

PROC_DECLARE(0x5b7182, internal_5b7182, public_5b7182);
extern "C" NAKED register_t __cdecl internal_5b7182()
{
    __asm
    {
        jmp dword ptr ds : [public_5c6704]
        UNREACHABLE_TRAP(0x5b7182)
    }
}
