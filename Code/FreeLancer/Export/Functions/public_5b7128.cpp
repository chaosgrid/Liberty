#include "FreeLancer-PCH.h"

PROC_DECLARE(0x5b7128, internal_5b7128, public_5b7128);
extern "C" NAKED register_t __cdecl internal_5b7128()
{
    __asm
    {
        jmp dword ptr ds : [public_5c66c8]
        UNREACHABLE_TRAP(0x5b7128)
    }
}
