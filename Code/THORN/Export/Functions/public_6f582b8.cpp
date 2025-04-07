#include "THORN-PCH.h"

PROC_DECLARE(0x6f582b8, internal_6f582b8, public_6f582b8);
extern "C" NAKED register_t __cdecl internal_6f582b8()
{
    __asm
    {
        jmp dword ptr ds : [public_6f5a10c]
        UNREACHABLE_TRAP(0x6f582b8)
    }
}
