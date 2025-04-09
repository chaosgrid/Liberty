#include "FreeLancer-PCH.h"

PROC_DECLARE(0x5b722a, internal_5b722a, public_5b722a);
extern "C" NAKED register_t __cdecl internal_5b722a()
{
    __asm
    {
        jmp dword ptr ds : [public_5c6774]
        UNREACHABLE_TRAP(0x5b722a)
    }
}
