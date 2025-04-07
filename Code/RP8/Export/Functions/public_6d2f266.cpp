#include "RP8-PCH.h"

PROC_DECLARE(0x6d2f266, internal_6d2f266, public_6d2f266);
extern "C" NAKED register_t __cdecl internal_6d2f266()
{
    __asm
    {
        jmp dword ptr ds : [public_6d5e0c8]
        UNREACHABLE_TRAP(0x6d2f266)
    }
}
