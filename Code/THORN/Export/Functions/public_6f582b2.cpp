#include "THORN-PCH.h"

PROC_DECLARE(0x6f582b2, internal_6f582b2, public_6f582b2);
extern "C" NAKED register_t __cdecl internal_6f582b2()
{
    __asm
    {
        jmp dword ptr ds : [public_6f5a108]
        UNREACHABLE_TRAP(0x6f582b2)
    }
}
