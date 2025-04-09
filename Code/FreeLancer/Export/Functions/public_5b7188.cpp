#include "FreeLancer-PCH.h"

PROC_DECLARE(0x5b7188, internal_5b7188, public_5b7188);
extern "C" NAKED register_t __cdecl internal_5b7188()
{
    __asm
    {
        jmp dword ptr ds : [public_5c6708]
        UNREACHABLE_TRAP(0x5b7188)
    }
}
