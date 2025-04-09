#include "FreeLancer-PCH.h"

PROC_DECLARE(0x5b82f4, internal_5b82f4, public_5b82f4);
extern "C" NAKED register_t __cdecl internal_5b82f4()
{
    __asm
    {
        jmp dword ptr ds : [public_5c6e58]
        UNREACHABLE_TRAP(0x5b82f4)
    }
}
