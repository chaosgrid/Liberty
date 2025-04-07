#include "FLServer-PCH.h"

PROC_DECLARE(0x419934, internal_419934, public_419934);
extern "C" NAKED register_t __cdecl internal_419934()
{
    __asm
    {
        jmp dword ptr ds : [public_41b8c0]
        UNREACHABLE_TRAP(0x419934)
    }
}
