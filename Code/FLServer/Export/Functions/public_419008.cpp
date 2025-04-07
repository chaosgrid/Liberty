#include "FLServer-PCH.h"

PROC_DECLARE(0x419008, internal_419008, public_419008);
extern "C" NAKED register_t __cdecl internal_419008()
{
    __asm
    {
        jmp dword ptr ds : [public_41b760]
        UNREACHABLE_TRAP(0x419008)
    }
}
