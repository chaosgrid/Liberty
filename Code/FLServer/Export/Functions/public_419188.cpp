#include "FLServer-PCH.h"

PROC_DECLARE(0x419188, internal_419188, public_419188);
extern "C" NAKED register_t __cdecl internal_419188()
{
    __asm
    {
        jmp dword ptr ds : [public_41b2ac]
        UNREACHABLE_TRAP(0x419188)
    }
}
