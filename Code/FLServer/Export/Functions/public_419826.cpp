#include "FLServer-PCH.h"

PROC_DECLARE(0x419826, internal_419826, public_419826);
extern "C" NAKED register_t __cdecl internal_419826()
{
    __asm
    {
        jmp dword ptr ds : [public_41b114]
        UNREACHABLE_TRAP(0x419826)
    }
}
