#include "FLServer-PCH.h"

PROC_DECLARE(0x419730, internal_419730, public_419730);
extern "C" NAKED register_t __cdecl internal_419730()
{
    __asm
    {
        jmp dword ptr ds : [public_41b158]
        UNREACHABLE_TRAP(0x419730)
    }
}
