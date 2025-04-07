#include "FLServer-PCH.h"

PROC_DECLARE(0x419838, internal_419838, public_419838);
extern "C" NAKED register_t __cdecl internal_419838()
{
    __asm
    {
        jmp dword ptr ds : [public_41b0f0]
        UNREACHABLE_TRAP(0x419838)
    }
}
