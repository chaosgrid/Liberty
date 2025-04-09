#include "FreeLancer-PCH.h"

PROC_DECLARE(0x5b71f4, internal_5b71f4, public_5b71f4);
extern "C" NAKED register_t __cdecl internal_5b71f4()
{
    __asm
    {
        jmp dword ptr ds : [public_5c6750]
        UNREACHABLE_TRAP(0x5b71f4)
    }
}
