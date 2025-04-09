#include "FreeLancer-PCH.h"

PROC_DECLARE(0x5b82fa, internal_5b82fa, public_5b82fa);
extern "C" NAKED register_t __cdecl internal_5b82fa()
{
    __asm
    {
        jmp dword ptr ds : [public_5c6e54]
        UNREACHABLE_TRAP(0x5b82fa)
    }
}
