#include "FLServer-PCH.h"

PROC_DECLARE(0x419496, internal_419496, public_419496);
extern "C" NAKED register_t __cdecl internal_419496()
{
    __asm
    {
        jmp dword ptr ds : [public_41b998]
        UNREACHABLE_TRAP(0x419496)
    }
}
