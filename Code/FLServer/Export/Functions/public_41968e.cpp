#include "FLServer-PCH.h"

PROC_DECLARE(0x41968e, internal_41968e, public_41968e);
extern "C" NAKED register_t __cdecl internal_41968e()
{
    __asm
    {
        jmp dword ptr ds : [public_41b904]
        UNREACHABLE_TRAP(0x41968e)
    }
}
