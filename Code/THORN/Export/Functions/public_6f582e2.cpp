#include "THORN-PCH.h"

PROC_DECLARE(0x6f582e2, internal_6f582e2, public_6f582e2);
extern "C" NAKED register_t __cdecl internal_6f582e2()
{
    __asm
    {
        jmp dword ptr ds : [public_6f5a128]
        UNREACHABLE_TRAP(0x6f582e2)
    }
}
