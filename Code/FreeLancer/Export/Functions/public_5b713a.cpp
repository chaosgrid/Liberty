#include "FreeLancer-PCH.h"

PROC_DECLARE(0x5b713a, internal_5b713a, public_5b713a);
extern "C" NAKED register_t __cdecl internal_5b713a()
{
    __asm
    {
        jmp dword ptr ds : [public_5c66d4]
        UNREACHABLE_TRAP(0x5b713a)
    }
}
