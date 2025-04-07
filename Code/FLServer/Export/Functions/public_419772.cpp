#include "FLServer-PCH.h"

PROC_DECLARE(0x419772, internal_419772, public_419772);
extern "C" NAKED register_t __cdecl internal_419772()
{
    __asm
    {
        jmp dword ptr ds : [public_41bbf0]
        UNREACHABLE_TRAP(0x419772)
    }
}
