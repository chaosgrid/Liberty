#include "THORN-PCH.h"

PROC_DECLARE(0x6f582a0, internal_6f582a0, public_6f582a0);
extern "C" NAKED register_t __cdecl internal_6f582a0()
{
    __asm
    {
        jmp dword ptr ds : [public_6f5a0fc]
        UNREACHABLE_TRAP(0x6f582a0)
    }
}
